|functions| Details |Description|
|---|---|---|
|digitalWrite(int port, enum power)|enum preset for power can be "LOW" or "HIGH"|Can be use with led|   
|analogWrite(int port, int power)|power value can be set between 0 and 100|Can be use with led|
|tone(int port, int tone, int time)|tone need to be in hertz and time is in milliseconde|Activate a speaker with a certain tone for a specific time| 
|noTone(int port)||deactivate a speaker|
|[Serial](https://github.com/MignonPetitXelow/Tinkercad-Documentation/blob/master/subdoc/Serial.md)|Serial monitor|Serial class|
|pinMode(int port, enum mode)|enum preset for mode can be "INPUT" or "OUTPUT"| Set a pin to a specific mode|
||||