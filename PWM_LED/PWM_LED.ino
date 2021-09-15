//可能遇到的问题：
//电流输出不稳定 是 PWM接触不良的原因..
//用手按住后 电流稳定输出
#define PW A0
#define led 11
int value=0;
float voltage=0.0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PW,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(PW);
  voltage=(float)value/1023;
  //255是最大的输出电平
  value=(int)(voltage*255);
  
  Serial.println(value);

  analogWrite(led,value);
  delay(10);
  
}
