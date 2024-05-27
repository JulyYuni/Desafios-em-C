#include <ctype.h>
#include <stdio.h>
#include <string.h>

void abrevia(char *s, char *abreviatura);

int main(){
    char nome[60];
    char abreviatura[60];

    for (int i = 0; i < 60; ++i) {
        abreviatura[i] = '\0';
    }
    
    printf("\n\n\n\nDigite um nome: ");
    scanf("%[^\n]s", nome);
        
    abrevia(nome, abreviatura);

    printf("O nome abreviado e: %s\n", abreviatura);

    return 0;
}

void abrevia(char *s, char *abreviatura) {
    int lenght = strlen(s);
    int i = 0;
    int cont = 1;
    
    s[0] = toupper(s[0]);
    abreviatura[0] = s[0];
    abreviatura[1] = '.';

    for (i = 1; i < lenght; i++){
        if (s[i] != ' ' && s[i-1] == ' '){
            if (s[i] == 'd' && s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'o'){
                cont++;
                abreviatura[cont] = toupper(s[i]);
                cont++;
                abreviatura[cont] = '.';
            }
            else if (s[i] != 'd'){
                cont++;
                abreviatura[cont] = toupper(s[i]);
                cont++;
                abreviatura[cont] = '.';
            }
        }
    }

    lenght = strlen(abreviatura);

    if (abreviatura[lenght-1] == '.'){
        abreviatura[lenght-1] = '\0';
    }

}   