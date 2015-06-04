---
layout: page
title: Arduino Introduction
description: Getting started with your arduino
---

### Board overview
As you can see, there are lots of different small sqaure holes running along the edges of your arduino. These holes are referred to as "pins". You can plug in various types of sensors and output components to thse pins. At the highest level, an arduino runs a program that reads values from sensors (plugged into some pins), decides what to do with these values, then conrols output components using other pins. There are various types of pins available on the arduino

#### Digital I/O Pins
To understand Digital Input/Output (sometimes abreviated DIO) pins, let's break down the term.  The 'digital' part means that there are two states that the pin can be in. Either the pin is 'high' or 'low'. For arduinos, a 'high' means that there are 5 volts flowing aross the pin. A 'low' means that there are 0 volts.  

The 'Input/Output' part means that the pins can either be configured to be an input pin (meaning that it reads a value from a sensor) or as an output pin (meaning that the value is sent out to a component such as a motor.) The configuration is done as part of your program. So for example, in one program you might configure pin 3 to be an input pin reading from a button, but in a second program you might configure it to be an output pin to turn on or off an LED.

There are 13 digital Input/Output (sometimes abriviated DIO) pins on the arduino UNO, labeld `0`-`13`. 

#### Analog Pins

Analog pins are normally used to read values from analog sensors. Ansalog sensors (such as potentiometers) change the voltage dependeing on what they are sensing. Reading the value on the analog pin gives you a value between 0 and 1024 dependeing on the voltage being applied on that port. There are 6 analog ports on your arduino UNO, labeled `A0`-`A5`). 

#### PWM Pins

PWM stands for Pulse Modulated Width. This is a special type of digital output pin that has the special ability to change between 'high' and 'low' very quickly. This technique is called 'modulation' and is used to control certain kinds of devices, most notably servo motors.

There are six PWM pins on your arduino UNO. They are marked with the tilde (~) sign beside their numbers. Specifically, they are are pins `3`, `5`, `6`, `9`, `10`, and `11`.

#### 5V and Ground

As you know, electricity flows from the 'positive' terminal of batteries to the 'negative' terminal of batteries. In any electrical circuit (including the ones you will be building!) there needs to be a positive side and a negative side. Since the arduino operates on 5 volts, the 'postiive' side of your circuit needs to be plugged into pin labeld `5v`. Another name for the 'negative' side of a circuit is 'ground', so the negative side of your circuits need to be plugged into one of the pins labeld `GND`

Next Up: [How to work with your arduino](arduino-workflow.html)

