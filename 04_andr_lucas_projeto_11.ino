
// Projeto
// Autor: André
// Data: 24-09-2020
// Link: https://www.tinkercad.com/things/jToxyaZdGA7-andre-lucas-projeto-1

const int A = 6;
const int B = 5;
const int C = 10;
const int D = 11;
const int E = 12;
const int F = 8;
const int G = 9;
const int PONTO = 3; 
int cont;

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(PONTO, OUTPUT);
  
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
  
}

void loop()
{
  for(cont = 0; cont<= 12; cont++)
  {
    switch(cont)
    {
           case 0: //LED Vermelho
      {
  //Acende o led
  digitalWrite(1, HIGH);
  delay(700); // Espera por 700 milissegundos
  
  //Apaga o led
  digitalWrite(1, LOW);
  delay(1000); // Espera por 1000 milissegundos      
      }
           case 1: //A
      {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);      
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 2: //n
      {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;  
      }
           case 3: //d
      {
  digitalWrite(A, LOW); 
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW); 
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 4: //r
      {
  digitalWrite(A, LOW); 
  digitalWrite(B, LOW); 
  digitalWrite(C, LOW); 
  digitalWrite(D, LOW); 
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW); 
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 5: //e
      {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW); 
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 6: //L
      {
  digitalWrite(A, LOW); 
  digitalWrite(B, LOW);
  digitalWrite(C, LOW); 
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW); 
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 7: //u
      {
  digitalWrite(A, LOW); 
  digitalWrite(B, LOW); 
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW); 
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      } 

           case 8: //c
      {
  digitalWrite(A, LOW); 
  digitalWrite(B, LOW); 
  digitalWrite(C, LOW);  
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW); 
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
       }
           case 9: //a
      {
  digitalWrite(A, LOW); 
  digitalWrite(B, LOW); 
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW); 
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, HIGH);        
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 10: //s
      {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);      
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(PONTO, LOW);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 11: //.
      {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);      
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(PONTO, HIGH);
  delay(1250); // Wait for 1250 millisecond(s)
  break;
      }
           case 12: //LED Azul
      {
  //Acende o led
  digitalWrite(0, HIGH);
  delay(700); // Espera por 700 milissegundos
  
  //Apaga o led
  digitalWrite(0, LOW);
  delay(1000); // Espera por 1000 milissegundos
      }
    default:
    ;
  }
 }  
}