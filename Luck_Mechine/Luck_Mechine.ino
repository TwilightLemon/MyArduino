#include <stdlib.h>
#include <Wire.h>
#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C lcd(0x27,16,2);
int btn =7;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn,INPUT);
  Serial.begin(9600);
  lcd.init();

  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Hello World");
  lcd.setCursor(4,1);
  lcd.print("Only English");
}

void loop() {
    if(digitalRead(btn)==HIGH){
    delay(20);
    if(digitalRead(btn)==HIGH){
        lcd.clear();
        lcd.setCursor(2,0);
        lcd.print("Hello World");
        lcd.setCursor(4,1);
        int d=random(0,6);
        if(d==0)
          lcd.print("Great!");
        else if(d==1)
          lcd.print("Yeah!");
        else if(d==2)
          lcd.print("A");
        else if(d==3)
          lcd.print("SDGFS");
        else if(d==4)
          lcd.print("DFG");
        else if(d==5)
          lcd.print("CDGH");
      }
    }
    
    Serial.println(digitalRead(btn)==LOW);
    delay(2000);
}
