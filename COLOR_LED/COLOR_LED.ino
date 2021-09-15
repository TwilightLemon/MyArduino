#define R  11
#define G  10
#define B  9
void setup() {
  Serial.begin(9600);
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  int i;

  //RED 
  for(i=255;i>0;i--){
    analogWrite(R,i);
    analogWrite(G,255);
    analogWrite(B,255);
    delay(4);
    }
    delay(500);

      //GREEN
  for(i=255;i>0;i--){
    analogWrite(R,255);
    analogWrite(G,i);
    analogWrite(B,255);
    delay(4);
    }
    delay(500);

      //BLUE
  for(i=255;i>0;i--){
    analogWrite(R,255);
    analogWrite(G,255);
    analogWrite(B,i);
    delay(4);
    }
    delay(500);

    Serial.println("Light!");
}
