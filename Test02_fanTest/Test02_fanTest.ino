#include "Servo.h"
Servo myservo;
// 接口
const int fanPin = 9;   

// 三个档次速度
const int stopSpeed = 0;
const int midSpeed = 128;
const int highSpeed = 255;

// 初始化定义
int currentSpeed = stopSpeed;

void setup() {
  pinMode(fanPin, OUTPUT);
  analogWrite(fanPin, currentSpeed);
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // 检查是否有输出
  if (Serial.available() > 0) {
    char input = Serial.read();
    // 串口输入检测 
    // 三种不同控制循环
    switch (input) {
      case '0':
        currentSpeed = stopSpeed;
        break;
      case '1':
        currentSpeed = midSpeed;
        break;
      case '2':
        currentSpeed = highSpeed;
        break;
      default:
        break;
    }
    // 写入
    analogWrite(fanPin, currentSpeed);
    myservo.write(currentSpeed);
    Serial.print("Current speed: ");
    Serial.println(currentSpeed);
  }
}
