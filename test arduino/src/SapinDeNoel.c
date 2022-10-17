/**
 * @file SapinDeNoel.c
 * @author Ulysse (github.com/MignonPetitXelow)
 * @brief 
 * @version 0.1
 * @date 2022-10-17
 * 
 * @copyright Copyright (c) 2022
 */

int timestamp = 500;

void loop(void)
{
  if(isPressed(8)) { FlashOra(); return; }
  
  delay(timestamp);
  StartGre();
  delay(timestamp);
  StartOra();
  delay(timestamp);
  StartRed();
  delay(timestamp);
  StartOra();
}

void setup(void) { pinMode(8, INPUT); }

int B_Color() { for(int i = 1; i < 12; ++i) ShutLight(i); } //Reset all lights 

int A_Color() { for(int i = 1; i < 12; ++i) StartLight(i); } // Set value of all lights to value 1;

void StartLight(int pin) { pinMode(pin, OUTPUT); digitalWrite(pin, HIGH); } // 

void ShutLight(int pin) { digitalWrite(pin, LOW); }

void FlashOra() { delay(timestamp); B_Color(); delay(timestamp); StartAOra(); }

void StartGre() 
{
    B_Color();
    StartLight(5);
    StartLight(4);
}

void StartOra()
{
    B_Color();
    StartLight(6);
    StartLight(3);
}

void StartRed()
{
    B_Color();
    StartLight(7);
    StartLight(2);
}

//Garbage 
bool isPressed(int pin) { if(digitalRead(pin) == HIGH) return true; return false; }