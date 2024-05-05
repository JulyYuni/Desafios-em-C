#include <stdio.h>

float media(int n, float *v);

int main(){
    int n = 0;
    float result = 0;

    printf("\n\n\n\nQual o tamanho do vetor: ");
    scanf("%d", &n);
    printf("\n");

    float myArray[n];

    for (int i = 0; i < n; ++i) {
        printf("Insira o numero na posicao %d: ", i + 1);
        scanf("%f", &myArray[i]);
    }

    result = media(n, myArray);

    printf("\nA media e: %.2f\n\n\n\n\n", result);

    return 0;
}

float media(int n, float *v){
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += v[i];
    }

    return sum/n;
}