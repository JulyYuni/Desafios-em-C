#include <stdio.h>

int main(){
    int n = 10;
    int initialArray[n];
    int finalArray[n];

    printf("\n\n\n\n");

    for (int i = 0; i < n; ++i) {
        printf("Insira o numero na posicao %d: ", i + 1);
        scanf("%d", &initialArray[i]);
    }

    for (int i = 0; i < n; ++i) {
        finalArray[n-i-1] = initialArray[i];
    }
    
    for (int i = 0; i < n; ++i) {
        if (i == 0){
            printf("\nO novo array e: [%d, ", finalArray[i]);
        }
        else if (i > 0 && i < n-1){
            printf("%d, ", finalArray[i]);
        }
        else{
            printf("%d] \n\n\n\n\n", finalArray[i]);
        }
    }

    return 0;
}