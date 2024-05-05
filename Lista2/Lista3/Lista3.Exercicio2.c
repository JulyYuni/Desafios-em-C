#include <stdio.h>

int main(){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    // p == &i

    printf("p == &i; --> ponteiro p aponta para o endereco da variavel i, que possui 3 armazenado. Ou seja, o ponteiro *p = 3.\n\n\n");

    //*p - *q

    printf("*p - *q --> valor para o qual o ponteiro p aponta, menos o valor que o ponteiro q aponta, ou seja: %d-%d = %d\n\n\n", *p, *q, *p - *q);

    //**&p

    int a = **&p;

    printf("**&p --> ponteiro de um ponteiro armazenado no endereco da variavel p, o qual aponta para a variavel i, logo, o ponteiro que aponta para o valor amarzenado nele, tambem aponta para i, ou seja: %d\n\n\n", a);

    //3* - *p / (*q) + 7;

    float b = 3 * -*p / (*q) + 7;
    int c = 3 * -*p / (*q) + 7;

    printf("3 * -*p / (*q) + 7 --> A precedencia e ((3 * - valor que p aponta -%d-) -resultado da multiplicacao e arredondado para inteiro ja que os dois valores sendo multiplicados sao inteiros- / valor que q aponta -%d-)-arredonda novamente pelo mesmo motivo- + 7. \n"
           " - O resultado depende da operacao ser amarzenada em uma variavel ou nao.\n"
           " - Caso a operacao seja armazenada numa variavel do tipo float, ira resultar em %f.\n"
           " - Caso a operacao seja armazenada numa variavel do tipo inteiro ela resulta em: %d.\n"
           " - Porem caso a expressao seja diretamente printada em float resulta em: %f\n"
           " - E caso a expressao seja diretamente printada em int resulta em: %d\n\n\n\n\n",
        *p, *q, b, c, 3 * -*p / (*q) + 7, 3 * -*p / (*q) + 7);


    return 0;
}