int myDelay = 0;

void setup()
{
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  myDelay = 1;

  if (digitalRead(12) == HIGH || digitalRead(13) == HIGH) {
    digitalWrite(7, HIGH);
    delay(1000 * myDelay); // Wait for 1000 * myDelay millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(1000 * myDelay); // Wait for 1000 * myDelay millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(1000 * myDelay); // Wait for 1000 * myDelay millisecond(s)
    digitalWrite(5, LOW);
    digitalWrite(0, HIGH);
  }
}