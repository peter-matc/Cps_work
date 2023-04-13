const int buttonPin = 2;   //按键的接入口
const int buzzer=7;     //蜂鸣器的接入口
 
 
int buttonState = 0;        
boolean ledState = false;
void setup() {
  pinMode(buzzer,OUTPUT);    
  pinMode(buttonPin, INPUT_PULLUP); //特别要注意这个INPUT_PULLUP，如果换成INPUT，按键会失效
}
 
void loop(){
while(1){
  digitalWrite(buzzer,HIGH);
  if(digitalRead(buttonPin)==LOW){
     ledState = !ledState;
     delay(500);
  }
  delay(2);
  if(ledState==true){
    digitalWrite(buzzer,LOW);
  }
  delay(2);
}
}
