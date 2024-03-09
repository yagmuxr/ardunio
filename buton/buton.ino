int ledDurum = 0; //ilk başta led yanmasın
void setup() {
  // put your setup code here, to run once:
   pinMode(2,INPUT);
   pinMode(8,OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = digitalRead(2);
  if(deger==1)//butona basıldı
  delay(300);
  {
    if(ledDurum==0)
    {
      digitalWrite(8,1);
      ledDurum==1;
    }
    else
    {
      digitalWrite(8,0);
      ledDurum==0;
    }
    delay(300);
  }
  
  
  // Serial.println(deger);}
  // digitalWrite(8,deger); //digitalWrite(8, digitalread(2))
  // delay(2000);


}
