#include <conio.h>
#include <stdio.h>
#include <string.h>

int conta_caracter(char *string, char caracter){

    int i = 0;
    int lenght = strlen(string);
    int contador  = 0;
    for (i = 0; i < lenght; i++){
        if (string[i] == caracter){
            contador++;
        }
    }
    
    return contador;

}

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

    int resultado = conta_caracter(&string[0], caracter); 

    printf("\nA string possui %d caracteres '%c'!\n\n\n\n\n", resultado, caracter);

    return 0;
} 