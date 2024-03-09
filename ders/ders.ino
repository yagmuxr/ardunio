void setup() {
  // put your setup code here, to run once:
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(LOW);
  // delay(2000);
  // Serial.println(HIGH);
  // delay(2000);
  // Serial.println(OUTPUT);
  // delay(2000);
  // Serial.println(INPUT);
  // delay(2000);
  // Serial.println(INPUT_PULLUP);
  // delay(2000);
  // Serial.println(LED_BUILTIN);
  // delay(2000);
  digitalWrite(8,1);
  digitalWrite(9,0);
  delay(1000);
  digitalWrite(8,0);
  digitalWrite(9,1);
  delay(1000);
  

}
