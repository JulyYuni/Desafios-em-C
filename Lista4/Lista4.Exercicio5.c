#include <stdio.h>

void calcula_corrida(float dist, float* b1, float* b2);

int main(){

    float distancia = 57.6, bandeira1= 0, bandeira2 = 0;

    calcula_corrida(distancia, &bandeira1, &bandeira2);

    printf("\n\n\n\nPreco da corrida na Bandeira 1: %.2f\n", bandeira1);
    printf("Preco da corrida na Bandeira 2: %.2f\n\n\n\n\n", bandeira2);

    return 0;


}

void calcula_corrida(float dist, float* b1, float* b2){
    float bandeirada = 4.95, valor_km_b1 = 2.5, valor_km_b2 = 3.0;

    *b1 = bandeirada + (valor_km_b1 * dist);
    *b2 = bandeirada + (valor_km_b2 * dist);

}