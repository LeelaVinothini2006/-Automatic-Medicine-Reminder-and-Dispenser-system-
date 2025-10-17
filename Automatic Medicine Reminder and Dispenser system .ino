#include <LiquidCrystal.h>
#define D4 5
#define D5 4
#define D6 3
#define D7 2
#define E 11
#define RS 12
int buzz= 13;
LiquidCrystal LCD(12, 11, 5, 4, 3, 2);
void setup()
{
  pinMode(buzz, OUTPUT);
  LCD.begin(16, 2);
}
void loop()
{
  LCD.setCursor(4, 0);
  LCD.print("Time for");
  LCD.setCursor(2, 1);
  LCD.print("1st Medicine");
  digitalWrite(buzz, HIGH); 
  delay(2000);
  digitalWrite(buzz, LOW);  
  LCD.clear();
  delay(5000);
  LCD.setCursor(4, 0);
  LCD.print("Time for");
  LCD.setCursor(2, 1);
  LCD.print("2nd Medicine");
  digitalWrite(buzz, HIGH); 
  delay(2000);
  digitalWrite(buzz, LOW); 
  LCD.clear();
  delay(5000);
  LCD.setCursor(4, 0);
  LCD.print("Time for");
  LCD.setCursor(2, 1);
  LCD.print("3rd Medicine");
  digitalWrite(buzz, HIGH); 
  delay(2000);
  digitalWrite(buzz, LOW); 
  LCD.clear();
  delay(8000);
}
