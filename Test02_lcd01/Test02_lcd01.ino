

//导入库
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20,16,2);

String inputString = "";

void setup() {
  lcd.begin(16, 2);
  
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();
    if (input == '\n') {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(inputString);
      inputString = "";
    } else {
      inputString += input;
    }
  }
}
