
// Programa : Pisca pisca
// Autor : André Lucas
// Link: https://www.tinkercad.com/things/ipZSe2yC2HP-pisca-led

void setup()
{
 //Define a porta do led como saída
  pinMode(9, OUTPUT);
}

void loop()
{
  //Acende o led
  digitalWrite(9, HIGH);
  delay(1000); // Espera por 1000 milissegundos
  
  //Apaga o led
  digitalWrite(9, LOW);
  delay(1000); // Espera por 1000 milissegundos
}

