#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[81];                                       // vetor para armazenar a frase, com tamanho mÃ¡ximo de 80 caracteres
    int i = 0;                                            // í­ndice para percorrer o vetor
    char c;                                               // caractere digitado pelo usuario
    char CARRIAGE_RETURN = '\r';                          // caractere especial "retorno de carro"

    printf("\n\n\n\nDigite uma frase: ");

    while ( (c = getch()) != CARRIAGE_RETURN && i < 80){  // enquanto não for pressionado enter ou o tamanho máximo for atingido
        frase[i++] = c;                                   // armazena o caractere digitado no vetor e incrementa o Ã­ndice
        putchar(c);                                       // mostra o caractere na tela
    }

    frase[i] = '\0';                                      // adiciona o caractere nulo no final da string

    printf("\n\nPalavras da frase:\n");

    char* palavra = strtok(frase, " ");                   // quebra a frase em palavras usando o espaço como delimitador

    while (palavra != NULL) {                             // enquanto houver palavras na frase
        printf("%s\n", palavra);                          // mostra a palavra na tela
        palavra = strtok(NULL, " ");                      // busca a próxima palavra
    }

    return 0;
}