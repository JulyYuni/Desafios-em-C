#include <stdio.h>

int maiores(int n, int * vet, int x);

int main(){
    int n = 0;
    int x = 0;

    printf("\n\n\n\nQual o tamanho do vetor: ");
    scanf("%d", &n);

    int myArray[n];

    for (int i = 0; i < n; ++i) {
        printf("\nInsira o numero na posicao %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("\n\nInsira um numero para saber quantos numeros maiores do que esse exitem no vetor: ");
    scanf("%d", &x);

    maiores(n, myArray, x);

    return 0;
}

int maiores(int n, int* vet, int x){  
    int cont = 0;

    for (int i = 0; i < n; i++){
        if (vet[i] > x){
            cont++;
        }
    }

    printf("%d", cont);

    return cont;
}
