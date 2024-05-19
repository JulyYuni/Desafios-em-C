#define L 5
#include <stdio.h>

int main()
{
    int i = 0;
    int array1[L];
    int array2[L];
    char operacoes[L];
    float resultados[L];

    printf("\n\n\n\nInsira %d numeros para a primeira lista: \n\n", L);
    for (i = 0; i < L; i++) {
        printf("Insira o numero na posicao %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\n\nInsira %d numeros para a primeira lista:\n\n", L);
    for (i = 0; i < L; i++) {
        printf("Insira o numero na posicao %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    printf("\n\nInsira %d operacoes (+, -, * ou /) a serem realizadas:\n\n", L);
    for (i = 0; i < L; i++) {
        printf("Insira a operacao na posicao %d: ", i + 1);
        scanf(" %c", &operacoes[i]);
    }

    for (i = 0; i < L; i++){
        if (operacoes[i] == '+'){
            resultados[i] = array1[i] + array2[i];
        }
        if (operacoes[i] == '-'){
            resultados[i] = array1[i] - array2[i];
        }
        if (operacoes[i] == '*'){
            resultados[i] = array1[i] * array2[i];
        }
        if (operacoes[i] == '/'){
            resultados[i] = (float)array1[i] / array2[i];
        }
    }

    printf("\n\nResultado:\n");
    for (i = 0; i < L; i++) {
        if (operacoes[i] == '/'){
            printf("\n%d %c %d = %.2f ", array1[i], operacoes[i], array2[i], resultados[i]);
        }
        else if (operacoes[i] == '+' || operacoes[i] == '-' || operacoes[i] == '*'){
            printf("\n%d %c %d = %.0f ", array1[i], operacoes[i], array2[i], resultados[i]);
        }
        else{
            printf("\nOperacao invalida na posicao %d.\n", i + 1);
        }
    }

    printf("\n");

    return 0;


}