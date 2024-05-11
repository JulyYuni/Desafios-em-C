#include <stdio.h>

int testa_PA(int n, int* v);

int main()
{   
    int n = 0;
    
    printf("\n\n\n\nQual o tamanho do vetor: ");
    scanf("%d", &n);

    int lista[n];

    for (int i = 0; i < n; ++i) {
        printf("\nInsira o numero na posicao %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    int result = testa_PA(n, lista);

    printf("\n\n%d\n\n\n\n\n", result);

    return 0;
}

int testa_PA(int n, int* v)
{
    int k = v[1] - v[0];

    for (int i = 2; i < n; i++) {
        if (v[i] != v[0] + k * i) {
            return 0;
        }
    }

    return k;
}
