void setup() {
  Serial.begin(19200);
}

void loop() {
    float val = analogRead(A0) * (5.0 / 1023.0);
    Serial.println(val);
}
