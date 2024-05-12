#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int lenght = 0;
    
    do {
        lenght = rand() % 30;
    } while (lenght % 2 != 0);

    int vet[lenght];

    
    int number = 0;
    int *ponteiroInicial, *ponteiroFinal;

    for (int i = 0; i < lenght; i++) {
        number = rand() % 99;
        vet[i] = number;
    }

    printf("O array gerado aleatoriamente foi: \n\n");
    printf("[");
    for (int i = 0; i < lenght; ++i) {
        if (i != lenght - 1){
            printf("%d, ", vet[i]);
        }
        // Caso lista for de tamanho 1 ou estiver no último valor da lista de tamanho maior do que 1
        else{
            printf("%d", vet[i]);
        }
    }
    printf("]");

    ponteiroInicial = vet;
    ponteiroFinal = &vet[lenght - 1];

    while (ponteiroInicial < ponteiroFinal) {
        printf("\n\n\nPonteiro inicial: %d", *ponteiroInicial);
        printf("\nPonteiro final: %d", *ponteiroFinal);
        ponteiroInicial++;
        ponteiroFinal--;
    }

    return 0;
}
