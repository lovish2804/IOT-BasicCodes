
int i;
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for(i = 0; i <= 255; i+=5)
{
digitalWrite(5,LOW);
analogWrite(3,i);
Serial.println(i);
delay(100);
}

 for( i = 255; i >= 0; i-=5)
{
digitalWrite(5,HIGH);
analogWrite(3,i);
Serial.println(i);
delay(100);
}

}
