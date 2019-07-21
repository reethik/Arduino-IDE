

int led = 9;           
int brightness = 255;
int fadeAmount = 5;   


void setup() {

  pinMode(led, 9);
}


void loop() {
 
  analogWrite(led, 255)
  brightness = brightness + fadeAmount;

  
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}
