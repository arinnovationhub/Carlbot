---
layout: page
title: Servo Tutorial
categories: ['Beginners']
tags: []
published: True
order: 0
post_category: "tutorials"
---

#Servo Tutorial

## Parts
1. Arduino Uno
2. Continuous Rotation Servo
3. Jumper wires

## Wiring

A servo has three wires:

1. S - Signal. This can be any color wire (other than red and black). It should be hooked up to a pin with the tilde `~` beside it. In this example, we choose pin `3`
2. V - Voltage. This is normally a red wire and should be hooked up to the `5v` pin are your ardino
3. G - Ground. This is normally a black wire and should be hooked up to the `GND` pin of your arduino.

<a href="{{ site.baseurl }}/assets/fritzing/renderings/servo.png">
	<img alt="Servo Wiring Diagram" src="{{ site.baseurl }}/assets/fritzing/renderings/servo.png" width="500">
</a>

## Code

Upload the following sketch onto your arduino

<script src="http://gist-it.appspot.com/github.com/arlauchpad/Carlbot/blob/master/tutorials/Servo/servo/servo.ino"></script>

## Run It!

Once you upload the code, you should see your servo start to spin in different directions. 