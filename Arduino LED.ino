//hi
int led=7;
int s=6;
int state;


void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(s,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
state = digitalRead(s);
if(state==HIGH)
{
digitalWrite(led,HIGH);

}
else{
digitalWrite(led,LOW);
delay(1000);
}
}
