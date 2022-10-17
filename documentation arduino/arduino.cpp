// C++ code
//
#include <Servo.h>

#include <Adafruit_LiquidCrystal.h>

#include <LiquidCrystal_I2C.h>

#include <LiquidCrystal.h>

#include "Adafruit_LEDBackpack.h"

Servo servo_0;

LiquidCrystal lcd_1(2, 3, 4, 5, 6, 7);

Adafruit_7segment led_display1 = Adafruit_7segment();

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3, OUTPUT);
  servo_0.attach(0, 500, 2500);
  pinMode(0, OUTPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  lcd_1.begin(16, 2); // Set up the number of columns and rows on the LCD.
  led_display1.begin(112);

  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  analogWrite(3, 0);
  servo_0.write(0);
  tone(0, 523, 1000); // play tone 60 (C5 = 523 Hz)
  Serial.println("hello world");
  analogWrite(3, 255);
  analogWrite(6, 0);
  analogWrite(5, 0);
  lcd_1.print("hello world");
  lcd_1.setCursor(0, 0);
  lcd_1.clear();
  lcd_1.display();
  lcd_1.cursor();
  lcd_1.blink();
  lcd_1.autoscroll();
  lcd_1.scrollDisplayLeft();
  lcd_1.scrollDisplayRight();
  lcd_1.leftToRight();
  lcd_1.rightToLeft();
  led_display1.println("1234");
  led_display1.writeDisplay();
  led_display1.clear();
  led_display1.writeDisplay();
  led_display1.setBrightness(0);
  led_display1.setBrightness(7);
  led_display1.setBrightness(15);
  led_display1.blinkRate(0);
  led_display1.blinkRate(3);
  led_display1.blinkRate(2);
  led_display1.blinkRate(1);
  led_display1.drawColon(false);
  led_display1.writeDisplay();
  led_display1.drawColon(true);
  led_display1.writeDisplay();
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}