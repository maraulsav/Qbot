// SBR.ino
#include <Arduino.h>
#include "motor.h"
#include "espnow.h"
#include "display.h"
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>

#include "I2Cdev.h"
#include "MPU6050.h"
#include "math.h"

//MPU6050 variables
MPU6050 mpu;
int16_t gyroX, gyroRate;
float gyroAngle=0;
unsigned long currTime, prevTime=0, loopTime;

void mpuWriteReg(uint8_t reg, uint8_t val) {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(reg);
  Wire.write(val);
  Wire.endTransmission();
}

void mpuInit() {
  Wire.begin(SDA_PIN, SCL_PIN);
  Wire.setClock(400000);
  mpuWriteReg(0x6B, 0x00);
  delay(100);
  mpuWriteReg(0x1B, 0x00); 
  mpuWriteReg(0x1C, 0x00); 
}

void mpuReadRaw() {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3D); 
  Wire.endTransmission(false);
  Wire.requestFrom((int)MPU_ADDR, 8, true); 

  accY_raw  = (Wire.read() << 8) | Wire.read();
  accZ_raw  = (Wire.read() << 8) | Wire.read();
  Wire.read(); Wire.read(); // discard temperature
  int16_t gx = (Wire.read() << 8) | Wire.read();
  gyroX_raw = gx;
}

// PID control variables
double setpoint = 3;  // Desired angle (upright position)
double input = 0.0;   // Current angle from IMU
double output = 0.0;  // PID controller output

// PID tuning parameters (to be adjusted via ESP-NOW)
double Kp = 20.0;
double Ki = 0.0;
double Kd = 0.3;

// PID calculation variables
double previousError = 0.0;
double integral = 0.0;
unsigned long lastComputeTime = 0;

void setup() {
  // Initialize serial communication
  Serial.begin(115200);
  while (!Serial) {
    delay(10);  // Wait for Serial to initialize
  }

  // Initialize the MPU 6050 sensor
  if (mpu.initialize()) {
    Serial.println("Error initializing MPU6050! Check your connections.");
    while (1)
      ;
  }

  delay(2000);  // Allow sensor initialization
  Serial.println("MPU6050 sensor initialized successfully!");
  // Initialize motor
  motorSetup();
  // Initialize last compute time
  lastComputeTime = millis();
  // Initialize ESP-NOW
  espnowSetup();
  displaySetup();
}

void loop() {
  // Read sensor data every 10ms
  static unsigned long lastSensorReadTime = 0;
  accY = mpu.getAccelerationY();
  accZ = mpu.getAccelerationZ();  
  gyroX = mpu.getRotationX();

  if (millis() - lastSensorReadTime >= 10) {

    // Get orientation data from IMU
    accAngle = atan2(accY, accZ)*RAD_TO_DEG;
    gyroRate = map(gyroX, -32768, 32767, -250, 250);
    gyroAngle = (float)gyroRate*sampleTime;  
    orientationData = 0.9934*(prevAngle + gyroAngle) + 0.0066*(accAngle);
  
    error = currentAngle - targetAngle;
    errorSum = errorSum + error;  
    errorSum = constrain(errorSum, -300, 300);


    // Extract the pitch angle (assuming orientation.z is pitch)
    input = orientationData.orientation.z;

    // Compute PID output
    computePID();

    // Update motor control based on PID output
    updateMotorControl(output);

    // Send PID data via ESP-NOW
    sendPIDData();

    // Debugging output (optional)
    Serial.print("Setpoint:");
    Serial.print(setpoint);
    Serial.print(",");
    Serial.print("Pitch:");
    Serial.print(input);
    Serial.print(",");
    Serial.print("PID Output:");
    Serial.println(output);
  }

  // Generate step pulses
  generateStepPulses();
}

void computePID() {
  unsigned long currentTime = millis();
  double dt = (currentTime - lastComputeTime) / 1000.0;  // Convert to seconds
  lastComputeTime = currentTime;

  // Avoid division by zero
  if (dt <= 0)
    dt = 0.001;

  // Calculate error
  //double error = setpoint - input;

  // Calculate integral
  //integral += error * dt;
  integral += errorsum * dt

  // Apply integral windup protection
  if (integral > 3) {
    integral = 3;
  }
  if (integral < -3) {
    integral = -3;
  }

  // Calculate derivative
  double derivative = (error - previousError) / dt;

  // Compute PID output
  output = Kp * error + Ki * integral + Kd * derivative;

  // Save error for next loop
  previousError = error;

  // Constrain output
  if (output > 255) {
    output = 255;
  }
  if (output < -255) {
    output = -255;
  }

  // Populate pidData for sending
  pidData.p = Kp * error;
  pidData.i = Ki * integral;
  pidData.d = Kd * derivative;
  pidData.setpoint = setpoint;
  pidData.input = input;
  pidData.output = output;

  // Debugging output (optional)
  Serial.print("P:");
  Serial.print(pidData.p);
  Serial.print(",");
  Serial.print("I:");
  Serial.print(pidData.i);
  Serial.print(",");
  Serial.print("D:");
  Serial.print(pidData.d);
  Serial.print(",");
}
