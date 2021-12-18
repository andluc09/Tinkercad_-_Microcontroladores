
//Desenvolvimento de um Voltímetro
//Projeto
//Autor: André
//Data: 12-11-2020
// Link: https://www.tinkercad.com/things/1MF1Tyg1UG1-desenvolvimento-de-um-voltimetro

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Configura pinos do LCD
const int LED = 10;
const int Sinal = A0;
int Valor = 0;

void setup()
{
  lcd.begin(16, 2); //Inicializa módulo display 2x16
  lcd.print(" UNISO "); //Escreve texto na 1ª linha do display
  pinMode(LED, OUTPUT);
  Serial.begin(9600); //Inicialização da comunicação serial
  					  //com velocidade de 9600bps
}

unsigned int ADval;
double volts;
String stringOne; //Variável tipo "String" (texto)

void loop()
{
  Valor = analogRead(Sinal); //Leitura do Sinal Analógico
  
  Serial.print("Valor Analogico Lido = "); //Envia através da serial
  										   //a frase dentro das aspas ("frase")
  
  Serial.println(Valor); //Envia através da serial o valor numérico
  						 //da variável "Valor"
  
  digitalWrite(LED, HIGH); //Acende o LED
  
  delay(Valor); //dá um atraso proporcional ao valor lido do Potenciômetro
  
  digitalWrite(LED, LOW); // apaga o LED
  
  delay(Valor); //dá um atraso proporcional ao valor lido do Potenciômetro 
  
  ADval=analogRead(Sinal); //Ler potenciômetro
 
  Serial.print("A/D:");Serial.println(ADval);
 
  stringOne = String(ADval); //Converte valor Analógico/Digital em texto
 
  stringOne += " "; //Concatena um espaço no final do texto
 
  Serial.print("String:");Serial.println(stringOne);
 
  lcd.setCursor(3,1); //Posiciona cursor na linha 1, coluna 3
 
  lcd.print(stringOne); //Escreve valor A/D (Analógico/Digital) na 2ª linha do display
 
  volts=double(ADval)*5/1023; //Converte unid. de A/D (Analógico/Digital) em Volts
 
  Serial.print("Volts:");Serial.println(volts);
 
  lcd.setCursor(8,1); //Posiciona cursor na linha 1, coluna 8
 
  stringOne = String(volts,1); //Converte volts em texto

  stringOne += "V"; // Concatena "V" e espaço no final do texto
 
  Serial.print("String:");Serial.println(stringOne);
 
  lcd.print(stringOne); //Escreve valor de volts no display
 
  delay(1000);
}