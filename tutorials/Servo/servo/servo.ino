#include <Servo.h> //include the servo library

Servo motor; //declare the servo motor

void setup() {
  motor.attach(3); //hook up the servo object to pin 3 on the arduino
}

void loop() {
  //spin forward for 3 seconds
  motor.write(180); 
  delay(3000);
  
  //stop for three seconds
  motor.write(90);
  delay(3000);
  
  //spin backawards for three secons
  motor.write(0);
  delay(3000);
  
  //stop for three seconds
  motor.write(90);
  delay(3000);
}
