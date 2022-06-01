#include <LiquidCrystal.h>

 

const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int temperaturabase = 0;
int celsius = 0;
int f = 0;

void setup() {
  Serial.begin(9600);
 	pinMode(A0, INPUT);
  	lcd.begin(16,2);
  
}
void loop() {
  Serial.println(celsius);
 	  celsius = analogRead(A0);
  	lcd.setCursor(0, 0);
  	lcd.print(celsius);
  	lcd.print("C");
  	delay(1000);
  	lcd.clear();
  
}
