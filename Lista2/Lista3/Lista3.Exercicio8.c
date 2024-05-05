#include <conio.h>
#include <stdio.h>

void main()
{
    float vet[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");

    //rode 4 vezes
    for (i = 0; i <= 4; i++) {
        printf("\n\n i = %d", i);                     // contador i --> (i = 0, i = 1, i = 2, i = 3, i = 4)
        printf("\n vet[%d] = %.1f", i, vet[i]);       // vet[i] = float amarzenado na posicao i do vetor vet, com apenas 1 numero apos a virgula --> (vet[0] = 1.1, vet[1] = 2.2, vet[2] = 3.3, vet[3] = 4.4, vet[4] = 5.5)
        printf("\n *(f + %d) = %.1f", i, *(f + i));   // [endereço do primeiro valor de vet] + i, o qual aponta para o float amarzenado na posicao i do vetor f, com apenas 1 numero apos a virgula --> (*(f + 1) = 1.1, *(f + 2) = 2.2, *(f + 3) = 3.3, *(f + 4) = 4.4, *(f + 5) = 5.5)
        printf("\n &vet[%d] = %X", i, &vet[i]);       // endereço da posicao i do vetor vet = endereço --> &vet[i] = endereço da posicao i do vetor vet
        printf("\n (f + %d) = %X\n\n", i, f + i);     // [endereço do primeiro valor de vet] + i = endereço --> (f + i) = endereço da posicao i do vetor vet
    }
    
}