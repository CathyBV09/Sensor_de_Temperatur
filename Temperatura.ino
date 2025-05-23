const int sensorLM35 = A0;  // Sensor LM35 conectado en A0
float temperatura;          // Variable para la temperatura

void setup() {
  Serial.begin(9600);       // Inicializar comunicación serial
}

void loop() {
  int valor = analogRead(sensorLM35);          // Leer valor analógico del sensor
  float voltaje = valor * 0.00488;             // Convertir a voltios (5V/1024)
  temperatura = voltaje * 100;                  // Convertir a grados Celsius

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  delay(1000);                                  // Esperar 1 segundo
}
