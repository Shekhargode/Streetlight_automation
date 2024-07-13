#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

const int rs = 6, en = 7, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int LED1 = 8;
int LED2 = 9;
int LDR = 11;
int IR = 12;
int LIGHTSTATE = 0;
int VEHICLESTATE = 0;

void setup() {
    pinMode(LDR, INPUT);
    pinMode(IR, INPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    lcd.begin(16, 2);
    lcd.print("AUTOMATIC");
    lcd.setCursor(0, 1);
    lcd.print("STREET LIGHT");
    delay(5000);
    lcd.clear();
}

void loop() {
    LIGHTSTATE = digitalRead(LDR);
    VEHICLESTATE = digitalRead(IR);
    if (LIGHTSTATE == HIGH) {
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        lcd.print("DAY TIME");
    } else {
        digitalWrite(LED1, HIGH);
        lcd.print("NIGHT TIME");
        if (VEHICLESTATE == HIGH) {
            digitalWrite(LED2, HIGH);
        } else {
            digitalWrite(LED2, LOW);
        }
    }
    delay(5000);
    lcd.clear();
}
