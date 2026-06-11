void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Start MCU!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("loop main");
  delay(1000);
}
