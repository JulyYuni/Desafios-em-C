#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[50];
    char c;
    char CARRIAGE_RETURN = '\r';
    int i = 0;
    int cont = 0;

    char vogais[] = { 'a', 'e', 'i', 'o', 'u'};

    printf("\n\n\n\nInsira uma string: ");

    while ((c = getch()) != CARRIAGE_RETURN && i < 50) {
        string[i++] = c; 
        putchar(c);
    }

    string[i] = '\0';

    int len = strlen(string);

    for (i = 0; i < len; i++){
        for (int j = 0; j < 5; j++){
            //printf("string[%d]: %c, vogais[%d]: %c", i, string[i], j, vogais[j]);
            if (string[i] == vogais[j]){
                cont++;
                printf("\ncont: %d", cont);
            }
        }
    }

    printf("\nA string inserida possui %d vogais!\n\n\n\n\n", cont);

    return 0;
}

