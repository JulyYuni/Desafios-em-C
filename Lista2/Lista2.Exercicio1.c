#include <stdio.h>

int verifica_primo(int numero){
    int divisores = 0;
    for (int i = 1; i <= numero; i++){
        if (numero % i == 0){
            divisores++;
        }
    }

    if (divisores == 2){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    int numero;

    printf("\n\nDigite um numero, e veremos se ele e primo: ");
    scanf("%d", &numero);

    int primo = verifica_primo(numero);

    if (primo == 1){
        printf("O numero e primo!\n\n");
    }
    else{
        printf("O numero nao e primo!\n\n\n");
    }

    return 0;
}