# Qbot-the-self-balancing-robot
Qbot is a self balancing robot that integrate PID mechanism to balances.

The Final Design:

<img width="332" height="287" alt="Screenshot 2026-07-08 at 08 17 46" src="https://github.com/user-attachments/assets/b72bf346-7e2d-4ff7-86d7-83455387913a" />

## Key Features
* **ESP32 DevKit C** is the main microcontroller allowing wifi connection for remote controller
* **OLED display 128 x 64 px** for displaying the faces and current state of emotion
* **15 V Lipo Battery** to give power supply
* **MPU 6050** Act as gyroscope and accelerator to measure the degree of robot imbalance
* **Buzzer** to make sounds
* **Button** to regulate the power supply from battery
* **LM7805** to regulate the voltage supply
* **A4988 Stepper Driver** To help control the wheel motion

## Printed Circuit Board (PCB)
Below is the schematic that I used

<img width="822" height="574" alt="Screenshot 2026-07-08 at 08 06 17" src="https://github.com/user-attachments/assets/d36dcecd-9f60-4fa9-aba3-560270aaccc0" />

Below is the PCB design

<img width="1016" height="648" alt="Screenshot 2026-07-08 at 08 07 22" src="https://github.com/user-attachments/assets/5a4d9996-e977-47f4-ade3-a6f790920d38" />

And here how to connect the PCB to other component of the robot

<img width="625" height="358" alt="Screenshot 2026-07-08 at 08 08 44" src="https://github.com/user-attachments/assets/28deaba5-2eb7-4c3a-a1d1-bc22236d5fc7" />


**PCB Footprint List**
* MotoDriver: Module:Pololu_Breakout-16_15.2x20.3mm
* 10uF capacitor: Capacitor_THT:CP_Radial_D5.0mm_P2.00mm
* 100uF capacitor: Capacitor_THT:CP_Radial_D6.3mm_P2.50mm
* Zener Diode: Diode_THT:D_DO-35_SOD27_P10.16mm_Horizontal
* LED: LED_THT:LED_D3.0mm
* Mounting Hole: MountingHole:MountingHole_3.2mm_M3
* Connector: Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical
* Connector 1x02: Connector_AMASS:AMASS_XT30U-M_1x02_P5.0mm_Vertical
* GY521 (MPU6050): GY-521:MODULE_GY-521
* ESP32 DevKit C: Library:MODULE_ESP32-DEVKITC
* LM7805 : Package_TO_SOT_THT:TO-220-3_Vertical

## 3D Design
Front Side

<img width="453" height="433" alt="Screenshot 2026-07-08 at 08 16 54" src="https://github.com/user-attachments/assets/c9999161-b97a-4f02-bf66-2302ee1ac9fa" />

Right Side

<img width="307" height="297" alt="Screenshot 2026-07-08 at 08 18 18" src="https://github.com/user-attachments/assets/b9acb21a-7e4e-4296-940e-75ca62a938b8" />

Back Side

<img width="313" height="246" alt="Screenshot 2026-07-08 at 08 18 39" src="https://github.com/user-attachments/assets/70512545-a596-43af-8ffc-e1ecab4e64d1" />

Left Side

<img width="177" height="202" alt="Screenshot 2026-07-08 at 08 19 27" src="https://github.com/user-attachments/assets/c1758e29-de37-41f5-b1bb-8a7f5ed318fc" />

Home Position

<img width="478" height="491" alt="Screenshot 2026-07-08 at 08 20 03" src="https://github.com/user-attachments/assets/5dca0489-2999-4ff6-8631-7847eac210e5" />



## Codes
Code Sample:

<img width="1440" height="900" alt="Screenshot 2026-07-08 at 08 21 20" src="https://github.com/user-attachments/assets/fefbc7b6-a2ee-4ae5-97ba-7eb258ee5750" />



