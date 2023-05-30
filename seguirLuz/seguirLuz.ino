#include <Sparki.h> //Biblioteca Sparki
void setup() 
{
}

void loop() {
  int left   = sparki.lightLeft();   // Mede o  sensor de luz esquerdo
  int center = sparki.lightCenter(); // Mede o sensor de luz central
  int right  = sparki.lightRight();  // Mede o sensonr de luz direita

  if ( (center > left) && (center > right) ){  // se a luz central é mais forte 
    sparki.moveForward(); // move sparki para frente
  }

  if ( (left > center) && (left > right) ){    // se a luz da esquerda é mais forte 
    sparki.moveLeft(); // Vire a esquerda
  }

  if ( (right > center) && (right > left) ){   // se a luz da direita é mais forte 
    sparki.moveRight(); // Vire a direita
  }

  delay(100); // espera 0,1 segundos (100 milisegundos)
}
