#define ROW_0  2
#define ROW_1  3
#define ROW_2  4
#define ROW_3  5
#define ROW_4  A3
#define ROW_5  A2
#define ROW_6  A1
#define ROW_7  A0
#define LED_A  6
#define LED_B  7
#define LED_C  8
#define LED_D  9
#define LED_E  10
#define LED_F  11
#define LED_G  12
#define LED_H  13

const char ROW_PIN[8]={ROW_0,ROW_1,ROW_2,ROW_3,ROW_4,ROW_5,ROW_6,ROW_7};
const char COL_PIN[8]={LED_A,LED_B,LED_C,LED_D,LED_E,LED_F,LED_G,LED_H};
char HeartMap[8][8]={
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0
  };
void setup() {
  Serial.begin(115200);
  for(int i=0;i<8;i++){
    pinMode(ROW_PIN[i],OUTPUT);
    pinMode(COL_PIN[i],OUTPUT);
    delay(20);
    digitalWrite(ROW_PIN[i],LOW);
    digitalWrite(COL_PIN[i],HIGH);
    
    }
    digitalWrite(ROW_4,LOW);
}

void loop() {
  for(int j=0;j<8;j++){
    for(int i=0;i<8;i++){
      if(HeartMap[i][j])
        digitalWrite(ROW_PIN[i],HIGH);
      else
        digitalWrite(ROW_PIN[i],LOW);
        
      }
      digitalWrite(COL_PIN[j],LOW);
      delay(2);
      digitalWrite(COL_PIN[j],HIGH);
    }
}
