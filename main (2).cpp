#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL,"");
     float velocidade, distancia, tempo;
     
     printf("digite a velocidade do carro");
     scanf("%f", &velocidade);
     
     printf("digite a distancia a aser percorrida em KM; ");
     
     
     tempo = distancia / velocidade;
     
     printf("o tempo necessario para percorreer %.2f km %2f horas/n", distancia, tempo);
     
     return 0;
     
}

