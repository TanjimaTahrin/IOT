int pwm=11;

void setup() {
pinMode(pwm,OUTPUT);

  // put your setup code here, to run once:
}





void loop() {

  for(int i=0; i<=255; i++)
  {
    analogWrite(pwm,i);
    delay(10);

  }
  for (int i=255; i>=0; i--)
  {
analogWrite(pwm,i);
    delay(10);
  }
  // put your main code here, to run repeatedly:

}
