int ledpin=7;
int ledpin1=8;
int ledpin2=4;
int buttonstate=1;
int buttonPin=13;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  buttonstate = digitalRead(buttonPin);
  if(buttonstate==HIGH){
  digitalWrite(ledpin,HIGH);
  delay(200);
 digitalWrite(ledpin,LOW); 
 delay(500);
digitalWrite(ledpin1,HIGH);
  delay(800);
 digitalWrite(ledpin1,LOW); 
 delay(200); 
}
else{
  digitalWrite(ledpin2,HIGH);
  delay(1000);
  digitalWrite(ledpin2,LOW);
   delay(1000);
  
}}
