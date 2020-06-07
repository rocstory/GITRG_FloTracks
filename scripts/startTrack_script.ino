/*
* Start Track script
* GITRG: FlowTracks
* 6/2/20
* startTrack_script.ino
*/

int startTrack = 0;

int displayTime = 0;

void setup()
{
  pinMode(13, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  displayTime = 1;

  if (digitalRead(13) == HIGH) {
    digitalWrite(7, HIGH);
    delay(1000 * displayTime); // Wait for 1000 * displayTime millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(1000 * displayTime); // Wait for 1000 * displayTime millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(1000 * displayTime); // Wait for 1000 * displayTime millisecond(s)
    digitalWrite(5, LOW);
    digitalWrite(1, HIGH);
  }
}