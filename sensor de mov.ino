// C++ code
//
void setup()
{
  pinMode(9, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(9));
  if (digitalRead(9) == 1) {
    tone(3, 29, 1000); // play tone 10 (A#0 = 29 Hz)
  }
  delay(1000); // Wait for 1000 millisecond(s)
}