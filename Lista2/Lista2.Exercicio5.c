#include <stdio.h>

void result(int x, int y, int *sum, int *i)
{
    for (int j = x; *sum <= y; j++)
    {   (*i)++;
        *sum += j;
    }
}

int main()
{

    int x = 0;
    int y = 0;
    int sum = 0;
    int i = 0;

    printf("\n\n\n\nDigite um numero: ");
    scanf("%d", &x);

    do
    {
        printf("\nDigite um numero maior que o primeiro: ");
        scanf("%d", &y);
    } while (y < x);

    
    result(x, y, &sum, &i);

    printf("\nA quantidade de numeros inteiros que devemos somar em sequencia (a partir do X inclusive) para que a soma ultrapasse a Z o minimo possivel e: %d", i);
    printf("\nA soma foi: ");

    for (int j = 1; j <= i ; j++)
    {   
        if (j < i)
        {
            printf("%d+", x);
        }
        if (j == i)
        {
            printf("%d = %d.\n\n\n\n\n", x, sum);
        }
        x++;
    }
}