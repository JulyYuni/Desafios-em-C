#include <stdio.h>                                              // Adicionei a inclusao da biblioteca stdio.h
#include <string.h>                                             // Adicionei a inclusao da biblioteca stdio.h


int main(void)                                                  // Adicionei o int como retorno da funcao main
{
    char frase[80]= "o rato roeu a roupa do rei de roma";       // Cria a string "o rato roeu a roupa do rei de roma" com o nome frase
    char* p;                                                    // Cria uma p variavel do tipo ponteiro para char
    p = frase;                                                  // A variavel p armazena o endereco de memoria do primeiro valor da string frase. Logo, fazendo o ponteiro p apontar para o primeiro valor da string frase
    p[2]='m';                                                   // O terceiro caracter da string que p aponta (frase) se torna 'm'. Ou seja, o terceiro caracter da string frase se torna 'm'
    p[6]='\0';                                                  // O quinto caracter da string que p aponta (frase) se forna um caracter nulo ('\0'). Ou seja, o quinto caracter da string frase se torna o caracter nulo ('\0')
    printf("%s\n", frase);                                      // L12: Imprime a string frase. Onde o terceiro caracter, de 'r' foi para 'm', e quinto como caracter nulo('\0').
                                                                // L12 CONTINUACAO: Portanto, ira printar a string ate o quinto elemento, pois o printf imprime a string ate encontrar um caracter nulo ('\0'). Imprimindo: --> o mato
    p = p + 3;                                                  // L14: Soma ao valor armazenado em p (o endereco do primeiro valor de frase) 3 * sizeof(o tipo que p aponta, que no caso e char, ou seja: 3*1).
                                                                // L14 CONTINUACAO: Assim, fazendo p armazenar nao mais o endereco do primeiro valor da lista, mas sim para o quarto
    printf("%s\n",p);                                           // Imprime a string p. Porem, p agora inicia em frase[3], portanto sera printado --> ato
    printf("%d\n",strlen(frase));                               // L15: Imprime o tamanho da string frase. Como ao fazer p[6]='\0', se altera o valor para qual p aponta na posicao [6], e p aponta para frase, frase[6] se transforma em '\0' também.
                                                                // L15 CONTINUACAO1: Como o strlen conta cada caracter da frase ate haver um caracter nulo, o strlen contará apenas até o sexto valor, pois o proximo, o setimo (frase[6]), é '\0'
                                                                // L15 CONTINUACAO2: A saida do printf portanto sera --> 6
    return 0;                                                   // Adicionei o return 0 da funcao main
}

