# Qbot-the-self-balancing-robot
Qbot is a self balancing robot that integrate PID mechanism to balances.

The Final Design:
<img width="476" height="488" alt="image" src="https://github.com/user-attachments/assets/d5a7f058-388c-4f33-a381-da5d9b55cd10" />


## Key Features
* **ESP32 DevKit C** is the main microcontroller allowing wifi connection for remote controller
* **OLED display 128 x 64 px** for displaying the faces and current state of emotion
* **15 V Lipo Battery** to give power supply
* **MPU 6050** Act as gyroscope and accelerator to measure the degree of robot imbalance
* **Buzzer** to make sounds
* **Button** to regulate the power supply from battery
* **DC DC Buck Converter** to regulate the voltage supply
* **TMC2208 Motor Driver** To help control the wheel motion

## Printed Circuit Board (PCB)
Below is the schematic that I used

<img width="986" height="688" alt="image" src="https://github.com/user-attachments/assets/f7c44deb-e8cc-4abc-b855-e4d71eedacae" />

Below is the PCB design

<img width="1022" height="764" alt="image" src="https://github.com/user-attachments/assets/5d15220c-59b6-4fb2-8151-8b67b58f9323" />

And here how to connect the PCB to other component of the robot

<img width="1074" height="834" alt="image" src="https://github.com/user-attachments/assets/2090e470-6783-47b5-b9de-1d64a7192b10" />


**PCB Footprint List**
* 10uF capacitor: Capacitor_THT:CP_Radial_D5.0mm_P2.00mm
* 100uF capacitor: Capacitor_THT:CP_Radial_D6.3mm_P2.50mm
* Zener Diode: Diode_THT:D_DO-35_SOD27_P10.16mm_Horizontal
* LED: LED_THT:LED_D3.0mm
* Mounting Hole: MountingHole:MountingHole_3.2mm_M3
* Connector: Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical
* Connector 1x02: Connector_AMASS:AMASS_XT30U-M_1x02_P5.0mm_Vertical
* GY521 (MPU6050): GY-521:MODULE_GY-521
* ESP32 DevKit C: Library:MODULE_ESP32-DEVKITC
* TMC2208_SILENTSTEPSTICK:MODULE_TMC2208_SILENTSTEPSTICK

## 3D Design
Front Side

<img width="394" height="382" alt="image" src="https://github.com/user-attachments/assets/b628fe8d-0d16-46d6-a858-7fb4cd39932d" />


Right Side

<img width="254" height="442" alt="image" src="https://github.com/user-attachments/assets/f35a3d2e-5a54-4216-a2bd-7d002902712d" />

Back Side

<img width="370" height="356" alt="image" src="https://github.com/user-attachments/assets/d2ff88d0-c405-4001-aceb-e229d8519b08" />




## Codes
Code Sample:

<img width="1440" height="900" alt="Screenshot 2026-07-08 at 08 21 20" src="https://github.com/user-attachments/assets/fefbc7b6-a2ee-4ae5-97ba-7eb258ee5750" />



## BOM
| Component | Qty | Total (IDR) | Total (USD) | Link |
|-----------|----:|------------:|------------:|------|
| Stepper Motor 17HS4401S | 2 | - | $19.08 |[Link](https://www.aliexpress.com/item/1005008098470320.html?spm=a2g0o.productlist.main.2.28cfa8cpa8cpOK&algo_pvid=d640442b-15d3-4dfb-b6e0-f32e19ed61e5&algo_exp_id=d640442b-15d3-4dfb-b6e0-f32e19ed61e5-1&pdp_ext_f=%7B%22order%22%3A%2252%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21SGD%219.54%215.26%21%21%217.26%214.00%21%400be71e1e17897422834053183e0cf3%2112000043729379107%21sea%21SG%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A420eb142%3Bm03_new_user%3A-29895%3BpisId%3A5000000216897878&curPageLogUid=qqeqjQQUr7C6&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008098470320%7C_p_origin_prod%3A) |
| Printed Circuit Board (PCB) | 1 | — | $3.50 | — |
| Wheel | 2 | 24,000 | $1.34 | [Link](https://www.tokopedia.com/arduinonano/roda-65mm-karet-rubber-wheel-robot-tire-tt-motor-smart-car-diy-wheel) |
| ESP32-C3 DevKit | 1 | 85,000 | $4.73 | [Link](https://www.tokopedia.com/temins/esp32-nodemcu-esp-32-esp32s-32s-wifi-module-devkit-dev-38-pin-1729797014153692567?t_id=1782901083899&t_st=27&t_pp=cart&t_efo=cart&t_ef=&t_sm=&t_spt=cart) |
| GY-521 MPU-6050 | 1 | 29,500 | $1.64 | [Link](https://www.tokopedia.com/khurs-iot/gy-521-mpu-6050-3-axis-accelerometer-gyroscope-arduino-raspberry-pi?extParam=ivf%3Dfalse%26keyword%3Dgy-521+module+with+mpu-6050%26search_id%3D20260703094308371BCE7DC8381718578F%26src%3Dsearch&t_id=1782901083899&t_st=24&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| TMC2208 Motor Driver | 2 | - | $5,82 | [Link](https://www.aliexpress.com/item/1005010480173953.html?spm=a2g0o.productlist.main.8.125354a13eYaZq&aem_p4p_detail=202609181704121512827017702700000065849&algo_pvid=482b89e2-b950-42ca-bd5d-87d05453ec1d&algo_exp_id=482b89e2-b950-42ca-bd5d-87d05453ec1d-7&pdp_ext_f=%7B%22order%22%3A%22294%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21SGD%2116.38%213.10%21%21%2183.47%2115.81%21%402101737817897762521998069e0f37%2112000052545395846%21sea%21SG%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A420eb142%3Bm03_new_user%3A-29895%3BpisId%3A5000000216897878&curPageLogUid=mdaYc0tmK80y&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010480173953%7C_p_origin_prod%3A&search_p4p_id=202609181704121512827017702700000065849_2) |
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
| LM2596S  DC to DC Buck Converter | 1 | 34,200 | $1,92 | [Link](https://www.tokopedia.com/tokoasia-jkt/lm2596s-buck-converter-dc-dc-step-down-voltage-regulator-36v-24v-12v-to-5v-2a-volt-digital-display-2596s-1730718483558664143?extParam=ivf%3Dfalse%26keyword%3Dbuck+converter%26search_id%3D20260810013330A96B65A721E5611F1YFR%26src%3Dsearch&t_id=1786325702593&t_st=3&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| Active Buzzer | 1 | 5,000 | $0.28 | [Link](https://www.tokopedia.com/azzamarduino/buzzer-speaker-aktif-active-dc-3v-24v-sfm-27-3cm-input-3v-5v-12v-bunyi?extParam=ivf%3Dfalse%26keyword%3Dbuzzer%26search_id%3D20260708005325CD00692C3BFE5926FWW3%26src%3Dsearch&t_id=1783310432964&t_st=17&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| XT30 Amass Connector | 1 | 8,500 | $0.47 | [Link](https://www.tokopedia.com/arduinonano/amass-connector-plug-xt30u-amass-xt-30-u-konektor-for-power-1732555087363605613?extParam=ivf%3Dfalse%26keyword%3Damass+connector%26search_id%3D202607080057278BF1211FD4B7B91A5G6M%26src%3Dsearch&t_id=1783310432964&t_st=19&t_pp=search_result&t_efo=search_pure_goods_card&t_ef=goods_search&t_sm=&t_spt=search_result) |
| 3D Printed Parts | — | — | $9.00 | — |
| **Total** | | **IDR1,194,606** | **USD78.71** | |
