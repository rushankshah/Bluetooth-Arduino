char input = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
}

void loop()
{
  if (Serial.available() > 0)
  {
    input = Serial.read();
    Serial.print(input);
    Serial.print("\n");
    if (input == '0')
      digitalWrite(8, LOW);
    else if (input == '1')
      digitalWrite(8, HIGH);
  }
  delay(1);
}
