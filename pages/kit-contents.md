---
layout: page
title: Kit Contents
description: Exploring the contents of your CARLBot kit
---

### What's Included? ###
- (1) Arduino
- (1) CARL Shield
- (1) Breadboard
- (2) Servo Motors
- (1) Chasis Kit
- (2) Photoresistors
- (1) Potentiomenter
- (3) LEDs
- (3) Resistors

### Part Descriptions ###
Congratulations on getting your official CARL kit of parts! Here is a detailed breakdown of everything in your kit and some information about what it is and how to use it. 

#### Arduino ####

![Arduino]({{ site.baseurl }}/assets/images/started-arduino.jpg)

The Arduino (ar-DWEEN-oh) is a type of microcontroller -- which is just a fancy word for a small computer that runs one program at a time. Although the Arudino is a computer (like your laptop, iPad or android phone), it's also very different. It's stripped down (there are no screens, keyboards speakers built in), and greatly simplified. One thing that the Arduino has that your other computers don't is phsical inputs and outputs that you can hook up to sensors and motors. This makes the arduino capable of being the brains of your robot!

Your arduino might look slightly different (different colors or markings). There are many different brands of arduinos, but they will all have the same basic shape and functionality. 

There is alot more information about the arduino and how to use it on [getting started with your Arduino](/pages/getting-started-arduino.html)

### CARL Shield ###

![CARL Shield]({{ site.baseurl }}/assets/images/started-shield.jpg)

You can extend the capabilities of your arduino by plugging a sheild on the top of your arduino. We have designed the CARL shield to make it easy to get started with robots by having some convenient pins located on the top of the shield to plug in sensors and motors without having to build any circuits on a breadboard. This makes it easy to get to the fun stuff. But later, when you want to do more advanced projects with your arduino, you still have the capacity to do so by either removing the sheild or extending the shield yourself. 
 
### Breadboard ###
![Breadboard]({{ site.baseurl }}/assets/images/started-breadboard.jpg)

As you begin to explore the things that you can do with your arduino, you'll have the need to plug in different compontents and wire them up in all kinds of circuits. If you were to physically connect wires every time you wanted to make a new circuit, you'd become frusterated. Those wires would either need to be twisted together and taped or maybe even soldered, both of which taks time and slows you down. 

To get around this problem you can use a breadboard to quickly create new cicuits. A breaboard has a bunch of holes in it that you plug wires in. Rows of these holes are connected together so that you can connect two wires together by plugging the wire into holes in the same row. 

We'll be using breadboards in [getting started with your Arduino](/pages/getting-started-arduino.html). Another place to read more about breadboards is [Sparkfun's Breadboard Tutorial](https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard)

### Servos ###
![Servos]({{ site.baseurl }}/assets/images/started-servo.jpg)

Servos are devices made up of a dc motor, some gears, and a sensor that allows precise control over the motor. There are two kinds of servos:

- *Positional rotation*: The most common type of servo, these only rotate 180 degrees, but allow for precise control of the position. You might use one to move a lever or open a claw.

- *Continuous rotation*: These kind of servos rotate in either direction indefinitely. These are great for the motors on a robot to rotate the wheels, which is why these are the kind included in your kit.

There will be alot more about servos when we get to [programming your robot](/pages/programming-robot.html). For more information about servos read [this article](http://www.sciencebuddies.org/science-fair-projects/project_ideas/Robotics_ServoMotors.shtml) 

### LEDs ###

![LEDs]({{ site.baseurl }}/assets/images/started-led.jpg)

LEDs (Light Emitting Diodes) are a cheap way to add colorful lights to your project. A diode is an electical component that allows electricity to flow only one direction. You'll notice that your LED has two wires sticking from it (called leads). One of the leads is longer. This one is called the cathode and should hook up to the positive side of your circuit. The shorter lead is called the annode and should hook up to the negative (i.e. ground) side. 

One thing to note about the LEDs included in your kit is that you can't just hook the LEDs to a battery (or directly to the arduino), or they will will burn out. To solve this problem, you need a resistor.

### Resistors ###  

![Resistors]({{ site.baseurl }}/assets/images/started-resistor.jpg)

Resistors are electrical components that reduce the current flowing through your circuit and transfrom the voltage a higher voltage to a lower one. The level which a resistor brings down the voltage is called impedance and is measured in Ohms. You'll need these when you want to hook up LEDs to your circuit.  

### Photoresitors ###

![Photoresitors]({{ site.baseurl }}/assets/images/started-photoresistor.jpg)

Photorisistors are a type of resistor whose level of impedance varies depending on how much light it can see. If the photoresistor sees lots of light, electricity can flow through the circuit easier. If you dim the lights, the impedance increases. 

The really cool thing about photorisistors is that your arduino can measure the amount imedpence present in your circuit. This means that you can write a program to do different things based on how much light your photorisitors sees. In short, photoresistors are like simple eyes for your robot!

### Potentiometer ###

![Potentiometer]({{ site.baseurl }}/assets/images/started-potentiometer.jpg)

Potentiometers are another type of variable resistor (like the photoresistors), except that instead of using light to determine the level of impedence, they use a knob. 

Again, like the photoresistor, you can hook up potentiometers to your arduino, measure the effect they are having on your circuit and change your robot in some way based on how much the knob is turned. For example, you could change how fast your robot's wheels move with the knob. 