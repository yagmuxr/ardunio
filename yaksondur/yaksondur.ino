void setup() {
  // put your setup code here, to run once:
   pinMode(2,INPUT);
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT)

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(8,1);
  digitalWrite(9,0);
  delay(1000);
  digitalWrite(8,0);
  digitalWrite(9,1);
  delay(1000);
  

}
