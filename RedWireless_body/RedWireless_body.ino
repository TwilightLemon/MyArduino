int ledPin = 11;
int pirPin = 7;

int pirValue;
int sec = 0;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(pirPin, INPUT);

    digitalWrite(ledPin, LOW);
    Serial.begin(9600);
}

void loop()
{
    pirValue = digitalRead(pirPin);
    digitalWrite(ledPin, pirValue);
        // 以下注释可以观察传感器输出状态
     sec += 1;
     Serial.print("Second: ");
     Serial.print(sec);
     Serial.print("PIR value: ");
     Serial.print(pirValue);
     Serial.print('\n');
     delay(1000);
}
