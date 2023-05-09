int gasSensor = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(gasSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(gasSensor);
  Serial.println(value);
  delay(500);
}