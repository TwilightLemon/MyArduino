//�������������⣺
//����������ȶ� �� PWM�Ӵ�������ԭ��..
//���ְ�ס�� �����ȶ����
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
  //255�����������ƽ
  value=(int)(voltage*255);
  
  Serial.println(value);

  analogWrite(led,value);
  delay(10);
  
}
