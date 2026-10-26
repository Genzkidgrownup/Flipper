# Flipper
**Its a custom mechanical girl's hair clip which i will be designing this week , which will move just like a butterfly's wings**
  
**Or you can say**  
  
**A 3D mechanical hair clip designed for smooth flapping motion with butterfly wings for Girls**

# WHY I MADE THIS ?

>>SO i made this to gift someone special tbh 😆
>>  
>>through my engineering skills 
>>

## THE IDEA:

***ALTHOUGH I GOT THE IDEA FROM THIS REEL BUT THIS WHOLE DESIGN WAS MINE(from making PCB to designing flipper's wings***

**When i was scrolling random reels**

**I got this in my feed:**

   <img width="20%" height="30%" alt="image" src="https://github.com/user-attachments/assets/6f4a19f4-6a1a-4a50-bc7a-0be2ffcdd1c8" />

   

  > INSTAGRAM REEL link = https://www.instagram.com/p/DdLCfGvhzko/
> 

## PROJECT SHOWCASE:
<img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/a1aa5074-4ce9-4286-bef8-3061295063a5" />  <img width="35%" height="1052" alt="image" src="https://github.com/user-attachments/assets/1dfeb4a8-32a5-4385-a9de-c5a7a7353c9e" />
<img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/1d68f36d-e985-48e1-b4fb-d6d87baf0fb1" />   <img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/49d50e94-5581-4e0b-8d50-f5f86e573049" />

## HARDWARE SPECIFICATIONS:
**PCB OUTLINE : 38.354mm x 18.161**  
  
**MOUNTING: IT has 2 M3 screw holes to mount in enclosure**
  
**IC: ATtiny85**  
  
**CONTROL: has 3pins for SERVO(OUT,GND,VCC)**  
  
**USER : Has slide switch for ON/OFF**  

**PCB copper trace width: 0.6mm for power lines and 0.254mm for signal pins**  

**GROUND COPPER PLATES: has 2 ground copper plates in both the sides for reducing electrical noise**

**SILKSCREEN: has custom butterfly stickers all across the board and has my projects name with my name under it .IT also has my dream company's logo "AVERO"**  


## PCB OVERVIEW:
<img width="35%" height="1078" alt="
image" src="https://github.com/user-attachments/assets/6ebf5307-fc10-45e5-bdb0-9299fb0f2ddf" /> <img width="35%" height="1078" alt="image" src="https://github.com/user-attachments/assets/caf0dcd4-29be-406f-aeac-7d67e419a477" />
<img width="35%" height="967" alt="image" src="https://github.com/user-attachments/assets/68645888-752c-47af-801e-706c6f986608" /> <img width="35%" height="1077" alt="image" src="https://github.com/user-attachments/assets/60ee8e65-7526-4f2c-b510-9ba6d15e9501" />

## Wiring diagram with Schematic:  
  
**ONE THING THE TP4056 module is outside of this PCB/schematic because i want to connect type C port to enclosure so for flexibility i am making it outside of PCB**

  
**SCHEMATIC:**  
  
**ATtiny85 PINS:**  
  
>VCC----->+5V  
>GND----->GND  
>RESET/PB5 ----->INPUT_PULLUP 10kΩ resistor  
>PB3--->**X** (Didn't used this pin )
>PB4--->SIGNAL pin of Servo  
>PB0--->Used for external ISP code upload  
>PB1--->Used for external ISP code upload
>PB2--->Used for external ISP code upload

**MT3608 PINS:**

>VIN+ ----> PIN1(switch)  
>VIN- ----> BAT-  
>VOUT+ ----> +5V  
>VOUT- ----> GND

**BATTERY PINS (from TP4056 BAT+ and BAT- pins):**

>BAT+(OUT+ for TP4056 module) ----->MT3608 VIN+
>BAT-(OUT- for TP4056 module) ----->GND

**SERVO PINS:**

>SIGNAL---->PB4  
>VCC  -----> +5V  
>GND ------->GND

**SWITCH PINS:**

>PIN1 --> VIN+(MT3608)
>PIN2---> BAT+
>PIN3 ---> UNUSED

**THROUGH HOLE polarized capacitor (100microferrate):**  
 
> + --> +5V  
> -  ---->GND  

**SMD decoupling capacitor(0805) (100nf):**
> + ---> +5V(nearest pin to ATtiny85)  
> -  --->GND


## SCHEMATIC DIAGRAM:
<img width="50%" height="1078" alt="image" src="https://github.com/user-attachments/assets/8bc6e86c-2880-4f17-b310-4e5de5f32313" />


## 3D part ASSEMBLY:  
>I have given 2 types of editable file , if one does not open up , you can always open the other one( Both has the same content )
>
>First place the bottom lid and then put Flipper board into the lid   
>Then secure it with M3 screws into the bottom lid  
>MAKE SURE TO CONNECT THE TP4056 module (BAT+ to battery positive and BAT- to battery negative)  
>Place your TP4056 module charging port (TYPE-C) into the bottom lid with the battery(3.7V) inside the free pace under the PCB  
>CONNECT THE TP4056 OUT+ to BAT+ in PCB and OUT- to BAT- in PCB  
>THEN SECURE the middle lid to the bottom LID with M3 screws and nuts 
>THEN PLACE THE MG90s motor , then place the upper lid and secure both the MG90s servo and the upper lid with M3 screws 
>AFTER DOING ALL THESE YOU WILL HAVE 
> 2 gears and 2 wings
>THERE WILL BE SEVERAL holes of  3.4mm x 3mm , that's for the small magnets to place in it 
> PUT THE Gears as shown in the .f3d file i provided with my project 
>I MADE THE SYSTEM IN SUCH A WAY THAT when i will bring more wings i can easily swap it with the gears  
>SO THE WINGS WILL BE FULLY BE supported by the small strong magnets 
> USERS can easily swap it whenever they Want 

**AFTER FOLLOWING ALL THESE STEPS YOU ARE GOOD TO GO**


## BOM:

| Item | Qty | Supplier | Cost / Item | Total Cost | Link |
| --- | --- | --- | --- | --- | --- |
| **ATtiny85** | 1 | quartzcomponents | $2.45 | $2.45 | [Link](https://quartzcomponents.com/products/attiny85-8-bit-avr-microcontroller) |
| **PDT slide switch** | 4 | robu | $0.03 | $0.12 | [Link](https://robu.in/) |
| **Polarized capacitor 100uF** | 5 | Robu | $0.03 | $0.15 | [Link](https://robu.in/product/100-uf-35v-through-hole-electrolytic-capacitor-dip-pack-of-10/) |
| **100nF 0805 SMD Ceramic Capacitor** | 20 | Robu | $0.01 | $0.20 | [Link](https://robu.in/product/100nf-0805-surface-mount-multilayer-ceramic-capacitor-pack-of-40/) |
| **10K Ohm 1/8W 0805 Resistor** | 40 | Robu | $0.01 | $0.40 | [Link](https://robu.in/product/10k-ohm-1-8w-805-resistorreel-of-5000/) |
| **Magnets (3x2mm N45 Grade)** | 1 | Flipkart | $2.50 | $2.50 | [Link](https://www.flipkart.com/magneticks-200-pcs-3x2mm-steel-magnets-nickle-plated-n45-grade-fridge-magnet-pack/p/itm792e5ca2eaeab) |
| **EasyMech M3x40mm Bolt & Nut Set** | 2 | robu | $0.82 | $1.64 | [Link](https://robu.in/product/m315mm-nylon-screw-50-pcs/) |
| **1x40 Pin 2.54mm Berg Strip Male Connector** | 2 | robu | $0.06 | $0.12 | [Link](https://robu.in/product/1x40-berg-strip-male-connector/) |
| **Female Headers** | 1 | Robu | $0.40 | $0.40 | [Link](https://robu.in/product/2mm-pitch-female-berg-strip-40x1-2pcs/) |
| **MT3608 Step-Up Boost Module** | 1 | Robu | $0.41 | $0.41 | [Link](https://robu.in/product/mt3608-2a-max-dc-dc-step-up-power-module-booster-power-module/) |
| **3.7V LiPo Battery** | 2 | Amazon | $2.08 | $4.16 | [Link](https://www.google.com/search?q=https://www.amazon.in/gp/product/B0HC6RRYJL/) |
| **Metal French Barrette Hair Clip** | 1 | Flipkart | $1.26 | $1.26 | [Link](https://www.flipkart.com/zft-metal-french-barrette-hair-clip-long-platinum-diy-accessories-accessory-set/p/itm5b7884b281e0a) |
| **Estimated Total Shipping** | 1 | - | $5.00 | $5.00 | - |
| **TOTAL ESTIMATED COST** |  |  |  | **$18.81** |  |

## License
This project is licensed under **CC BY-NC 4.0** (Creative Commons Attribution-NonCommercial). 
You are free to build and modify this board for personal use, but commercial production or selling of this project is strictly prohibited.









