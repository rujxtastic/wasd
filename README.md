# WASD
The four most basic keys for gaming. Forward, Backward, and either Strafe or Look left/right.   
But how often do you ever step back and think, **what am I putting them through**? Your character is in a constant state of running around aimlessly, not knowing their next move. If only you could be in their shoes and empathise with them. That is the real-world problem that WASD solves.   
Realistically, WASD is the problem to the solution. You will find yourself chasing down your keyboard as it edges away from you, inflicting a fraction of your character's pain on you. A little toy that serves no real purpose (like us all?). The Onshape link can be found [here](https://cad.onshape.com/documents/5a513a08f5c3c2de2939b5e3/w/8555595e139211449ba911fa/e/058102c6ac5f3245f4983aa2?renderMode=0&uiState=69daf673cb233122137885a0).

<img width="306" height="458" alt="WASD(2)" src="https://github.com/user-attachments/assets/dd1f2256-51f2-4d9e-8f0e-0fff0f6a919e" />



# What does it do?
At the moment it can:
- Type W, A, S, D
- When W is typed, it moves forward via two wheels on the side.
- When S is typed, it moves backwards.
- A and D rotate it (omni wheels were too expensive!).

# Why does it do?
In the keyboard universe, most improvements have already been done long ago. Matrices, LEDs and stenographers have been completed a million times over: so much so that the people are becoming bored and complacent. WASD came to me when I was discussing ideas with my friends. I already wanted to make a simple WASD when I had the idea to attach wheels to it and give it movement. And this baby was born.

# PCB layout   

PCB:   
<img width="436" height="378" alt="image" src="https://github.com/user-attachments/assets/80bc2b7e-9dfc-4705-8a9e-164451311c80" />   
Schematic:   
<img width="810" height="609" alt="image" src="https://github.com/user-attachments/assets/4c577d76-6471-47a4-a9fe-8f4c2a697f2e" />   



# Model views

<img width="580" height="377" alt="image" src="https://github.com/user-attachments/assets/22889259-88cc-4735-b007-48ea31d35b94" />
<img width="679" height="404" alt="Screenshot 2026-04-11 204506" src="https://github.com/user-attachments/assets/10f8e08d-6d39-4f19-8aa5-4800eb5a38e0" />
<img width="618" height="215" alt="Screenshot 2026-04-11 204605" src="https://github.com/user-attachments/assets/abccd161-84bc-4244-8e39-cdf465f069b1" />
<img width="1920" height="1080" alt="WASDbigrender" src="https://github.com/user-attachments/assets/5c5f918a-e9d7-40dd-82aa-9a415873b5c4" />

# BOM
﻿Item|Quantity|Total price|Link
---|---|---|---
Seeed XIAO RP2040 (Board + Loose Headers)|1|£3.90|https://thepihut.com/products/seeed-xiao-rp2040?variant=53975380263297
XIAO shipping|-|£3.50|
Motor pins|2|£0|
Cherry MX Clicky Switches|4|£2.80|https://customkeyboardsuk.co.uk/products/cherry-mx-blue-rgb-clicky-mechanical-keyboard-switch
Switches Shipping|-|£1.99|
L293D Motor Driver|1|£0.63|https://www.ebay.co.uk/itm/232393379693
L293D Shipping|-|£1.25|
PCB printing|1|£2.97|https://jlcpcb.com
3D printing |1|£4.81|https://jlc3dp.com
JLC shipping|-|£5.60|
Discount|-|-£7.41|https://jlc3dp.com
Screws: M2.5 x 7.5mm|6|£0.67|https://www.moddiy.com/products/1266/M2.5-x-7.5mm-Black-Screws-CM2.5X7.5.html
Screws Shipping|-|£7.43|
Toy Wheels (Colour B)|2|£1.52|https://www.aliexpress.com/item/1005007002405013.html
Motors|2|£2.22|https://www.aliexpress.com/item/1005010032893301.html
Motor Shipping|-|£2.91|
Wires (28G)|30cm|£1.77|https://www.ebay.co.uk/itm/301767024783
Total: |£36.56||   
   
To reduce costs, I would recommend buying locally and avoiding shipping.

# How to build
1. Solder the PCB. Do not solder the wires for the motors yet.
2. Flash the PCB with the firmware. I would recommend downloading Arduino, importing the .ino file, selecting the board and flashing it via USB.
3. Place the motors into the crevices on the sides.
4. Fit the PCB inside sitting on the screw holes. It should also block the motors from leaving.
5. Screw in the PCB: I would recommend from the bottom as the screws are slightly bigger than the space it has been given. You can also just buy smaller screws.
6. Solder the wires to the motor. Motor 1 Pin Header should connect to the left motor and Motor 2 Pin Header to the right. Attach the positive end to the positive side and vice versa.
7. Attach the key buttons to the button switches. This shouldn't require specialised tools.
8. Screw in the roof.
9. Attach googly eyes on the front. Their placement isn't important but without them the WASD cannot acknowledge its existence.
10. Name it! I am naming mine Jeremy.
11. Attach the wheels to the axles the motors produced.

# How to use
Simply plug it into your computer via USB-C and move around!
