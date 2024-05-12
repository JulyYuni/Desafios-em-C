#include <ctype.h>
#include <stdio.h>
#include <string.h>

void CamelCase(char *s);

int main(){
    char frase[20];
    
    printf("\n\n\n\nDigite uma frase: ");
    scanf("%[^\n]s", frase);

    CamelCase(frase);

    printf("Cadeia em Camel Case: %s\n", frase);

    return 0;
}

void CamelCase(char *s) {
    int lenght = strlen(s);
    int i = 0;

    s[0] = toupper(s[0]);

    for (i = 0; i < lenght; i++){
        if (s[i] == ' '){
            s[i + 1] = toupper(s[i + 1]);
            s[i] = toupper(s[i + 1]);
            for (int j = i; j < lenght; j++){
                s[j+1] = s[j+2];
            }
        }
    }
}   