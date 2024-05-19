#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[20];
    char c;
    char CARRIAGE_RETURN = '\r';
    int i = 0;
    char caracter = 0;


    printf("\n\n\n\nInsira uma string: ");

    while ((c = getch()) != CARRIAGE_RETURN && i < 20) {
        string[i++] = c; 
        putchar(c);
    }

    string[i] = '\0';

    printf("\nInsira um caracter: ");
    scanf("%c", &caracter);

    int lenght = strlen(string);

    for (i = 0; i < lenght; i++){
        if (string[i] == caracter){
            for (int j = i; j < lenght; j++){
                string[j] = string[j+1];
            }
        }
    }

    printf("String sem o caracter: %s\n\n\n\n\n", string);

    return 0;
} 