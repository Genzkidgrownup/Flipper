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











