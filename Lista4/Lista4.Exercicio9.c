#include <stdio.h>

void recebeLista(int array[], int x)
{
    printf("Insira %d valores inteiros:\n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &array[i]);
    }
    printf("\n");
}

void printaLista(int array[], int x)
{
    for (int i = 0; i < x; i++) {
        printf("O numero na posicao %d da lista e: %d ", i, array[i]);
    }
    printf("\n\n\n");
}

int procuraValor(int array[], int x, int valor)
{
    for (int i = 0; i < x; i++) {
        if (array[i] == valor) {
            return i;
        }
    }
    printf("\n");
    return -1;
}

void substitui(int array[], int x)
{
    int cont[x];
    cont[0] = array[0];
    for (int i = 1; i < x; i++) {
        cont[i] = cont[i - 1] + array[i];
    }
    for (int i = 0; i < x; i++) {
        array[i] = cont[i];
    }

    printf("\n");
}

int main()
{
    int lista[7];
    recebeLista(lista, 7);

    printaLista(lista, 7);

    int valor = 0;
    
    printf("Insira o valor para busca: ");
    scanf("%d", &valor);

    int posicao = procuraValor(lista, 7, valor);

    if (posicao != -1) {
        printf("\nO valor %d esta na posicao: %d\n", valor, posicao);
    } else {
        printf("\nO vetor nao possui o valor %d\n", valor);
    }

    replaceValuesFrom(lista, 7);

    printf("O array apos a substiuicao e: \n");
    printValuesFrom(lista, 7);

    return 0;
}
