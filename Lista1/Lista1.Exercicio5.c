#include <stdio.h>

void intc(){
    int a = 3;
    int b = a / 2;
    int c = b + 3.1;

    printf("\n\nCaso em que c e um inteiro: c = %d\n\n", c);
}

void floatc(){
    int a = 3;
    int b = a / 2;
    float c = b + 3.1;

    printf("\n\nCaso em que c e um float de apenas 1 valor apos a virgula: c = %.1f \n\n", c);
}

void allfloat(){
    float a = 3;
    float b = a / 2;
    float c = b + 3.1;

    printf("\n\nCaso em que a, b, c sao floats e c possui apenas 1 valor apos a virgula: c = %.1f \n\n\n", c);
}

int main(){
    intc();
    floatc();
    allfloat();

    return 0;
}