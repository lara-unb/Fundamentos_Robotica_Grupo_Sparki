/*******************************************
Evitar borda
 
Sparki tem uma variedade de sensores infravermelhos. 
Ele pode usá-los para detectar 
se houver alguma coisa embaixo dela.
 
Este programa detecta se Sparki está prestes a
cair da borda. Se for, gira o
outro caminho antes de continuar.
********************************************/
#include <Sparki.h> // Biblioteca sparki

int backwardDistance = 5;
int angle = 20;

void setup()
{       
}

void loop() {
  
  int edgeLeft   = sparki.edgeLeft();   // Mede o sensor IR da borda esquerda
  int edgeRight  = sparki.edgeRight();  // Mede o sensor IR da borda direita
  
  int threshold = 200; // Se abaixo de ste valor, nenhuma superfíce abaixo
  
  if (edgeLeft < threshold) // Se não houver superfíce abaixo do sensor 
  {
    sparki.RGB(RGB_RED);
    sparki.moveBackward(backwardDistance);
    sparki.moveRight(angle); // Vire à direita
  }

  if (edgeRight < threshold) // Se não houver superfíce abaixo do sensor direito
  {
    sparki.RGB(RGB_BLUE);
    sparki.moveBackward(backwardDistance);
    sparki.moveLeft(angle); // Vire a esquerda
  }

  sparki.RGB(RGB_PINK);
  sparki.moveForward(); // Siga em frente
  delay(100); // espere 0.1 segundos
}
