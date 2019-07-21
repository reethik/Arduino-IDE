

const int trigPin = 2;
const int echoPin = 4;
void setup() {
Serial.begin(9600);}
void loop()
{
long duration, inches, cm, mm;
pinMode(trigPin, OUTPUT);
digitalWrite(trigPin, LOW);
delayMicroseconds(2000);
digitalWrite(trigPin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
inches = microsecondsToInches(duration);
cm = microsecondsToCentimeters(duration);
mm = microsecondsToMillimeters(duration);
Serial.print(inches);
Serial.print("in, ");
Serial.print(cm);
Serial.print("cm, ");
Serial.print(mm);
Serial.print(" mm");
Serial.println();
delay(1000);
}
long microsecondsToInches(long microseconds)
{return microseconds / 74 / 2;}
long microsecondsToCentimeters(long microseconds)
{return microseconds / 29 / 2;}
long microsecondsToMillimeters(long microseconds)
{return microseconds / 2.9 / 2;}
