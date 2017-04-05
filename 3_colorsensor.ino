int colorpin3=8;
int colorpin2=7;
int readpin=4;
int x;
int y;
int z;
unsigned int a;
void setup() {
  Serial.begin(9600);
  pinMode(colorpin2,OUTPUT);
  pinMode(colorpin3,OUTPUT);
  pinMode(readpin,INPUT);  

}

void loop() {
 digitalWrite(colorpin2,LOW); //for red light
 digitalWrite(colorpin3,LOW);
 x=pulseIn(readpin,LOW);
// x1=a/400;

 digitalWrite(colorpin2,LOW); //for blue light
 digitalWrite(colorpin3,HIGH);
 y=pulseIn(readpin,LOW);
 //y=a/400-1;

 digitalWrite(colorpin2,HIGH); //for green light
 digitalWrite(colorpin3,HIGH);
 z=pulseIn(readpin,LOW);
 //z=a/400-1
 Serial.print("R");
 Serial.print(x);
 Serial.print("  ,B");
 Serial.print(y);
 Serial.print("  ,G");
 Serial.println(z); 
 delay(250); 
}
