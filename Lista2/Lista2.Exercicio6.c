#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int raffled_num = 0;
    int chosen_num = 0;
    int cont = 1;

    srand(time(0));
    raffled_num = (rand() % 100)+1;
    
    printf("\n\n\n\nDigite um numero: ");
    scanf("%d", &chosen_num);


    while (chosen_num != raffled_num){
        if (chosen_num > raffled_num){
            printf("\nO numero que voce chutou vem depois do numero sorteado! ");
            printf("\nTente novamente, digite um numero: ");
            scanf("%d", &chosen_num);
        }
        else if (chosen_num < raffled_num){
            printf("\nO numero que voce chutou vem antes do numero sorteado! ");
            printf("\nTente novamente, digite um numero: ");
            scanf("%d", &chosen_num);
        }

        cont++;    
            
    }

    printf("\nVoce acertou o numero sorteado!");
    printf("\nO numero sorteado foi: %d", raffled_num);
    printf("\nVoce tentou: %d vezes.\n\n\n\n\n", cont);

    return 0;


}