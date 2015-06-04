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

### How do you work with the Arduino?
As you begin to tinker with your arduino, you'll realize that there is a cycle. It goes something like this:

1. **Write a program** - In the first step, you'll use the free Arduino IDE (Integrated Development Environment) to write an arduino program. The program could do anything, from blinking a light to controling your washing machine over wifi.

1. **Upload the program to the arduino** - In the second step, you'll plug in the arduino to your computer with a USB cable and use the Arduino IDE to upload the program to the arduino.

1. **Run the program** - After uploading, the program is now running on your arduino. The main part of the program (as you'll see) is just one loop that runs over and over again really fast. Now you get to check to see if the program does what you imagined it would do, or if it causes the robot to have a mind of it's own.  

1. **Rince and repeat** - After seeing how the robot behaved, you'll want to modify the program to fix any bugs you saw, or add a new feature.  So go back to step 1 and do it again!


### Your First Program

Ok, enough with the theory, let's get started! The first program we are going to upload to the arduino is called "Blink". As you might guess, it's going to make an LED flash on and off. 

Your Arduino has a built-in LED that you can control with your program. If you look closely you will see it near pin 13 with a label 'L' next to it.

![Arduino led]({{ site.baseurl }}/assets/images/arduino-blink.jpg)

#### Install and Open the Arduino IDE
 The fist step is to download and install the arduino IDE if you have not done so already. You can download from the [Arduino website] (http://www.arduino.cc/en/Main/Software). Just click through the installer and open the program. You should see something like this:

![Arduino IDE]({{ site.baseurl }}/assets/images/arduino-ide.png)

#### Plug in your Arduino
The next step is to plug in your arduino to your computer using a USB cable. This is pretty obvious. The only trick is that after you plug it in, you may need to select the port in the arduino IDE. Do this by going to `Tools -> Ports` and select the port that says arduino next to it.  Note that your port number may not be the same as the one in the screen capture. 

![Arduino Port Selection]({{ site.baseurl }}/assets/images/arduino-select-port.png) 

### Upload Blink 

The arduino IDE comes with lots of example programs to help you get started. The most basic of these programs is "blink". To upload this program, first open it by going to `File -> Examples -> Basics -> Blink`

![Arduino Port Selection]({{ site.baseurl }}/assets/images/arduino-open-blink.png)

This will open a new window with the blink program. To upload the program to your arduino, hit the upload button in the toolbar. 

![Arduino Port Selection]({{ site.baseurl }}/assets/images/arduino-upload.png)

You should see see some output in the arduino IDE. If you see any red output, something went wrong (the most common problem is the correct port not being selected). If everything went correctly, you should see the led on your arduino begin to blink. 

### A Closer Look

Now that you've seen your program work, let's dive in and see how this program works.

~~~ 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
~~~
{: .language-C}


~~~ ruby
def what?
  42
end
~~~