---
layout: page
title: A Closer Look at Blink
description: Understanding the blink program
---

Now that you've seen your program work, let's dive in and see how this program works.

### Code Blocks
The first thing you need to understand about Arduino programs is that they are devided into blocks. Blocks are denoted by curly-brces (`{` and `}`). Sometimes you will hear blocks referred to as scope. So for example:

~~~
{
  This is in block 1
}

{
  This is in block 2.
}
~~~

### Setup and Loop

There are two main blocks to every Arduino program.

* **`setup()`**. The code in this block runs one time, when the program first starts up
* **`loop()`**. The code in this block runs continuously in a loop. The loop begins after `setup` is finished

### Comments
Code is step-by-step instructions to a computer to tell it how to accomplish a task. But humans also have to read code to understand what it's telling the computer to do. Sometimes you want to put a note in your code to remind yourself (or leave a note to another human). This can be accomplished by using comments. Comments are done in one of two ways

* **Single-line Comment**. The syntax uses two slashes (`//`). Everything on the same line following the slashes is not read
* **Multi-line Comment**. The syntax uses an open comment (`/*`) and a close comment (`/*`). Everthing in between the open and close is a comment. 

### Blink In Depth

Let's take another look at blink, now that we understand some basics

<script src="https://gist.github.com/kneumei/41f52651c1f0b8a28b8c.js"></script>

1. **Setup** In lines 1-4, we have the setup block. Pin 13 is hooked up to the LED that will blink. In line 3, we are telling the arduino to treat pin 13 as output. Notice line 2 is a comment and has no effect on the program

2. **Loop** In lines 7-12 we have the loop block. The idea is that we are turning the LED on, waiting one second, turning the LED off, waiting one second, then circling back to the top of the loop block and doing it all over again. 

One other thing to note is `delay()`. This line causes the arduino to pause. You tell it how long to pause by specificing a certain number of milliseconds in btween the parentheses. 1000 miliseconds = 1 second. 

### Next steps:

Now that you are an expert on the blink program, here are some more things you can explore

1. Try unplugging your arduino and plugging it back in. Notice the arduino is still blinks? That's because the blink program is still loaded on the arduino, even if you turn it off.

2. Try modifyng the blink program to blink at different rates (by changing the numbers you pass to delay). Upload the program and watch the results. 