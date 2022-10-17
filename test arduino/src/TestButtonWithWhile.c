/**
 * @file TestButtonWithWhile.c
 * @author Ulysse (github.com/MignonPetitXelow)
 * @brief 
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */


void setup(void)
{
  Serial.begin(9600);
}

void loop()
{
    int count = 0;
    while(isPressed(4))
    {
        return;
    }
    setLedBuiltin(true);
    while(isPressed(4))
    {
        return;
    }
    setLedBuiltin(false);
}

void setLedBuiltin(bool value)
{
    pinMode(LED_BUILTIN, OUTPUT);
    switch(value) // Optimiser cette chose car c'est pas opti.
    {
        case true:
            digitalWrite(LED_BUILTIN, HIGH);
            break;
        case false: 
            digitalWrite(LED_BUILTIN, LOW);
            break;
    }
}

bool isPressed(int pin)
{
    if(digitalRead(pin) == HIGH)
        return true;

    return false;
}