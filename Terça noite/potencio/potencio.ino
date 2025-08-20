#define int 9
#define int 10

int pot = A0;   // potenciômetro ligado ao pino analógico A0
int valor;

void setup() {
  Serial.begin(9600); // monitor serial
}

void loop() {
  valor = analogRead(pot); // lê valor (0–1023)
  Serial.println(valor);   // mostra no Serial Monitor
  delay(200);
}

