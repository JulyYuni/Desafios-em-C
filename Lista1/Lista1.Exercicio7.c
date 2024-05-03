#include <stdio.h>
#include <math.h>

float round_up(float num){
    return ceil(num);
}

float round_down(float num){
    return floor(num);
}

int main(){

    float num;
    float up;
    float down;

    printf("\n\nDigite um numero float: ");
    scanf("%f", &num);

    up = round_up(num);
    down = round_down(num);

    printf("\nO numero arredondado para cima e: %.0f", up);
    printf("\nO numero arredondado para baixo e: %.0f\n\n\n", down);

}