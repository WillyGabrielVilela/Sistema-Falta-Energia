#include <LiquidCrystal.h>

// Definições de pinos
#define VOUT_PIN A0     // Pino onde o sensor de tensão está conectado

// Inicializa o display LCD no modo paralelo
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // Conectado nos pinos do Arduino

void setup() {
  Serial.begin(9600);                // Inicializa a comunicação serial para debug
  lcd.begin(16, 2);                  // Inicializa o display LCD 16x2
  
  lcd.setCursor(0, 0);
  lcd.print("Monitor de Energia");
  delay(2000);                       // Pequeno atraso para exibir mensagem inicial
}

void loop() {
  // Lê a tensão do sensor de monitoramento
  int leitura = analogRead(VOUT_PIN); // Lê o valor analógico do sensor de tensão
  float volts = leitura * (5.0 / 1023.0); // Converte a leitura para volts

  Serial.print("Leitura: ");
  Serial.print(leitura);             // Exibe a leitura bruta
  Serial.print(" | Tensao: ");
  Serial.println(volts);             // Exibe a leitura da tensão no monitor serial

  // Exibe o status da energia no display LCD
  lcd.setCursor(0, 0);
  lcd.print("Monitor de Energia");
  
  lcd.setCursor(0, 1);               // Move para a segunda linha do display
  if (volts < 0.1) {                 // Se a tensão estiver abaixo do limite, indica falta de energia
    lcd.print("Energia: Falta ");
  } else {
    lcd.print("Energia: OK    ");
  }

  delay(2); 
}

