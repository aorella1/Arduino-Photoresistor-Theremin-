

const int sensorPin = 0;
const int buzzerPin = 9;

int toneLevel, high = 0, low = 1023;


void setup()
{
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

}


void loop()
{
  toneLevel = analogRead(sensorPin);
  manualTune();  // manually change the range from light to dark

  tone(buzzerPin, toneLevel);
 
}


void manualTune()
{
 
  toneLevel = map(toneLevel, 0, 1023, 0, 1000);
  toneLevel = constrain(toneLevel, 0, 1000);
} 

