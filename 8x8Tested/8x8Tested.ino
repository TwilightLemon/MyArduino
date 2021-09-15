int clk =3;
int cs=4;
int din=5;

unsigned char disp1[12][8]=
{               //编码
{0x0,0x1E,0x20,0x20,0x3E,0x2,0x2,0x3C},//S
{0x0,0x3E,0x8,0x8,0x8,0x8,0x8,0x8},//T
{0x3C,0x40,0x40,0x40,0x40,0x40,0x3C,0x0},//C
{0x3C,0x42,0x42,0x42,0x42,0x42,0x42,0x3C},//O
{0x7C,0x42,0x42,0x42,0x42,0x42,0x7C,0x0},//D
{0x7C,0x40,0x40,0x7C,0x40,0x40,0x40,0x7C},//E
{0x3C,0x20,0x20,0x3C,0x4,0x4,0x3C,0x0},//5
{0x7E,0x2,0x2,0x7E,0x40,0x40,0x40,0x7E},//2
{0x3C,0x42,0x42,0x42,0x42,0x42,0x42,0x3C},//0
{0x5F,0xE4,0x44,0x64,0xC4,0x44,0xCC,0x44},//打
{0xFE,0x10,0x10,0x10,0x10,0x10,0x11,0xFF},//工
{0x10,0x10,0x10,0x10,0x10,0x28,0x44,0x83}//人
};

void setup()
{                       //设置引脚模式
  pinMode(cs,OUTPUT);
  pinMode(clk,OUTPUT);
  pinMode(din,OUTPUT);
  Init_MAX7219();
}

void loop(){
  char i,j;
  for(j=0;j<12;j++)     //for循环嵌套实现字符显示
  {
   for(i=1;i<9;i++)
    Write_Max7219(i,disp1[j][i-1]);
   delay(500);
  } 
}

void Write_Max7219_byte(char DATA)         
{
   char i;    
   digitalWrite(cs,0);                
            for(i=8;i>=1;i--)
          {                  
           digitalWrite(clk,0);
            if((DATA&0x80)>0){digitalWrite(din,1);}
            else{digitalWrite(din,0);}
            //提取最高位给DIN端口
            DATA=DATA<<1;//左移一位
            digitalWrite(clk,1);
           }                                 
}
void Write_Max7219(char address,char dat)
{ 
         digitalWrite(cs,0);
         Write_Max7219_byte(address);           //写入地址，即数码管编号
     Write_Max7219_byte(dat);               //写入数据，即数码管显示数字 
         digitalWrite(cs,1);                        
}
void Init_MAX7219(void)
{
Write_Max7219(0x09, 0x00);//译码方式：BCD码
Write_Max7219(0x0a, 0x01);//亮度 
Write_Max7219(0x0b, 0x07); //扫描界限；8个数码管显示
Write_Max7219(0x0c, 0x01);  //掉电模式：0，普通模式：1
Write_Max7219(0x0f, 0x00);
delay(500); //显示测试：1；测试结束，正常显示：0
}
