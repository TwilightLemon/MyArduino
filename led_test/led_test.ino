#define y 7
#define r 8
#define g 9
#define w 10
#define b 11

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(y,OUTPUT);
   pinMode(r,OUTPUT);
   pinMode(g,OUTPUT);
   pinMode(w,OUTPUT);
   pinMode(b,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World!"); //打印Hello World!并回车换行

  Light(y);
  Light(r);
  Light(g);
  Light(w);
  Light(b);
}

void Light(int l){
  digitalWrite(l,HIGH);
  delay(200);
  digitalWrite(l,LOW);
  delay(200);
  }
