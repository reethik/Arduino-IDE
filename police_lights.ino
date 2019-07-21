
int i=0;
void setup() {
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(9, OUTPUT);

}

void loop() {
     for(i=700;i<800;i++){
  tone(9,i);
  delay(10);
  }
  for(i=800;i>700;i--){
  tone(9,i);
  delay(10);
  }
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(100); 
}
