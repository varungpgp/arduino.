const int irSensor=12;

void setup() {                
  pinMode(13, OUTPUT);     
  pinMode(irSensor,INPUT);
}

void loop() {
  if(digitalRead(irSensor)==HIGH)      
  {
    digitalWrite(13, HIGH);   // set the LED on
  }
  else
  {
    digitalWrite(13, LOW);    // set the LED off
  }
  delay(100);              // wait for a second
}
