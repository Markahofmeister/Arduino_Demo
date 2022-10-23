/*
 * @file smooth-LED 
 * @author Mark Hofmeister
 * @brief a sketch to use the smooth-LED function and output the value to the serial monitor.
 * The fancy "@"'s used in the comments are Doxygen syntax, which can be used to generate HTML pages from your comments. You may see these in other programmers' files.
 * Date of creation: 3/9/2022
 * Last modified: 10/23/2022
 */


/*
 * This statement includes the .h file, which contains a function that I will be using. More details in the smooth-LED-function.h file.
 * 
 * If we want to include a library that we have donwloaded, and not just a ".h" file that we've created, we replace the quotes with triangle brackets.
 * 
 * For example, if we need to use I2C communication, we would "#include <Wire.h>"
 */
#include "smooth-LED-function.h"


//pin to output PWM wave
int outputPinNum = 3;

//delay period between analog readings. Units = milliseconds.
int delayPeriod = 100;

//analog input pin we are using. Yes, the character will still be stored as an int.
int inputPinNum = A0;


void setup() {

  //Begin the serial monitor at a baud rate of 9600
  Serial.begin(9600);

  //set our output pin's mode to OUTPUT
  pinMode(outputPinNum, OUTPUT);

}

void loop() {

  //use smoothLED function from .h file to calculate and execute PWM output
  double PWMValue = smoothLED(inputPinNum, outputPinNum);

  //print out PWM output value returned by function.
  Serial.println(PWMValue);

  //delay function works in milliseconds. 
  delay(delayPeriod);

}
