#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[50];
    char c;
    char CARRIAGE_RETURN = '\r';
    int i = 0;
    int j = 0;
    int k = 0;

    char alfabeto[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    printf("\n\n\n\nInsira uma string: ");

    while ((c = getch()) != CARRIAGE_RETURN && i < 50) {
        string[i++] = c; 
        putchar(c);
    }

    string[i] = '\0';

    int lenght = strlen(string);

    int estatistica[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for (i = 0; i <= lenght; i++) {
        for (j = i + 1; j <= lenght; j++){
            for (k = 0; k < 26; k++){
                
                if (string[i] == alfabeto[k]){
                    estatistica[k]++;
                    string[i] = '-';
                }
           }
        }
    }

    for (i = 0; i < 26; i++) {
        if (estatistica[i] != 0) {
            printf("\n\n'%c'= %d", alfabeto[i], estatistica[i]);
        }
    }

    return 0;
} 