## BOM
| Component | Qty | Total (IDR) | Total (USD) | Link |
|-----------|----:|------------:|------------:|------|
| Stepper Motor | 2 | 182,000 | $10.12 |[Link](https://www.tokopedia.com/cncstorejogja/usongshine-nema-17-17hs4401-motor-stepper-42-40mm-12v-1-5a-plus-kabel) |
| Printed Circuit Board (PCB) | 1 | — | $3.50 | — |
| Wheel | 2 | 24,000 | $1.34 | [Link](https://www.tokopedia.com/arduinonano/roda-65mm-karet-rubber-wheel-robot-tire-tt-motor-smart-car-diy-wheel) |
| ESP32-C3 DevKit | 1 | 85,000 | $4.73 | [Link](https://www.tokopedia.com/temins/esp32-nodemcu-esp-32-esp32s-32s-wifi-module-devkit-dev-38-pin-1729797014153692567?t_id=1782901083899&t_st=27&t_pp=cart&t_efo=cart&t_ef=&t_sm=&t_spt=cart) |
| GY-521 MPU-6050 | 1 | 29,500 | $1.64 | [Link](https://www.tokopedia.com/khurs-iot/gy-521-mpu-6050-3-axis-accelerometer-gyroscope-arduino-raspberry-pi?extParam=ivf%3Dfalse%26keyword%3Dgy-521+module+with+mpu-6050%26search_id%3D20260703094308371BCE7DC8381718578F%26src%3Dsearch&t_id=1782901083899&t_st=24&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| A4988 Stepper Driver | 2 | 34,000 | $1.89 | [Link](https://www.tokopedia.com/temins/a4988-reprap-stepper-driver-cnc-3d-printer?extParam=ivf%3Dfalse%26keyword%3Dpololu+breakout+4988%26search_id%3D20260703094525CD00692C3BFE59295A6C%26src%3Dsearch&t_id=1782901083899&t_st=25&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| LiPo Battery (11.1V) | 1 | 169,200 | $9.42 | [Link](https://www.tokopedia.com/rin-toys/baterai-lipo-11-1-volt-3s-batre-lithium-polymer-for-wgg-mobil-rc-1734386815592072921?extParam=ivf%3Dfalse%26keyword%3Dlipobattery%26search_id%3D20260703100056B83AAC23B952872AFVWB%26src%3Dsearch&t_id=1782901083899&t_st=34&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| LiPo Battery Charger | 1 | 65,000 | $3.61 | [Link](https://www.tokopedia.com/rin-toys/charger-baterai-balance-charger-for-2s-3s-7-4v-11-1v-lithium-lipo-battery-1731018524016871129?extParam=whid%3D18463153%26src%3Dchat) |
| Neodymium Magnet | 1 | 20,000 | $1.11 | [Link](https://www.tokopedia.com/tokodstore/magnet-kuat-neodymium-bulat-diy-5-3mm-50pcs?extParam=ivf%3Dfalse%26keyword%3Dmini+magnet%26search_id%3D202607050039293FE94A002317B5346ZJK%26src%3Dsearch&t_id=1783211974588&t_st=1&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| OLED Display | 2 | 58,000 | $3.22 | — |
| Push Button | 1 | 15,000 | $0.83 | [Link](https://www.tokopedia.com/arduinonano/r16-503bd-4-pin-16mm-push-on-non-locked-button-switch-250v-light-merah?extParam=src%3Dshop%26whid%3D2850960&aff_unique_id=&channel=others&chain_key=) |
| Jumper Wire (15 cm, 40 pcs) | 1 pack | 23,000 | $1.28 | [Tokopedia](https://www.tokopedia.com/arduinonano/kabel-jumper-40p-cable-dupont-pelangi-15cm-40pin-header-cable-pin-rainbow-15-cm-1729801397622441069?extParam=src%3Dshop%26whid%3D2850960&aff_unique_id=&channel=others&chain_key=) |
| Header Pin | 1 pack | 14,000 | $0.78 | [Link](https://www.tokopedia.com/arduinonano/1x40-pin-2-0mm-male-single-row-header-strip-40-40p-pit-2mm-tulang-ikan?extParam=src%3Dshop%26whid%3D2850960&aff_unique_id=&channel=others&chain_key=) |
| Heatsink | 2 | 4,656 | $0.26 | [Link](https://www.tokopedia.com/rajacell/heatsink-aluminium-pendingin-14x14x6mm-dengan-3m-thermal-tape?extParam=ivf%3Dfalse%26keyword%3Dheat+set+insert+%26search_id%3D202607080016323FE94A002317B501AGHP%26src%3Dsearch&t_id=1783310432964&t_st=4&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| Heat-Set Inserts | 1 | 252,200 | $14.02 | [Link](https://www.tokopedia.com/smbility/insert-nut-kuningan-hot-500pcs-hot-melt-nutinsert-thread-knurled-spiral-brass-nut-insert-1730606018733835796?extParam=ivf%3Dfalse%26keyword%3Dheat+insert+m3%26search_id%3D20260708002015C042F4DB68F234374NW5%26src%3Dsearch&t_id=1783310432964&t_st=8&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| Nut Set | 1 | 131,000 | $7.28 | [Link](https://www.tokopedia.com/fyn-by-finedego/baut-set-m3-m4-m5-m6-600-pcs-hex-ring-mur-screw-bolt-nuts-assortment-kit-stainless-steel-l-bulat-40mm-30mm-20mm-10mm-16mm-12mm-8mm-paket-taffware-sa6-1734446427248887202?extParam=ivf%3Dfalse%26keyword%3Dheat+insert+nut+m3+x+4mm%26search_id%3D20260708002226AD972F10E0800B042LX3%26src%3Dsearch&t_id=1783310432964&t_st=9&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| 10 µF Capacitor | 1 | 20,400 | $1.14 | [Link](https://www.tokopedia.com/lektropedia/elco-10uf-450v-kapasitor-10-uf-mikro-450-v-volt-elko-450volt-capasitor-1-49-pcs-ed5a8?extParam=ivf%3Dfalse%26keyword%3Dcapacitor+10uf%26search_id%3D20260708004347A49E9411D64FF5084HN8%26src%3Dsearch&t_id=1783310432964&t_st=10&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| 100 µF Capacitor | 3 | 24,900 | $1.16 | [Link](https://www.tokopedia.com/lektropedia/elco-100uf-450v-kapasitor-100-uf-mikro-450-v-volt-elko-450volt?extParam=ivf%3Dfalse%26keyword%3Dcapacitor+100+uf%26search_id%3D2026070800445800EC53C4682D362CDQEE%26src%3Dsearch&t_id=1783310432964&t_st=11&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| Zener Diode | 1 | 10,000 | $0.56 | [Link](https://www.tokopedia.com/arduinonano/dioda-zener-1w-3v6-3-6v-1n4729a-in4729a-1n4729-in4729-diode-do-41?extParam=ivf%3Dfalse%26keyword%3Dzener+diode%26search_id%3D2026070800473015D4E891D7849731AFTY%26src%3Dsearch&t_id=1783310432964&t_st=12&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| LED | 1 | 1,250 | $0.07 | [Link](https://www.tokopedia.com/arduinonano/led-blink-red-5mm-diode-super-bright-led-kedip-merah-led-5mm-kedip?extParam=src%3Dshop%26whid%3D2850960&aff_unique_id=&channel=others&chain_key=) |
| 1 kΩ Resistor | 1 | 15,000 | $0.83 | [Link](https://www.tokopedia.com/arduinonano/10pcs-resistor-1k-1-kilo-k-ohm-1-4-watt-0-25-metal-film-tolerance-1?extParam=ivf%3Dfalse%26keyword%3D1k+resistor%26search_id%3D202607080049581543843A4723ED160GND%26src%3Dsearch&t_id=1783310432964&t_st=15&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| LM7805 Voltage Regulator | 1 | 3,000 | $0.17 | [Link](https://www.tokopedia.com/khurs-iot/ic-regulator-7805-l7805cv-lm7805-voltage-regulator-5-volt?extParam=ivf%3Dfalse%26keyword%3Dlm7805+regulator%26search_id%3D20260708005128A96B65A721E5610B1E05%26src%3Dsearch&t_id=1783310432964&t_st=16&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| Active Buzzer | 1 | 5,000 | $0.28 | [Link](https://www.tokopedia.com/azzamarduino/buzzer-speaker-aktif-active-dc-3v-24v-sfm-27-3cm-input-3v-5v-12v-bunyi?extParam=ivf%3Dfalse%26keyword%3Dbuzzer%26search_id%3D20260708005325CD00692C3BFE5926FWW3%26src%3Dsearch&t_id=1783310432964&t_st=17&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| XT30 Amass Connector | 1 | 8,500 | $0.47 | [Link](https://www.tokopedia.com/arduinonano/amass-connector-plug-xt30u-amass-xt-30-u-konektor-for-power-1732555087363605613?extParam=ivf%3Dfalse%26keyword%3Damass+connector%26search_id%3D202607080057278BF1211FD4B7B91A5G6M%26src%3Dsearch&t_id=1783310432964&t_st=19&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| 3D Printed Parts | — | — | $9.00 | — |
| **Total** | | **IDR1,194,606** | **USD78.71** | |
