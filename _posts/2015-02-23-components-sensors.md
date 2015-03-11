---
layout: page
title: Sensors
categories: ['components']
tags: []
published: True
order: 3
post_category: "getstarted"
---

# Sensors
- - - 

Sensors are your robot's eyes, ears, and nose. They allow the robot to detect it's surroundings and make decisions based on what's happening in the physical world. There are many, many kinds of sensors, detecting almost any physical, measurable property of the world you can imagine: force, temperature, acceleration, light, and everything in between. On this page, we list a few popular sensors that are great to start off with, due to their low cost, ease of use and versatility. 

## Buttons and Switches
![Button]({{ site.baseurl }}/assets/images/started/started-button.jpg)

A button is perhpas one of the most basic kinds of sensor, just telling you if a circuit is open or closed. Of course, there is a great varity of form factors to fit in with the many projects you'll dream up

#### Where to Buy
* [Sparkfun](https://www.sparkfun.com/products/9190): A very basic button
* [Sparkfun](https://www.sparkfun.com/products/11310): A switch for your missle control panel

- - -

## Potentiometer
![Potentiometer]({{ site.baseurl }}/assets/images/started/started-potentiometer.jpg)

A potentiometer (sometimes called a variable resisitor) changes the resistence in a circuit. You can use the arduino to measure this resistance. One common form factor is a knob -- turn it all the way one direction to set the resistence very low and turn it the other way to increase the resistence. 

This sounds technical and complex, but you are probably already familiar with potentiometers in your day-to-day life. For example, a knob that you turn to dim the lights in your living room makes use of a potentiometer. 

#### Where to Buy
* [Sparkfun](https://www.sparkfun.com/products/9939): A basic rotary potentiometer 
* [Sparkfun](https://www.sparkfun.com/products/8680): A potentiometer that senses touch

- - -

## IR Proximety

![IRProxemity]({{ site.baseurl }}/assets/images/started/started-irproxemity.jpg)

Proxemity sensors let your robot whether there is an object in front of your robot. Some will also tell you the distance to that object. There are many types, but one of the easiest and least expensive to get started with is an Infrared (IR) proxemity sensor. It does this by sending out infrared light, then measuring the angle that the light is reflected back -- but don't worry, you won't need to understand this math to use it. The sensor will plug into the analog port of your adruino. It will then give you a value between 0 and 1024 dependening on how close or far away  your object is. Inclided with the proxemity sensor will be a formula to turn that value into inches or milimenters if you need to do that.

#### Where to Buy
* [Sparkfun](https://www.sparkfun.com/products/242): A basic IR proxemity sensor

- - -

## Photoresistor
![Photoresistor]({{ site.baseurl }}/assets/images/started/started-photoresistor.jpg)

A photo resistor measures the amount of ambient light that your robot can see. Like the proxemity sensor, it plugs into the analog port of your arduino and gives you a value between 0 and 1024 depending on how much light is visible. 

#### Where to Buy
* [Sparkfun](https://www.sparkfun.com/products/9088)

