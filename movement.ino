int pir = 2;
int etat = 0;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{ 
 etat=digitalRead(pir);
 if (etat == HIGH)
 {
   digitalWrite(LED_BUILTIN, HIGH);
   delay(500);
 }   
  else{
    digitalWrite(LED_BUILTIN, LOW);
 }
}