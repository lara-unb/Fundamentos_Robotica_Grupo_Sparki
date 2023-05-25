#include <Sparki.h> // Biblioteca sparki

void setup()
{
    sparki.servo(SERVO_CENTER); // Centralizar
}

void loop()
{
    sparki.RGB(RGB_GREEN); // Ligar luz verde
    sparki.moveForward(); // Mover sparki para frente 
    int cm = sparki.ping(); // Mede a distância com os olhos do Sparki

    if(cm != -1) // Certifique-se de que não esta muito perto ou muito longe
    { 
        if(cm < 10) //Se a distância medida for menor que 10 centímetros
        {
            sparki.RGB(RGB_RED); // Acende a luz vermelha 
            sparki.beep(); // beep!
            sparki.moveBackward(10); // Recua 10 centímetros
            sparki.moveRight(30); // girar para a direita 30 graus
            delay(1000);
        }
    }
    delay(100); //espera 0,1 segundos  (100 millisegundos)
}
