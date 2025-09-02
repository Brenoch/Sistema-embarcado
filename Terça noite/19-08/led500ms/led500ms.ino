int led = 3; // LED no pino digital 3

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH); // acende LED
  delay(500);              // espera 500 ms
  digitalWrite(led, LOW);  // apaga LED
  delay(500);              // espera 500 ms
}
