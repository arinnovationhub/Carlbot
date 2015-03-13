/*
* This is a program to make CARL follow a line. It requires two servo motors and three line sensors.
* For more information see http://arlauchpad.github.io/Carlbot/
*/

#include <Servo.h>     //include Servo.h so we can control the motors

Servo rightMotor;      //Craete a variable to hold the rightMotor object
Servo leftMotor;       //Create a variable to hold the leftMotor object

int LINE_SENSOR_THRESHOLD = 950; //create a constant to serve as a threshold. THIS MAY NEED TUNING
int leftSensor = A0;    //The left sensor will be hooked up to pin A0
int centerSensor = A1;  //The center sensor will be hooked up to pin A1
int rightSensor = A2;   //The right sensor will be hooked up to pin A2

/*****************************************************************************************
**
** The next two methods (setup and loop) make up the bulk of the program. It's where
** the 'fun' stuff happens. Remember, 'setup' runs one time when the code first begins
** executing on the arduino. After that, the 'loop' method runs continuously over and over
** again really fast.
**
*****************************************************************************************/

void setup() {
  rightMotor.attach(6);  //The right motor uses pin 5
  leftMotor.attach(5);   //The left motor uses pin 6
  Serial.begin(9600);
}

/**
** In the main body of the program, we will loop over and read each sensor. We will activate the motors
** depending on which combination of line sensors currently see the line
**/
void loop() {
  int val1 = analogRead(A0);
    int val2 = analogRead(A1);
      int val3 = analogRead(A2);
 Serial.print(val1);
 Serial.print("   ");
  Serial.print(val2);
 Serial.print("   ");
   Serial.println(val3);
  //If only left sensor sees the line, turn right quick!
  if(seesLine(leftSensor) && !seesLine(centerSensor) && !seesLine(rightSensor)){
   driveRight_slight();
 }
 
 //if the left and center snesor see the line, turn right slowly
 else if(seesLine(leftSensor) && seesLine(centerSensor) && !seesLine(rightSensor)){
   driveRight_slight();
 }
 
 //if only the center sensor sees the line, drive straight
 else if(!seesLine(leftSensor) && seesLine(centerSensor) && !seesLine(rightSensor)){
   driveForward();
 }
 
 //if all three sensors see the line, drive straight
  else if(seesLine(leftSensor) && seesLine(centerSensor) && seesLine(rightSensor)){
   driveForward();
 }
 
 //if the center and right sensor see the line, turn left slowly
 else if(!seesLine(leftSensor) && seesLine(centerSensor) && seesLine(rightSensor)){
   driveLeft_slight();
 }
 
 //if only the right sensor sees the line, left left quick!
 else if(!seesLine(leftSensor) && !seesLine(centerSensor) && seesLine(rightSensor)){
   driveLeft_slight();
 }
}

/*****************************************************************************************
**
** OK, we are now done with the loop. (whew!). Now we declare some "helper" functions.
** Basically, these are little bits of code that we call inside the loop method to help
** keep things organized
**
*****************************************************************************************/

/**
* This is a method that reads a sensor value. The 'analogRead' method returns a value between 0 and 1024.
* But what we are really interested in is whether or not the sensor saw a line or not. So we compare the 
** value it returned to the 'LINE_SENSOR_THRESHOLD'. If it's 
**/
bool seesLine(int pin){
 int analogValue =  analogRead(pin);  // a value between 0 and 1024
 if(analogValue > LINE_SENSOR_THRESHOLD){
   return true;
 }else{
   return false;
 }
}

/**
** The next several metods are our 'drive' methods that make the wheels turn differently. Remember
** that with continuous rotation servos (like the one CARL uses), giving the servo a value of 0 makes
** the motor spin in one direction. Giving it a value of 180 makes it spin in the other direction. Giving 
** it a value of 90 makes it stop.
**
** Also remember that your wheels may be hooked up in a different configuration in this code. For example,
** in your robot, maybe 180 makes the right motor spin backward, but in this code, it makes the wheel
** spin forward. You will have to see how your wheels are hooked up, and adjust accordingly.
**/

void driveForward(){
  rightMotor.write(180);
  leftMotor.write(180);
}

void driveLeft_slight(){
  rightMotor.write(180);
  leftMotor.write(90);
}

void driveLeft_sharp(){
  rightMotor.write(180);
  leftMotor.write(0);
}

void driveRight_slight(){
  rightMotor.write(90);
  leftMotor.write(180);
}

void driveRight_sharp(){
  rightMotor.write(0);
  leftMotor.write(180);
}
