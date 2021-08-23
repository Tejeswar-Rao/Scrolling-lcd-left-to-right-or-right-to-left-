#include<LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
}

void loop() {
// put your main code here, to run repeatedly:
String str = "WELCOME TO IRRIGATION SYSTEM";
lcd.print(str);
Serial.println(str);
delay(100);
for(int i=0; i<str.length(); i++)
{
  lcd.scrollDisplayLeft();
  delay(100);
  
}
lcd.clear();
}
