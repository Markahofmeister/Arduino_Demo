/*
 * This is a header file, denoted by the ".h". 
 * Including this in your main sketch will allow you to access all of the declared variables and functions as if they were declared in the main sketch.
 * This is useful to keep code easy to read, but also allows you to include this file in many different sketches to reuse code.
 */

/*
 * @brief calulates the PWM output value based on an analog input value and outputs the value to the output pin.
 * @param integer analog input pin number, integer digital output pin number
 * @pre inputPinNum is a valid analog input pin. outputPinNum is a valid PWM output pin
 * @return double value of the PWM output
 * @post PWM output pin has been written with calculated value.
 */
double smoothLED(int inputPinNum, int outputPinNum) {

  /*
   * read the input value (0-1023, the Arduino's input bounds) and scale it to allowed PWM range (0-255). 
   * This scaling is done by the map() function.
   */
	double PWMValue = map(analogRead(inputPinNum), 0, 1023, 0, 255);

  //Change to a more notable difference
  PWMValue = abs(240 - PWMValue);

  //Write PWM value to output pin
  analogWrite(outputPinNum, PWMValue);

  //return the PWM value.
  return PWMValue;

}
