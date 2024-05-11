#include <stdio.h>

int main()
{
    int numbers[5];
    int* p;
    int n;

    //ponteiro p aponta para o endereco do primeiro valor do array numbers
    p = numbers;
/
    //valor armazenado no endereco para o qual o ponteiro p aponta, se torna 10. Ou seja, o primeiro valor da lista number é 10
    *p = 10;

    //a quantidade de bytes do tipo que o array numbers armazena (int - 4 bytes) é somado ao endereco para qual o ponteiro p aponta. Ou seja, agora o ponteiro p aponta para o endereço do segundo valor da lista
    p++;

    //valor armazenado no endereco para o qual o ponteiro p aponta, se torna 20. Ou seja, o segundo valor da lista number é 20
    *p = 20;

    //ponteiro p aponta para o endereco do terceiro valor do array numbers
    p = &numbers[2];

    //valor armazenado no endereco para o qual o ponteiro p aponta, se torna 30. Ou seja, o terceiro valor da lista number é 30
    *p = 30;

    // ponteiro p aponta para o endereco do primeiro valor do array numbers, o qual foi somado 3 * 4 (4 por causa dos bytes do tipo inteiro) . Ou seja, agora o ponteiro p aponta para o endereço do quarto valor da lista
    p = numbers + 3;

    //valor armazenado no endereco para o qual o ponteiro p aponta, se torna 40. Ou seja, o quarto valor da lista number é 40
    *p = 40;

    //ponteiro p aponta para o endereco do primeiro valor do array numbers
    p = numbers;

    //endereco para o qual p aponta + 4*4 (4 por causa dos bytes do tipo inteiro), se torna 50. Como na ultima linha p voltou a apontar para o endereco da primeira posicao da lista, entao, a quinta posicao do array numbers (numbers[4]) se torna 50
    *(p + 4) = 50;

    //todos os valores estao sendo printados e como nao há nenhum /n ou separador no scanf, sera printado tudo junto da seguinte forma --> 1020304050
    for (n = 0; n < 5; n++)
        printf("%d", numbers[n]);
}