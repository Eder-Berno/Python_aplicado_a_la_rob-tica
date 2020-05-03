void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(2000);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
}
