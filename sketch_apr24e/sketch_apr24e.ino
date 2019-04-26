int freq = 2500;
int channel = 0;
int resolution = 10;
int IR = 32;
int dutyCycle = 0;
void setup() {
  Serial.begin(115200);
  ledcSetup(channel, freq, resolution);
  ledcAttachPin(13, channel);
  pinMode(32, INPUT);
}
void loop() {
  if (HIGH == digitalRead(IR)) {
    ledcWriteTone(channel, 1000);
    if (  dutyCycle <= 100,
          dutyCycle = dutyCycle + 5) {
      Serial.println(dutyCycle);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
      ledcWrite(channel, dutyCycle);
      delay(250);
      ledcWrite(channel, 0);
      delay(250);
    }
  } else {
    dutyCycle = 0;
    ledcWriteTone(channel, dutyCycle);
  }
}
