int analogValue = 0;
  
void setup() {
  
  pinMode(D1, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);

}

void loop() {
  
  analogValue = analogRead(A0);
  if (analogValue > 0) {
    digitalWrite(D8, HIGH);
  }
  if (analogValue > 150 && analogValue <= 200) {
    digitalWrite(D1, HIGH);
    digitalWrite(D7, HIGH);
    delay(250);
    digitalWrite(D1, LOW);
    digitalWrite(D7, LOW);
    delay(250);
  }
  if (analogValue > 200 && analogValue <= 250) {
    digitalWrite(D7, HIGH);
    digitalWrite(D6, HIGH);
    digitalWrite(D1, HIGH);
    delay(250);
    digitalWrite(D6, LOW);
    delay(250);
  }
  if (analogValue > 250 && analogValue <= 300) {
    digitalWrite(D7, HIGH);
    digitalWrite(D6, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D1, HIGH);
    delay(250);
    digitalWrite(D5, LOW);
    delay(250);
  }
  if (analogValue > 300) {
    digitalWrite(D7, HIGH);
    digitalWrite(D6, HIGH);
    digitalWrite(D5, HIGH);
    digitalWrite(D4, HIGH);
    delay(250);
    digitalWrite(D4, LOW);
    delay(250);
  }
  if (analogValue <= 300) {
    digitalWrite(D4, LOW);
  }
  if (analogValue <= 250) {
    digitalWrite(D5, LOW);
  }
  if (analogValue <= 200) {
    digitalWrite(D6, LOW);
    digitalWrite(D1, LOW);
  }
  if (analogValue <= 150) {
    digitalWrite(D7, LOW);
  }
}
