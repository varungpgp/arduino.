//simple led blink
int ledpin = 13;                                     // initialize ledpin as led @ pin 13
void setup(){
pinMode(ledpin,OUTPUT);                              //set ledpin as output
}

void loop(){
digitalWrite(ledpin,HIGH);                           //turn on led
delay(1000);                                         // delay of 1 sec
digitalWrite(ledpin,LOW);                            //turn off led
delay(1000);
}
