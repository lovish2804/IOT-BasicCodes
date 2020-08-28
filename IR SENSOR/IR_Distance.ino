void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(2,INPUT)//IR SENSOR
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)==HIGH)
{
  Serial.println("pressed!");
  digitalWrite(7,HIGH);
  delay(0);
}
else
{
  digitalWrite(7,LOW);
  delay(0);
  
}
}
