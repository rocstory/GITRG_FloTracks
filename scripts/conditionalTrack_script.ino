int myDelay = 0;

int myState = 0;

void setup()
{
  pinMode(1, INPUT);
  pinMode(1, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  myState = 0;

  myDelay = 1200;

  if (digitalRead(1) == HIGH) {
    digitalWrite(1, LOW);
    digitalWrite(13, HIGH);
    delay(myDelay); // Wait for myDelay millisecond(s)
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(myDelay); // Wait for myDelay millisecond(s)
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    if (myState == 1) {
      delay(myDelay); // Wait for myDelay millisecond(s)
      digitalWrite(11, LOW);
      digitalWrite(7, HIGH);
      delay(myDelay); // Wait for myDelay millisecond(s)
      digitalWrite(7, LOW);
      digitalWrite(6, HIGH);
      delay(myDelay); // Wait for myDelay millisecond(s)
      digitalWrite(6, LOW);
      digitalWrite(0, HIGH);
    } else {
      delay(myDelay); // Wait for myDelay millisecond(s)
      digitalWrite(11, LOW);
      digitalWrite(5, HIGH);
      delay(myDelay); // Wait for myDelay millisecond(s)
      digitalWrite(5, LOW);
      digitalWrite(4, HIGH);
      delay(myDelay); // Wait for myDelay millisecond(s)
      digitalWrite(4, LOW);
      digitalWrite(2, HIGH);
    }
  }
}