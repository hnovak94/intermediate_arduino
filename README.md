# Intermediate Arduino

LED Blink Revisited, Hello LCD, LCD Backpack, Photointerrupter, Potentiometer, Motor Control

## LED Blink Revisited 
This assignment was a refresher on how to blink an LED using an Arduino, and also forced us to use analog pins instead of digital pins to get the LED to fade. Not only did we have to make the LED fade, but the serial monitor had to display a certain number of xs, corresponding to the brightness of the LED.

### Problem/Advice
The main issue with this assignment is just remembering what you did in the previous year. Looking back at old code can serve as a refresher.

### Wiring
<img src="http://wiki.chssigma.com/images/e/e8/Fritzing_LED_fade.PNG" width="300">
Credit: Imogen A. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Imogen%27s_Engineering_2_Notebook#Wiring_.26_Pictures)

## Hello LCD
This assignment I learned how to use and LCD screen. I used an LCD screen and an Arduino. The goal was to get the LCD screen to print "Hello". I had a lot of very easily solvable problems with this assignment. 

### Problem/Advice
I also used wires in the beginning, instead of an LCD screen with male leads. Cutting all the wires evenly was a Sisyphean task and ended up being useless. The hardest part about this assignment was the wiring. Be very careful when wiring, because that can make a relatively simple assignment difficult. 

### Wiring
<img src="http://wiki.chssigma.com/images/e/e0/Lcdcap1.PNG" width="500">
Credit: Paul B. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Paul%27s_Engineering_2_Notebook#Wiring_and_Pictures)

## LCD Backpack 
This assignment I learned how to use a backpack. I used an LCD screen, a backpack, a button, and an Arduino. When the button was pressed the counter shown by the LCD screen would go up by 1. LCD backpacks are important because they reduce the amount of digital pins needed. This is very important if there are many components of your circuit that need to wired and you need many digital pins. 

### Problem/Advice
A problem I had with this assignment was that the number shown on the LCD screen was for microseconds passed, not the number of clicks. Instead of just saying buttonState == HIGH, one of the requirements for the if statement has to be "previousbuttonState == LOW". You need two variables. Another big problem I had was that my button wasn't pushed in all the way; this problem cost me a couple days. If there's a problem and you're not sure what it is, it's a good idea to check your wiring. 

### Wiring
<img src="http://wiki.chssigma.com/images/5/5d/Capswitch%601.PNG" width="500">
Credit: Paul B. [CHS Sigma Wiki](http://wiki.chssigma.com/index.php?title=Paul%27s_Engineering_2_Notebook#Wiring_and_Pictures)

## Photointerrupter

In this assignment we learned how to code a photointerrupter with an LED. In my code the LED would remain off until something "interrupted" the sensor, then the LED would turn on and the counter would go up by one. The serial moniter tracks how many interrupts have taken place.

### Problems + Advice
I had some trouble figuring out the interrupt pins and the attachInterrupt. I didn't understand how the pins worked with the photointerrupter, but I did research on google and asked for help. Looking at other students work and code comments on the CHS Sigma Wiki was also extremely helpful in understanding what I needed to do. ❤

### Wiring

<img src="https://github.com/hnovak94/intermediate_arduino/blob/master/media/ph.fzz.JPG?raw=true" width="500">

