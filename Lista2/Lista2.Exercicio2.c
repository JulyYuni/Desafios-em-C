#include <stdio.h>

int soma_primos(int n){
    int soma = 0;
    for (int i = 0; i <= n; i++){
        if (i % 2 != 0){
            soma += i;
        }
    }

    return soma;
}

int main(){
    int n;
    printf("\n\nDigite um numero e iremos ver a soma dos numeros impares menores ou iguais a ele: ");
    scanf("%d", &n);

    int resultado = soma_primos(n);

    printf("O resultado da soma dos numeros impares menores ou iguais a %d e: %d\n\n\n", n, resultado);
    return 1;
}
