
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(11,HIGH);
analogWrite(12,LOW);
Serial.println("FORWARD");
delay(5000);
digitalWrite(12,HIGH);
analogWrite(11,LOW);
Serial.println("BACKWARD");
delay(5000);
}
