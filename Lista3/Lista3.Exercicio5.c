#include <stdio.h>

float max_vet(int n, float* vet);

int main()
{
    int n = 0;
    int = 0;

    printf("\n\n\n\nQual o tamanho do vetor: ");
    scanf("%d", &n);

    float myArray[n];

    for (int i = 0; i < n; ++i) {
        printf("\nInsira o numero na posicao %d: ", i + 1);
        scanf("%f", &myArray[i]);
    }

    major = max_vet(n, myArray);

    printf("\nO maior numero e: %.2f\n\n\n\n\n", major);

    return 0;
}

float max_vet(int n, float* vet)
{
    float major = vet[0];

    for (int i = 1; i < n; i++){
        if (vet[i] > major){
            major = vet[i];
        }
    }

    return major;
}