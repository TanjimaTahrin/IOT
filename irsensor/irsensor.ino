int irpin=7;

void setup() {
  // put your setup code here, to run once:
pinMode(irpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int irvalue=digitalRead(irpin);
Serial.print("show irvalue=");
Serial.println(irvalue);
delay(500);
}
