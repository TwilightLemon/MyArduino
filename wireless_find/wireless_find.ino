#define finder 12
#define led 11
#define bee 8
int val=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(finder,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(finder);
  Serial.println(val);
  if(val==1){
    digitalWrite(led,HIGH);
    digitalWrite(bee,HIGH);
    }
    else{
      digitalWrite(led,LOW);
      digitalWrite(bee,LOW);
      }
}
