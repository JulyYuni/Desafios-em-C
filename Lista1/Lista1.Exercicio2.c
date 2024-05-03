#include <stdio.h>

int main(){

    int num1, num2, num3;
    int maior, menor, media;
    int candidato;
    int i;

    printf("Digite 3 numeros. \n\nPrimeiro: ");
    scanf("%d", &num1);

    printf("Segundo: ");
    scanf("%d", &num2);

    printf("Terceiro: ");
    scanf("%d", &num3);

    maior = num1;
    menor = num1;
    candidato = num2;

    for (i = 0; i < 2; i++){
        if (candidato > maior){
            maior = candidato;
        }
        if (candidato < menor){
            menor = candidato;
        }
        candidato = num3;
    }

    media = (num1 + num2 + num3)/3;


    printf("\nO maior numero e:    %d \nO menor numero e:    %d  \nA media entre os 3 numeros e:    %d", maior, menor, media);
    printf("\nOs numeros pares sao:  ");

    if (num1 % 2 == 0){
        printf("%d ", num1);
    }
    if (num2 % 2 == 0){
        printf("%d ", num2);
    }
    if (num3 % 2 == 0){
        printf("%d ", num3);
    }


}
