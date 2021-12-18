
// Projeto - Semáforo
// Autor: André Lucas de Macedo Santos
// RA: 00079537
// Data: 03-12-2020
// Link: https://www.tinkercad.com/things/dPKfNUXsjXp-projeto-semaforo-projeto-3

int carroVermelho = 14; 
int carroAmarelo = 15; 
int carroVerde = 16; 
int pessoaVermelho = 18; 
int pessoaVerde = 19;
int botao = 2;

unsigned long mudaTempo;

int cont = 0;

void setup() {
  
  mudaTempo = millis();
   
  pinMode(carroVermelho, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(pessoaVermelho, OUTPUT);
  pinMode(pessoaVerde, OUTPUT);
  pinMode(botao, INPUT);
  
  digitalWrite(carroVerde, HIGH);
  digitalWrite(pessoaVermelho, HIGH);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(pessoaVerde, LOW);

  pinMode(4, OUTPUT);//display unidades D
  pinMode(5, OUTPUT);//display unidades C
  pinMode(6, OUTPUT);//display unidades B
  pinMode(7, OUTPUT);//display unidades A
  pinMode(8, OUTPUT);//display dezenas D
  pinMode(9, OUTPUT);//display dezenas C
  pinMode(10, OUTPUT);//display dezenas B
  pinMode(11, OUTPUT);//display dezenas A

  digitalWrite(4,LOW); //display unidades inicia em zero DCBA
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //display dezenas inicia em zero DCBA
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);

  Serial.begin(9600);  
}

void loop() {
  
  // A variável que vamos setar abaixo servirá para "guardar" o estado do nosso botão (pressionado ou não pressionado)
  
  int estado = digitalRead(botao);
  delay(50);
  Serial.println(estado);
  
  // Se o botão está sendo pressionado executa, uma vez pressionado aguarda passar 10 segundos desde a última pressão.
  
  if (estado == HIGH) {
    
    //Então SE SIM, executa a função de mudar o estado das luzes abaixo.
    mudaLuzes();
  }
  
   //Então SE NÃO, aguarda se já passou 10 segundos desde a última pressão.
  else 
  {  
    ((millis() - mudaTempo) > 10000);
  }
}
 
void mudaLuzes() {
  
  digitalWrite(carroVermelho, LOW);
  digitalWrite(carroAmarelo, HIGH);    // A luz amarela vai ligar por 4 segundos
  digitalWrite(carroVerde, LOW);    // A luz verde é desligada
  delay(4000); 
  
  digitalWrite(carroVermelho, HIGH);    // A luz vermelha vai ligar por 4 segundos
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVerde, LOW);    // A luz verde é desligada
  delay(4000);   
  
  digitalWrite(carroVermelho, HIGH); // A luz vermelha vai ligar por 20 segundos
  digitalWrite(carroAmarelo, LOW); // A luz amarela vai desligar
  digitalWrite(carroVerde, LOW);    // A luz verde contínua desligada
  
  digitalWrite(pessoaVermelho, LOW);
  digitalWrite(pessoaVerde, HIGH);         
  
  if(cont == 0){
  
   cont=0;
  
  digitalWrite(4,LOW); //nº dois nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº zero nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(500);  
}

  cont++;
  
  if(cont == 1){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH); //nº nove nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(500);  	
}

  cont++;
  
  if(cont == 2){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH); //nº oito nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(500);
}
  
  cont++;
    
  if(cont == 3){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº sete nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
}

  cont++;
    
  if(cont == 4){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº seis nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(500);
}
  
  cont++;
    
  if(cont == 5){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº cinco nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(500);
}

    cont++;
  
  if(cont == 6){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº quatro nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(500);
}

    cont++;
  
  if(cont == 7){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº três nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
}
  
  cont++;
    
  if(cont == 8){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº dois nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(500);
}
 
  cont++;
    
  if(cont == 9){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº um nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(500);
}

  cont++;
  
  if(cont == 10){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); //nº zero nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(500);
}

  cont++;
  
  if(cont == 11){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH); //nº nove nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(500);
}

  cont++;
  
  if(cont == 12){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH); //nº oito nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(500);
}
 
  cont++;
  
    if(cont == 13){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº sete nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
 }

  cont++;
  
    if(cont == 14){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº seis nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(500);
}

  cont++;
    
    if(cont == 15){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº cinco nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(500);
}      
    
  cont++;
  
    if(cont == 16){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº quatro nas unidades
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(500);
}

  cont++;
    
    if(cont == 17){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº três nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
}

  cont++;
    
    if(cont == 18){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº dois nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(500);
}

  cont++;
    
    if(cont == 19){
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº um nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(500);
}

  cont++;
    
 if(cont == 20){        //Condição necessária para zerar (00) a contagem.
  digitalWrite(8,LOW); //nº zero nas unidades
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(4,LOW); //nº zero nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(200);
 }
  
  // Pisca a luz vermelha dos PEDESTRES (frequência de 1 Hz, durante 3 segundos)
  for (int x=0; x<30; x++) {
    digitalWrite(pessoaVermelho, LOW);
    digitalWrite(pessoaVerde, LOW);
    digitalWrite(carroVermelho, LOW); 
    digitalWrite(carroAmarelo, LOW); 
    digitalWrite(carroVerde, LOW);   
    delay(100);
    digitalWrite(pessoaVermelho, HIGH);
    digitalWrite(pessoaVerde, LOW);
  	digitalWrite(carroVermelho, HIGH); 
  	digitalWrite(carroAmarelo, LOW); 
  	digitalWrite(carroVerde, LOW);    
    delay(100);
  }
  digitalWrite(pessoaVermelho, HIGH);  
  digitalWrite(pessoaVerde, LOW);
  digitalWrite(carroVermelho, HIGH);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVerde, LOW);
  delay(4250);   
  
  digitalWrite(carroVerde, HIGH);
  digitalWrite(pessoaVermelho, HIGH);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(pessoaVerde, LOW);
  
  mudaTempo = millis();
}

