/**
 * @file Arduino test
 * @author Ulysse (github.com/MignonPetitXelow)
 * @brief 
 * @version 0.1
 * @date 2022-09-26
 *
 * @copyright Copyright (c) 2022
 * 
 */

void setup(void) { Serial.begin(9600); }

void loop(void) // Fonction qui tourne en continue
{
    for(int i = 0; i <= 5; i++) // Fais une boucle pendant 5 fois
    {
        Serial.println(i); // Fais comme cout << i << endl;
        delay(1000); // Rajoute du delais
    }
}