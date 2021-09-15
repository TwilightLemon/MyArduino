int port =9;
void setup() {
  pinMode(port,OUTPUT);

}
//用于无源蜂鸣器 需要自己控制 振子
void loop() {
   int t=1;
   for(int i=0;i<200;i++){
    digitalWrite(port,HIGH);
    delay(t);
    digitalWrite(port,LOW);
    delay(t);
    }
    delay(1000);
}
