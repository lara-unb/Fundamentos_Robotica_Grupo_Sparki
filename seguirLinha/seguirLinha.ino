/*******************************************
 Sparki Seguir Linha
 
 Threshold é o valor que ajuda você
  determinar o que é preto e branco. Sparki's
  sensores de refletância infravermelha indicam branco
  tão perto de 900, e preto em torno de 200.
 Este exemplo usa um limite de 450
********************************************/

#include <Sparki.h> // Biblioteca Sparki
void setup() 
{
}

void loop() {
  int threshold = 450;
  
  int lineLeft   = sparki.lineLeft();   //  Mede o  sensor IR esquerdo
  int lineCenter = sparki.lineCenter(); // Mede o  sensor IR central
  int lineRight  = sparki.lineRight();  // Mede o  sensor IR direito

  if ( lineLeft < threshold ) // Se a linha estiver abaixo do sensor da linha esquerda 
  {  
    sparki.moveLeft(); // vire à esquerda
  }

  if ( lineRight < threshold ) // Se a linha estiver abaixo do sensor da linha direita
  {  
    sparki.moveRight(); // vire a direita 
  }

  // Se o sensor da linha  central é o único lendo uma linha 
  if ( (lineCenter < threshold) && (lineLeft > threshold) && (lineRight > threshold) )
  {
    sparki.moveForward(); // Siga em frente 
  }  

  sparki.clearLCD(); // Limpa a tela
  
  sparki.print("Line Left: "); // mostra o sensor da linha esquerda
  sparki.println(lineLeft);
  
  sparki.print("Line Center: "); // mostra o sensor da linha central
  sparki.println(lineCenter);
  
  sparki.print("Line Right: "); // mostra o sensor da linha direita
  sparki.println(lineRight);
  
  sparki.updateLCD(); // exibe todas as informações na tela 

  delay(100); //  espera 0,1 segundos (100 milisegundos)
}
