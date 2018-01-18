int n = 0;
int ledPin = 13;
long milli = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("0 Seconds have elapsed");
  pinMode(ledPin, OUTPUT);
}
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  n = n + 1;
  milli = millis();
  Serial.println(milli);
  Serial.print(n);
  Serial.println(" seconds have elapsed");

}
