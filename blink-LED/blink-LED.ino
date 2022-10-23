int LED_outputPin = 0;
int delayPeriod = 500;

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_outputPin, OUTPUT);   //configure the pin that the LED is connected to as an output
  Serial.begin(9600);               //Start up the Serial monitor

}
void loop() {

  digitalWrite(LED_outputPin, HIGH);  //We'll begin by "writing" the digital output pin "high," a.k.a. turning it on.
  
  Serial.print("LED State ");         //We display the current value of the output 
  Serial.println(digitalRead(LED_ouputPin));
  
  delay(delayPeriod);                 //We delay the program so that nothing happens for the given time interval after we turn the LED on. 
  
  digitalWrite(LED_outputPin, LOW);   //Now we turn the digital output pin "off."
  
  Serial.print("LED State ");
  Serial.println(digitalRead(LED_ouputPin));
  
  delay(delayPeriod);
  
}
