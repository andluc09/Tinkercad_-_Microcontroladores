
// Projeto Contador 00 a 99 | Crescente – Decrescente 
// Autor: André
// Data: 29-10-2020
// Link: https://www.tinkercad.com/things/keeMCkeJHvJ-contador-00-a-99-projeto-2

void Crescente();
void Decrescente();

int cont = 0; //contador de etapas
int i=0, max=0;

void setup() {

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
  
  if (i==0){
    Crescente();
  }
  
   Serial.println(i);
   Serial.println(cont);
   
  if((i==0 && cont==0) || (i==1 && cont>=0)){
  	Decrescente();
  }
  if(i==1 && max==10){
  	i=0;
    cont=0;
    max=0;
    return Crescente();
  }
  cont;
}
  
  	void Crescente() {
    
      i=0;
      
digitalWrite(8,LOW); //nº zero nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
	delay(500);
  
digitalWrite(8,LOW); //nº um nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
    delay(500);
  
digitalWrite(8,LOW); //nº dois nas unidades
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
	delay(500);
  
digitalWrite(8,LOW); //nº três nas unidades
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
	delay(500);
  
digitalWrite(8,LOW); //nº quatro nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
	delay(500);
  
digitalWrite(8,LOW); //nº cinco nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
	delay(500);
  
digitalWrite(8,LOW); //nº seis nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
	delay(500);
  
digitalWrite(8,LOW); //nº sete nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
	delay(500);
  
digitalWrite(8,HIGH); //nº oito nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
	delay(500);
  
digitalWrite(8,HIGH); //nº nove nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
	delay(500);
  
  cont++;
      
if(cont == 1){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
if(cont == 2){
  digitalWrite(4,LOW); //nº dois nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
if(cont == 3){
  digitalWrite(4,LOW); //nº três nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
if(cont == 4){
  digitalWrite(4,LOW); //nº quatro nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
if(cont == 5){
  digitalWrite(4,LOW); //nº cinco nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
if(cont == 6){
  digitalWrite(4,LOW); //nº seis nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
if(cont == 7){
  digitalWrite(4,LOW); //nº sete nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
if(cont == 8){
  digitalWrite(4,HIGH); //nº oito nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
if(cont == 9){
  digitalWrite(4,HIGH); //nº nove nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
if(cont == 10){        //Condição necessária para zerar (00) a contagem após o 99 e reiniciá-la.
  digitalWrite(4,LOW); //nº zero nas unidades
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº zero nas dezenas
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(200);
  cont = 0;
 }
}
	
  void Decrescente() {

    i = 1;
    
if(cont == 0){
  digitalWrite(4,HIGH); //nº nove nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
if(cont == 1){
  digitalWrite(4,HIGH); //nº oito nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
if(cont == 2){
  digitalWrite(4,LOW); //nº sete nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
if(cont == 3){
  digitalWrite(4,LOW); //nº seis nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
if(cont == 4){
  digitalWrite(4,LOW); //nº cinco nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
if(cont == 5){
  digitalWrite(4,LOW); //nº quatro nas dezenas
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
if(cont == 6){
  digitalWrite(4,LOW); //nº três nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
if(cont == 7){
  digitalWrite(4,LOW); //nº dois nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
if(cont == 8){
  digitalWrite(4,LOW); //nº um nas dezenas
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}  
if(cont == 9){        //Condição necessária para zerar (00) a contagem após o 99 e reiniciá-la.
  digitalWrite(4,LOW); //nº zero nas unidades
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); //nº zero nas dezenas
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(200);
  cont = 0;
} 
    max = max + 1;
    Serial.println(max);
    
digitalWrite(8,HIGH); //nº nove nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
	delay(500);

digitalWrite(8,HIGH); //nº oito nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
	delay(500);

digitalWrite(8,LOW); //nº sete nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
	delay(500);

digitalWrite(8,LOW); //nº seis nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
	delay(500);

digitalWrite(8,LOW); //nº cinco nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
	delay(500);

digitalWrite(8,LOW); //nº quatro nas unidades
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
	delay(500);

digitalWrite(8,LOW); //nº três nas unidades
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
	delay(500);

digitalWrite(8,LOW); //nº dois nas unidades
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
	delay(500);

digitalWrite(8,LOW); //nº um nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
	delay(500);

digitalWrite(8,LOW); //nº zero nas unidades
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
	delay(500);
  
  cont++;
}

