---
layout: page
title: First Program
description: Uploading Blink
---

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

Next Up: [A closer look at blink](arduino-closer-look.html)