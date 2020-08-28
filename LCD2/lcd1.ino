#include<LiquidCrystal.h>
LiquidCrystal lcd(0,1,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
}

void loop() 
{
  
  for(int x=0;x<17;x++)
  {
  lcd.scrollDisplayRight();
  lcd.setCursor(0,0);
  lcd.print("Welcome");
  lcd.setCursor(0,1);
  lcd.print("Lcd Display");
  delay(300);
  }
  for(int x=0;x<28;x++)
  {
  lcd.scrollDisplayLeft();
  lcd.setCursor(0,0);
  lcd.print("Welcome");
  lcd.setCursor(0,1);
  lcd.print("Lcd Display");
  delay(300);
  }
  
  
  // put your main code here, to run repeatedly:

}
