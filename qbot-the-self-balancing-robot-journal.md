# Qbot the self balancing robot

A self  balancing robot.. I want to make this for my mother a cute lil robot because oen month again I will  moved out of my country

# 2026-07-07: Finishing the 3D Design

**Total time spent: 2 hours**

WOHOOOOO!!!
FINALLYY! I finished the Qbot 3D design
Soo, I changed my mind about the magnet because I think magnet might affect the gyroscope, so I think I would use a heeatset insert combined with nails. Also I think that would hold things strongly... Here, I also design the head of the Qbot. I think its cute enough, and proportional welp its more like a chibi but its cute. 

![image](https://cdn.hackclub.com/019f3c20-c870-786d-ac8d-7ca8e54dae77/Screenshot%202026-07-07%20at%2017.30.02.png)

Here is the time lapse:
Time Lapse:  https://lapse.hackclub.com/timelapse/1YpfYYWa6enn

# 2026-07-06: Qbot Body and Neck 3D Design

**Total time spent: 3 hours**

At first I though to connect the body and the door with hinges. But then I thought because I use a 3D print and the the door will be a flying object it would need a lot of support and har to be 3D printed, so I thought to use magnet as a connector

![image](https://cdn.hackclub.com/019f35bf-d8df-71cd-9f30-c4105959a58d/Screenshot%202026-07-06%20at%2011.46.24.png)


This is the time lapse: https://lapse.hackclub.com/timelapse/bFA7tEurqMoV

# 2026-07-05: Qbot Code Update

**Total time spent: 2 hours**

Hi guys I got to the core of the codes.
Finally, woagh, I understand what I supposed to do (hopefully it works).
I think this instructable article really gave a solid knowledge on how does the PID system works and also to set up the GY521 device
https://www.instructables.com/Arduino-Self-Balancing-Robot-1/

![image](https://cdn.hackclub.com/019f3111-85a2-760e-b942-89ae564faf14/Screenshot%202026-07-05%20at%2013.57.33.png)

This is the code time lapse:
https://lapse.hackclub.com/timelapse/tOPbFWzLiS3k

# 2026-07-04: Update Schematic and PCB

**Total time spent: 2 hours**

Okay guys so I need to update my schematic and PCB. 

Why I need to update it :
First, The price of IMUBNO055 makes me get a heart attack (jk jk)
but I just know that the price was so high like in my country it is higher than 1/3 my country minimum wage (X-X). Initially when I built this project, I searched up a component that are beginner friendly, and some recommend the BNO055 because it have high accuracy and easy to use, but I don't know the price was really that high.

Second, I forgot that not all esp32 devkit C pins is able to transfer SCL and SDA output. Especially some pins are designated only for input.. So I change that also.

This is the updated schematic:
![image](https://cdn.hackclub.com/019f2bf3-b465-7f0d-b65e-6f9f0bbdce3b/Screenshot%202026-07-04%20at%2014.06.53.png)!

This is the updated PCB:
![image](https://cdn.hackclub.com/019f2be2-c091-7296-9926-b1de51a7853d/Screenshot%202026-07-04%20at%2013.48.22.png)

The time lapse
https://lapse.hackclub.com/timelapse/12TPUjm68HXh

# 2026-07-03: Coding Part 1

**Total time spent: 5.7 hours**

Hello guyss
Just finished coding the display part. I even manage to made my own eyes animation ^^ I use rive for this project. Oh also I found a really good website that can convert your image to cpp: https://javl.github.io/image2cpp/

But I think what's really challenging from this journey is.. understanding HOWW PID WORKSSS WAGGHHH.. Like I know the theory but when I saw like an example of someone else coding part I barely understand anything T-T 

Like I think it really takes alot of time to figure out what happened. This is my first PID project and yeah I still don't really know how everything works and connect to each other. 

![image](https://cdn.hackclub.com/019f274a-3163-7bf1-896f-62b03f0f1a0f/Screenshot%202026-07-03%20at%2016.23.15.png)


I think I will made a part two of my coding journey
Below is the time lapse:
https://lapse.hackclub.com/timelapse/dI2dgVFvJQu4

# 2026-07-01: Wiring Diagram

**Total time spent: 0.2 hours**

Hi! here I made the wiring diagram just incase later people confused on how to connect the PCB to other components. Its also made me easier to determine which things I need to buy

![Screenshot 2026-07-01 at 17.32.56](https://stasis.hackclub-assets.com/images/1782901981980-k8tdqj.png)

# 2026-07-01: Design the PCB 

**Total time spent: 1.7 hours**

Hi guyss I am finishing my PCB Design. Here's my final result
![Screenshot 2026-07-01 at 16.54.29](https://stasis.hackclub-assets.com/images/1782899673270-y2irer.png)

I think PCB design was the most exciting part when I built a project because it feels like connecting puzzle. 

Oh and also few decision making from me is that
I use 2 milimiter trace for the 15V and some of the GND to reduce voltage drop and also allowing higher current carrying capacity. Also I did a ground pour because I wanted to improve the heat dissipation. As I used large voltage I think heat would be one of problem that I should manage.

Oh and I also keep the ESP32C3 usb place clear so that I can plug my cable thereee. 

I think what I would recommend when doing a PCB tracking is that you have to some short of imagining how the whole product gonna look and also saw your schematic so you have a good reference

Here's the time lapse
https://lapse.hackclub.com/timelapse/fii9hiq6UW8N

# 2026-06-30: Schematic Design

**Total time spent: 4.5 hours**

Hi! I have finished my schematic design. Below is the picture of it

![Screenshot 2026-06-30 at 14.00.26](https://stasis.hackclub-assets.com/images/1782802829885-j3x3ap.png)

So, how did I made the schematic design.
First of all, I watched other people design self-balancing robots. here's what I recommend to watch, they made good documentation too
1. https://www.youtube.com/watch?v=J5Xd43LIFiU
2. https://www.instructables.com/Arduino-Self-Balancing-Robot-1/

Then I observed their schematics and tried to understand each component and how can they work and influence each other. Then, I proceed to made my own schematic, I check the availability of the components in my country. and also for making the PCB I only use the through hole component, because SMD is really hardd to solder. 

Oh also then you need to search for the suitable footprint

I think the most challenging part to make this schematic design is searching for the component that are available and making sure that they compatible and suitable for the project that I used.

A few decision making
I decide to use two oled display for the eyes of the robot because I think if I used only one the eyes would be really small and if I use the circular OLED display (I am planning to use 2 display) it used seven pins each so I think its kind of overkill.

The timelapse: https://lapse.hackclub.com/timelapse/6rL22KKTCqLC 
Oh btw sorry at some part I forgot to turn off the timelapse when put my mac on sleep. I have cut the blank part in my time submission here




# 2026-06-25: Ideas

**Total time spent: 0.5 hours**

I think this robot will be a lot like the Wall-E robot. WAGHH SO CUTEEE.
Well, I have made like how is it going to look like in Canva.


![Screenshot 2026-06-26 at 09.10.13](https://stasis.hackclub-assets.com/images/1782439817797-mb7j0q.png)

( I dont know why I have difficuty on uploading image, like I need to upload it to another program journal then copy the code to this)

I think I am gonna make like 3 layers 
The bottom one is for the motor driver and the wheel..
Then the second layer is for the microcontroller thingy and the IMU BNO055 sensor for balancing
And the third layer is for the bateries and the OLED Display I still cant decide which better using two circle oled display or just one rectangle oled display, I think I still need to think about it


