int bee =11;
int btn =7;

void setup() {
  pinMode(bee,OUTPUT);
  pinMode(btn,INPUT);
  digitalWrite(bee,LOW);

  Serial.begin(9600);
}
void loop() {
   if(digitalRead(btn)==HIGH){
    delay(2);
    if(digitalRead(btn)==HIGH){
      digitalWrite(bee,HIGH);
      }
    }
    digitalWrite(bee,LOW);
    Serial.println(digitalRead(btn)==LOW);
   // delay(500);
}
