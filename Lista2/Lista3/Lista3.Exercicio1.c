#include <stdio.h>

void calc_circulo(float r, float * circunferencia, float * area){
    float pi = 3.14159265;
    *area = pi * r * r;
    *circunferencia = 2 * pi * r;

}

int main(){

    float r = 0;
    float circunferencia = 0;
    float area = 0;

    printf("\n\n\n\nDigite o raio do circulo: ");
    scanf("%f", &r);

    calc_circulo(r, &circunferencia, &area);

    printf("A area do circulo de raio %.0f e: %f", r, area);
    printf("\nA circunferencia do circulo de raio %.0f e: %f\n\n\n\n", r, circunferencia);

    return 0;
}