#include<LiquidCrystal.h>
int LCDcol=16;
int LCDrow=2;

LiquidCrystal lcd(0,1,5,4,3,2);
void setup() {
  // put your setup code here, to run once:

lcd.begin(LCDcol,LCDrow);
}

void loop() {
 lcd.setCursor(4,0);
  lcd.print("Hello IOT");
  delay(500);
  lcd.clear();
  delay(500);
  
  
  // put your main code here, to run repeatedly:

}
