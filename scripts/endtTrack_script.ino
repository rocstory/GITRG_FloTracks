int counter;

void setup()
{
  pinMode(13, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(5, INPUT);
}

void loop()
{
  if (digitalRead(13) == HIGH) {
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    for (counter = 0; counter < 5; ++counter) {
      delay(500); // Wait for 500 millisecond(s)
      if (digitalRead(5) == HIGH) {
        digitalWrite(5, LOW);
      } else {
        digitalWrite(5, HIGH);
      }
    }
  }
}