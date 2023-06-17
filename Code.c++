#define fsrpin1 A0
#define sensorPin A3
int LED = 2;
int fsrreading1=0;
int sensorValue = 0; 

void setup()
{
   Serial.begin(9600);
   pinMode(sensorPin, INPUT);
   pinMode(LED, OUTPUT);
}

void loop()
{
   fsrreading1 = analogRead(fsrpin1);
   sensorValue = analogRead(sensorPin);
   if (fsrreading1 >81 ) 
   { 
     digitalWrite(LED, HIGH);
   } 

   if (sensorValue >= 5)
   {
     digitalWrite(LED, LOW);
   }
   if (sensorValue <= 5)
   {
     digitalWrite(LED, HIGH);
   }
 }