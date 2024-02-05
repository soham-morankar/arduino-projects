int buzzerPin = 8;
void setup() {
  pinMode(buzzerPin, OUTPUT);
}
void loop() {
  digitalWrite(buzzerPin, HIGH);
  delay(1000); // 1 sec
  digitalWrite(buzzerPin, LOW);
  delay(500); // 0.5 sec 
}

