#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float delta;
    float x1, x2;

    printf("Insira os 3 coeficientes de uma equacao do segundo grau, no seguinte formato: a-b-c\n\n");
    scanf("%f-%f-%f", &a, &b, &c);

    delta = (b*b) - 4 * a * c;

    x1 = (-(b) + sqrt(delta)) / (2 * a);
    x2 = (-(b) - sqrt(delta)) / (2 * a);

    if (delta < 0){
        printf("A funcao não possui raízes reais.");
    }
    else if(delta == 0){
        printf("A funcao possui apenas uma raiz: %.5f", x1);
    }
    else{
        printf("A funcao possui duas raizes: x1 = %.5f, x2 = %.5f", x1, x2);
    }
}