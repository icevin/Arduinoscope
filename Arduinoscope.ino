void setup() {
  Serial.begin(19200);
}

void loop() {
    int in = analogRead(A0);
    float val = in * (5.0 / 1023.0);
    Serial.println(val);
}
