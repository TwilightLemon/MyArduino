#define voice A0
#define led 13
int val=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(voice,INPUT);
  pinMode(led,OUTPUT);

  digitalWrite(led,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(voice);
  Serial.print(val);
  if(val>=50){
    digitalWrite(led,HIGH);
    delay(500);
    }
   else{
     digitalWrite(led,LOW);
    }
}
