#include <stdio.h>

int main()
{
    int* pti;
    int veti[] = { 10, 7, 2, 6, 3 };
    pti = veti;

    // a. *pti é igual a 10 (Verdadeiro)
    // Não é falsa pois veti é um vetor, e um vetor é um ponteiro que aponta para o endereco do primeiro valor do vetor.
    // Como pti é igual veti, e veti armazena
    // o endereco do seu primeiro numero, o qual é 10. Dessa forma, *pti = 10.

    //b. *(pti+2) é igual a 2 (Verdadeiro)
    // Não é falsa pois *(pti +2) = veti[2] = 2

    //c. pti[4] é igual a 3 (Verdadeiro)
    // Não é falsa pois pti[4] = veti[4] = 3

    //d. pti[1] é igual a 10 (Falso)
    // É falsa pois pti[1] = veti[1] = 7

    //e. *(veti+3) é igual a 6 (Falso) 
    // Não é falsa pois *(veti +3) = veti[3] = 6
}