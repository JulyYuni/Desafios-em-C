#include <stdio.h>

#define R 5
#define S 10
#define X 5 // Tamanho de X igual a R

int main()
{
    int arrayR[R];
    int arrayS[S];
    int arrayX[X];
    int j = 0;
    int i = 0;
    int k = 0;
    int repeated = 0;
    int found = 0;

    // Pega os valores da lista R
    printf("\n\n\n\nInsira %d valores para o primeiro vetor(R): \n\n", R);
    for (i = 0; i < R; i++) {
        printf("Insira o numero na posicao %d: ", i + 1);
        scanf("%d", &arrayR[i]);
    }

    // Pega os valores da lista S
    printf("\n\nInsira %d valores para o segundo vetor(S):\n\n", S);
    for (i = 0; i < S; i++) {
        printf("Insira o numero na posicao %d: ", i + 1);
        scanf("%d", &arrayS[i]);
    }



    // Para cada valor em R
    for (i = 0; i < R; ++i) {
        // Veja cada valor em S
        for (j = 0; j < S; j++){

            // Se o valor de R for igual ao de S, found é verdadeiro
            if (arrayR[i] == arrayS[j]){
                found = 1;

                // Se found é verdadeiro mas o valor já está em X, repeated é verdadeiro
                if (arrayR[i] == arrayX[j]){
                    repeated = 1;
                }
                break;
            }
        }
        // Se found é verdadeiro mas não está em X ainda, adicione o valor em X
        if (found == 1 && repeated == 0){
            arrayX[k] = arrayR[i];
            k++;
            found = 0;
        }
        // Se valor em lista R já esta contido na lista X
        else{
            found = 0;
            repeated = 0;
        }
    }



    // Criando lista X com tamanho correto
    int newArrayX[k+1];
    for (i = 0; i < k; i++){
        newArrayX[i] = arrayX[i];
    }




    // Printando lista X 
    printf("\n\nO array com os valores comuns entre o Vetor R e o Vetor S e: [");
    for (int i = 0; i < k; ++i) {
        // Caso lista for de tamanho maior do de 1
        if (i != k-1){
            printf("%d, ", newArrayX[i]);
        }
        // Caso lista for de tamanho 1 ou estiver no último valor da lista de tamanho maior do que 1
        else{
            printf("%d", newArrayX[i]);
        }
    }
    printf("] \n\n\n\n\n");

    return 0;
}