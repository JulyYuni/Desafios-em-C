#include <stdio.h>

int divs(int n, int* max, int* min);

int main()
{
    int n;
    int max;
    int min;
    int primo;

    printf("\n\n\n\nDigite um numero: ");
    scanf("%d", &n);

    primo = divs(n, &max, &min);

    if (primo == 1){
        printf("\nMaior divisor de %d e: %d, e o menor e: %d\n\n\n\n\n", n, max, min);
    }
    else{
        printf("\n%d e primo.\n\n\n\n\n", n);
    }
}

int divs(int n, int* max, int* min){

    int resto = 0;
    int cont = 0;

    for (int i = 2; i < n; i++) {
        resto = n % i;

        if (resto == 0) {
            cont++;
            if (cont == 1){
                *min = i;
            }
            *max = i;

        }
    }

    if (cont == 0) {
        return 0;
    }

    else {
        return 1;
    }
}