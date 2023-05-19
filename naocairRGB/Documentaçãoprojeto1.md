# Projeto 1 - Evitar borda, Não cair RGB <h1>

Esse código é uma demonstração de como o Sparki pode evitar quedas ao detectar as bordas de uma superfície. Ele utiliza dois sensores infravermelhos para medir a proximidade das bordas esquerda e direita.

O código consiste em algumas ações realizadas pelo Sparki:

1. Medir a proximidade da borda esquerda usando o sensor IR esquerdo.
2. Se a proximidade for menor que um determinado limite (threshold = 200), indicando que não há superfície abaixo do sensor, o Sparki acende o LED RGB na cor vermelha, recua uma distância pré-definida e vira à direita em um ângulo também pré-definido.
3. Em seguida, o Sparki mede a proximidade da borda direita usando o sensor IR direito.
4. Se a proximidade for menor que o limite estabelecido, indicando a ausência de superfície abaixo do sensor direito, o Sparki acende o LED RGB na cor azul, recua a mesma distância e vira à esquerda no mesmo ângulo.
5. Se não houver detecção de bordas em ambos os sensores, o LED RGB acende na cor rosa e o Sparki segue em frente.
6. O código inclui um pequeno atraso de 0.1 segundos entre cada iteração do loop.


Link do vídeo yotube: 
[vídeo do robô executando](https://youtu.be/We9_DYo-2kw)

 Fluxograma 
 
 ![projeto1](img/fluxograma_projeto_1.png)
