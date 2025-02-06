void setup() {
pinMode(13, OUTPUT);
pinMode (2, INPUT);
}

void loop() {
digitalWrite(13, HIGH);
tone(9,440);
delay(500);
digitalWrite(13, LOW);
noTone(9);
delay(200);
}
