int LED_outputPin = 0;
int delayPeriod = 500;

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_outputPin, OUTPUT);
  Serial.begin(9600);

}
void loop() {

  digitalWrite(LED_outputPin, HIGH);
  delay(delayPeriod);
  Serial.print("LED State ");
  Serial.println(LED_ouputPin);
  digitalWrite(LED_outputPin, LOW);
  delay(delayPeriod);
  Serial.print("LED State ");
  Serial.println(LED_ouputPin);
  
  

}
