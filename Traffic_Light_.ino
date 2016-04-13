/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
int delayTime = 100;

const int led1 = 13; // constant int
const int led2 = 12; // constant int
const int led3 = 11; // constant int

#define led1 13
#define led2 12 
#define led3 11 //define is used to set a constant variable


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);              // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second


// the loop function runs over and over again forever

  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);              // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second

  // the loop function runs over and over again forever

  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);              // wait for a second
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
}


