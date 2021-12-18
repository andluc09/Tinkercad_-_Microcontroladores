
// Liga LED
//  Autor : André
// Link: https://www.tinkercad.com/things/jnPgWQICEwq-pisca-led-botao-display-de-7-segmentos

void sete_segmentos();
void pisca();

const int LED = 10; // pino de conexão LED
const int BOTAO = 7; // pino de conexão BOTÃO
int estado = 0; // variável para armazenar o estado do BOTÃO
int estado_antigo = 0; //variável para armazenar o estado anterior do BOTÃO 
int flag = 0; // variável para indicar a história do BOTÃO

const int A = 5;
const int B = 4;
const int C = 9;
const int D = 11;
const int E = 12;
const int F = 6;
const int G = 8;
  
void setup()
{
  pinMode(LED, OUTPUT); // configura pino 10 como saída
  pinMode(BOTAO, INPUT); // configura pino 7 como entrada
  
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop()
{
  sete_segmentos();
  pisca();
} 

void sete_segmentos()
  {
  digitalWrite(A, HIGH);
  	delay(500);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
    delay(500);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
    delay(500);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
    delay(500);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
    delay(500);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
    delay(500);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
    delay(500);
  digitalWrite(G, LOW);
  }

void pisca()	
{
    estado = digitalRead(BOTAO); //lê o estado do botão
  if ((estado == HIGH) && (estado_antigo == LOW)) 
  {
  	flag = 1-flag; // sinaliza que o botão foi pressionado
  }
  
  	estado_antigo = estado;
  
  if (flag == HIGH)
  {
    digitalWrite(LED, HIGH);
  } 
  else 
  {

    digitalWrite(LED, LOW);
  }
}