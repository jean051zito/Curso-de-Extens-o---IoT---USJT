// C++ code
//
void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A5));
  if (analogRead(A5) > 750) {
    Serial.println("Esta escuro!");
    digitalWrite(6, HIGH);
    digitalWrite(3, LOW);
  } else {
    Serial.println("Esta claro");
    digitalWrite(3, HIGH);
    digitalWrite(6, LOW);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}