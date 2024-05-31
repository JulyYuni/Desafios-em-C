#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra1[80];
    char palavra2[80];
    int iguais = 1;
    int cont = 0;
    int j = 0;

    printf("\n\n\n\nDigite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    int palavra1_len = strlen(palavra1);
    int palavra2_len = strlen(palavra2);

    if (palavra1_len == palavra2_len){
        for (int i = 0; i < palavra1_len; i++){
            if (palavra1[i] != palavra2[i]){
                iguais = 0;
            }
        }
    }
    else{
        iguais = 0;
    }


    for (int i = 0; i < palavra1_len; i++){
        for (j = 0; j < palavra2_len; j++){
            printf("\n\ncont = %d\n palavra1[%d] = %c\n palavra2[%d] = %c", cont, i, palavra1[i], j, palavra2[j]);
            if (palavra1[i] == palavra2[j]){
                while (palavra1[i] == palavra2[j]){
                    printf("\n\nDENTRO\n palavra1[%d] = %c\n palavra2[%d] = %c", i, palavra1[i], j, palavra2[j]);
                    j++;
                }
            j--;
            }
        }
    }
    

    if (iguais == 0){
        printf("\n\nAs palavras sao diferentes.\n");
    }
    else{
        printf("\n\nAs palavras sao iguais.\n");
    }
    
    if (j == palavra2_len){
        printf("\nA segunda palavra e uma substring da primeira.\n\n\n\n\n");
    }
    else{
        printf("\nA segunda palavra nao e uma substring da primeira.\n\n\n\n\n\n");
    }

    return 0;

}