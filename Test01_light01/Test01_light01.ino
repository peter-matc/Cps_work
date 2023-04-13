void setup() {
  // put your setup code here, to run once: 
    pinMode(13,OUTPUT);                  //引脚工作模式
  digitalWrite(13,HIGH);       // 第一次点亮200ms 熄灭 200ms
  delay(200);
  digitalWrite(13,LOW); 
  delay(200);
  digitalWrite(13,HIGH);       // 第二次
  delay(200);
  digitalWrite(13,LOW); 
  delay(200);
}
void loop() { 
    digitalWrite(13,HIGH);   // 点亮1s
    delay(1000);
    digitalWrite(13,LOW);  // 熄灭2s
    delay(2000);
}
