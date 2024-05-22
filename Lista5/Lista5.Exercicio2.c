#include <stdio.h>                             // Incluindo a biblioteca stdio.h
#include <string.h>                            // Incluindo a biblioteca <string.h>

main(void)                                     // Criando a função main, a qual executa o codigo
{
    char texto[]= "foi muito facil";           // Cria a string "foi muito facil" com o nome texto
    int i;                                     // Cria variavel i para servir como contador

    for (i = 0; texto[i]!='\0'; i++)           // Seja i = 0, para cada caracter na string texto, enquanto o caracter nao for o caracter nulo (ou seja, enquanto estiver sendo lido caracteres nao nulos na string texto), some 1 a i
    {
        if (texto[i] == ' ') break;            // Se o caracter na posicao i for um espaço, termine a leitura da string
    }
    
    i++;                                       // Some 1 ao contador i, para a proxima leitura da string comecar depois do primeiro espaco

    for ( ; texto[i]!='\0'; i++)               // Para cada caracter na string texto, enquanto o caracter nao for o caracter nulo (ou seja, enquanto estiver sendo lido caracteres nao nulos na string texto), some 1 a i
    {
        printf("%c", texto[i]);                // Imprima o caracter de texto na posicao i. 
                                               // Ou seja, sera impresso a string texto completa, menos a parte que estiver antes de um primeiro espaco (' ')
                                               // Ja que o contador i nesse for, que imprime a string texto, ja inicia na posicao da string depois do espaco
    }
}