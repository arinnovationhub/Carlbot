---
layout: page
title: Microcontroller
categories: ['components']
tags: []
published: True
order: 2
post_category: "getstarted"
---
# Microcontroller
- - - 

![Arduino]({{ site.baseurl }}/assets/images/started/started-arduino.jpg)

A microcontroller is just a fancy word for a small computer -- and that's exactly what it is. The particular microcontroller we recommend is called an Arduino. It's great because it is open-sourced and low-cost. There is a huge community online with lots of example projects, forums and code samples, so you'll never get stuck without someone to help.

## What makes the Arduino special?
Although the Arudino is a computer (like your laptop, iPad or android phone), it's also very different. It's stripped down (there are no screens, keyboards speakers built in), and greatly simplified. It only runs one program at a time, but runs it very fast. One thing that the Arduino has that your other computers don't is phsical inputs and outputs that you can hook up to sensors and motors. This makes the arduino capable of being the brains of your robot!

## Board overview
As you can see, there are lots of different small sqaure holes running along the edges of your arduino. These holes are referred to as "pins". You can plug in various types of sensors and output components to thse pins. At the highest level, an arduino runs a program that reads values from sensors (plugged into some pins), decides what to do with these values, then conrols output components using other pins. There are various types of pins available on the arduino

### 1. Digital I/O Pins
To understand Digital Input/Output (sometimes abreviated DIO) pins, let's break down the term.  The 'digital' part means that there are two states that the pin can be in. Either the pin is 'high' or 'low'. For arduinos, a 'high' means that there are 5 volts flowing aross the pin. A 'low' means that there are 0 volts.  

The 'Input/Output' part means that the pins can either be configured to be an input pin (meaning that it reads a value from a sensor) or as an output pin (meaning that the value is sent out to a component such as a motor.) The configuration is done as part of your program. So for example, in one program you might configure pin 3 to be an input pin reading from a button, but in a second program you might configure it to be an output pin to turn on or off an LED.

There are 13 digital Input/Output (sometimes abriviated DIO) pins on the arduino UNO, labeld `0`-`13`. 

### 2. Analog Pins

An Analog pins are normally used to read values from analog sensors. Ansalog sensors (such as potentiometers) change the voltage dependeing on what they are sensing.Reading the value on the analog pin gives you a value between 0 and 1024 dependeing on the voltage being applied on that port. There are 6 analog ports on your arduino UNO, labeled `A0`-`A5`). 

### 3. PWM Pins

PWM stands for Pulse Modulated Width. This is a special type of digital output pin that has the special ability to change between 'high' and 'low' very quickly. This technique is called 'modulation' and is used to control certain kinds of devices, most notably servo motors.

There are six PWM pins on your arduino UNO. They are marked with the tilde (~) sign beside their numbers. Specifically, they are are pins `3`, `5`, `6`, `9`, `10`, and `11`.

### 4. 5V and Ground

As you know, electricity flows from the 'positive' terminal of batteries to the 'negative' terminal of batteries. In any electrical circuit (including the ones you will be building!) there needs to be a positive side and a negative side. Since the arduino operates on 5 volts, the 'postiive' side of your circuit needs to be plugged into pin labeld `5v`. Another name for the 'negative' side of a circuit is 'ground', so the negative side of your circuits need to be plugged into one of the pins labeld `GND`

## How do you work with the Arduino?
As you begin to tinker with your arduino, you'll realize that there is a cycle. It goes something like this:

### 1. Write a program
In the first step, you'll use the free Arduino IDE (Integrated Development Environment) to write an arduino program. The program could do anything, from blinking a light to controling your washing machine over wifi.

### 2. Upload the program to the arduino
In the second step, you'll plug in the arduino to your computer with a USB cable and use the Arduino IDE to upload the program to the arduino.

### 3. Run the program
After uploading, the program is now running on your arduino. The main part of the program (as you'll see) is just one loop that runs over and over again really fast. Now you get to check to see if the program does what you imagined it would do, or if it causes the robot to have a mind of it's own.  

### 4. Rince and repeat
After seeing how the robot behaved, you'll want to modify the program to fix any bugs you saw, or add a new feature.  So go back to step 1 and do it again!


## Where to buy
* [Amazon](http://www.amazon.com/Arduino-UNO-board-DIP-ATmega328P/dp/B006H06TVG/ref=sr_1_1?s=pc&ie=UTF8&qid=1424745713&sr=1-1&keywords=arduino+uno)
* [Sparkfun](https://www.sparkfun.com/products/12757)
* [Adafruit](http://www.adafruit.com/product/50)
