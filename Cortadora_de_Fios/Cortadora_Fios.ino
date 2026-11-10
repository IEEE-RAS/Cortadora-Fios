#include <LiquidCrystal.h>
#include <Servo.h>  // Biblioteca necessária para o Servo Motor

/*
  ============================================================
  PROJETO: CORTADORA / ALIMENTADORA DE FIOS (TESTE DE INTERFACE)
  PLACA: Wavgat UNO (LGT8F328P)
  INTERFACE: LCD 16x2 + Servo SG90
  ============================================================
  Este código simula o fluxo do sistema com o LCD e já realiza
  o movimento real do Servo Motor para direcionar o fio.
*/

// Inicialização do LCD com os pinos físicos da montagem
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Inicialização do Servo Motor
Servo servoGuia;
const int pinoServo = 9; // Fio de sinal (laranja/amarelo) do servo

// ============================================================
// CONFIGURAÇÕES DE ÂNGULOS DO SERVO (Ajuste na montagem física)
// ============================================================
const int anguloAlimentacao = 15;  // Posição reta (onde o fio corre livre)
const int anguloCorte = 90;       // Posição inclinada (alinha o fio com a lâmina)

// ============================================================
// CONFIGURAÇÕES DE TEMPO (SIMULAÇÃO DOS MOTORES)
// ============================================================
const int tempoAlimentacao = 3000;    // Tempo puxando o fio
const int tempoMovimentoServo = 1000; // Tempo para o servo completar o giro
const int tempoCorte = 1000;          // Tempo fechando o alicate
const int tempoRetorno = 1000;        // Tempo reabrindo o alicate


void setup() {
  // Inicializa o display 16 colunas x 2 linhas
  lcd.begin(16, 2);

  // Inicializa o Servo Motor e garante que ele comece na posição reta
  servoGuia.attach(pinoServo);
  servoGuia.write(anguloAlimentacao);

  // Mensagem Inicial de Boot
  lcd.setCursor(0, 0);
  lcd.print("Cortadora Fios");
  lcd.setCursor(0, 1);
  lcd.print("Sistema pronto");

  delay(2500);
  lcd.clear();
}


void loop() {
  // ETAPA 1 - ALIMENTAR O FIO
  alimentarFio();
  delay(500);

  // ETAPA 2 - POSICIONAR FIO PARA CORTE (Ação Real do Servo)
  posicionarParaCorte();
  delay(500);

  // ETAPA 3 - CORTAR O FIO
  cortarFio();
  delay(1000);

  // ETAPA 4 - RETORNAR O CORTADOR
  retornarCortador();
  delay(500);

  // ETAPA 5 - RETORNAR O GUIA PARA O CENTRO (Ação Real do Servo)
  retornarGuia();

  // ETAPA 6 - INFORMA FIM DO CICLO
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Ciclo completo");
  lcd.setCursor(0, 1);
  lcd.print("Aguarde...");

  // Pausa antes de reiniciar o processo
  delay(3000);
}


// ============================================================
// FUNÇÕES DE EXIBIÇÃO E MOVIMENTO
// ============================================================

void alimentarFio() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Alimentando");
  lcd.setCursor(0, 1);
  lcd.print("fio...");

  // Simula o tempo que o Motor 1 (passo) ficaria ligado
  delay(tempoAlimentacao);

  // Confirmação de posicionamento
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fio posicionado");
  delay(1000);
}


void posicionarParaCorte() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Movendo guia...");
  lcd.setCursor(0, 1);
  lcd.print("Alvo: Corte");

  // O Servo Motor move fisicamente o tubo guia para o alicate
  servoGuia.write(anguloCorte); 
  delay(tempoMovimentoServo); // Dá tempo para a mecânica se mover
}


void cortarFio() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Cortando");
  lcd.setCursor(0, 1);
  lcd.print("fio...");

  // Simula o tempo que o Motor 2 (corte) ficaria acionado
  delay(tempoCorte);
}


void retornarCortador() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Abrindo");
  lcd.setCursor(0, 1);
  lcd.print("cortador...");

  // Simula o tempo que o Motor 2 levaria para retornar
  delay(tempoRetorno);
}


void retornarGuia() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Voltando guia");
  lcd.setCursor(0, 1);
  lcd.print("para o centro...");

  // O Servo Motor puxa fisicamente o tubo guia de volta ao alinhamento original
  servoGuia.write(anguloAlimentacao); 
  delay(tempoMovimentoServo);
}