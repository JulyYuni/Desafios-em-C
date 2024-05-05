#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(){

    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int raffled_letter_index;
    int chosen_letter_index;
    char raffled_letter;
    char chosen_letter;

    srand(time(0));
    raffled_letter_index = rand() % 26;
    raffled_letter = alphabet[raffled_letter_index];

    printf("\n\n\n\nDigite uma letra: ");
    scanf("%c", &chosen_letter);

    printf("\nA letra sorteada foi: %c", raffled_letter);


    for (int i = 0; i <= 26; i++){
        if (alphabet[i] == chosen_letter){
            chosen_letter_index =  i;
        }
    }
    
    if (chosen_letter == raffled_letter){
        printf("\nVoce acertou a letra sorteada!\n\n\n\n\n");
    }
    else if (chosen_letter_index > raffled_letter_index){
        printf("\nA letra que voce chutou vem depois da letra sorteada!  \n\n\n\n\n");
    }
    else if (chosen_letter_index < raffled_letter_index){
        printf("\nA letra que voce chutou vem antes da letra sorteada!  \n\n\n\n\n");
    }

    return 0;
}