#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    int i = 0;

    char primeiraLetra, ultimaLetra;
    int totalLetras = 0;

    printf("Insira uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0'; i++){
        totalLetras++;
    }

    primeiraLetra = palavra[0];
    ultimaLetra = palavra[totalLetras-1];

    printf("A primeira letra da plavra e: %c", primeiraLetra);
    printf("\nA ultima letra da plavra e: %c", ultimaLetra);
    printf("\nA quantidade de letra na plavra e: %d", totalLetras);

}