#include <Servo.h>

Servo s1;

const int soilPin = A0;
const int trigPin = 5; //blue
const int echoPin = 6; //purple

long duration;
int distanceCm;
int soilValue;

bool objectDetected = false;

//setting these values based on testing and observation, may need to adjust for different environments or sensors
const int BASE = 115;
const int OFFSET = 40;

const int DIST_THRESHOLD = 15;


const int WET_THRESHOLD = 1020;
const int BUFFER = 20;


void moveSlow(int from, int to)
{
  if (from < to)
  {
    for (int i = from; i <= to; i++)
    {
      s1.write(i);
      delay(10);
    }
  }
  else
  {
    for (int i = from; i >= to; i--)
    {
      s1.write(i);
      delay(10);
    }
  }
}

void setup()
{
  Serial.begin(9600);
  s1.attach(7);
  s1.write(BASE);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);
  distanceCm = duration * 0.034 / 2;

  -
  if (distanceCm > 0 && distanceCm < DIST_THRESHOLD)
  {
    if (!objectDetected)
    {
      objectDetected = true;

      Serial.println("OBJECT DETECTED");
      Serial.println("Waiting 2 sec...");

      delay(2000);  // allow object to settle

      // Averaged Moisture Reading
      int sum = 0;
      for (int i = 0; i < 5; i++)
      {
        sum += analogRead(soilPin);
        delay(50);
      }
      soilValue = sum / 5;

      Serial.print("Moisture Value: ");
      Serial.print(soilValue);

      if (soilValue < (WET_THRESHOLD - BUFFER))
        Serial.println(" → WET");
      else
        Serial.println(" → DRY");

     if (soilValue < (WET_THRESHOLD - BUFFER))
{
  Serial.println("WET → RIGHT");
  moveSlow(BASE, BASE - OFFSET);   // swapped
  delay(800);
  moveSlow(BASE - OFFSET, BASE);
}
else
{
  Serial.println("DRY → LEFT");
  moveSlow(BASE, BASE + OFFSET);   // swapped
  delay(800);
  moveSlow(BASE + OFFSET, BASE);
}
      Serial.println("----------------------");
    }
  }
  else
  {
    objectDetected = false;
  }

  delay(100);
}