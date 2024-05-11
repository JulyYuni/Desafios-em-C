#include <stdio.h>
#include <string.h>
#include <conio.h>

int valida_mail(char *s);

int main() {
    char email[65];
    char c;
    char CARRIAGE_RETURN = '\r';
    int i = 0;
    int validacao = 0;


    printf("\n\n\n\nInsira a parte que vem a esquerda do @ de um e-mail com no maximo 64 caracteres. Ele pode conter apenas: ");
    printf("\n- Letras de ('a' a 'z')"); //1
    printf("\n- Numeros de ('0' a '9')"); //2
    printf("\n- Caracteres ('.', '-', '_')"); //3
    printf("\n\nTambem, o e-mail deve seguir os seguintes criterios:");
    printf("\n- Conter no minimo duas letras ou numeros"); //4
    printf("\n- Seu primeiro caracter tem que ser necessariamente uma letra"); //5
    printf("\n- O caracter ('.') nao pode aparecer em sequencia ou ser o ultimo do e-mail"); //6

    printf("\n\n\nInsira seu e-mail: ");

    while ((c = getch()) != CARRIAGE_RETURN && i < 64) {
        email[i++] = c; 
        putchar(c);
    }

    email[i] = '\0';

    validacao = valida_mail(email);

    if (validacao == 0){
        printf("\n\nO e-mail %s e invalido!\n\n\n\n\n", email);

    }
    else{
        printf("\n\nO e-mail %s foi aprovado!.\n\n\n\n\n", email);
    }
    

  return 0;
}

int valida_mail(char *s){
    int lenght = strlen(s);
    int contador_letra_numero = 0;
    char char_anterior = '\0';

    // Para cada  caracter da string
    for (int i = 0; i < lenght; i++) {
        char char_atual = s[i];

        
        if (!((char_atual >= 'a' && char_atual <= 'z') ||                    //1
            (char_atual >= '0' && char_atual <= '9') ||                      //2
            char_atual == '.' || char_atual == '-' || char_atual == '_'))    //3
            return 0;

        //6
        if (char_anterior == '.' && char_atual == '.')
            return 0;

        //Contando aparicao de letras
        if ((char_atual >= 'a' && char_atual <= 'z') || (char_atual >= '0' && char_atual <= '9'))
            contador_letra_numero++;

        char_anterior = char_atual;
    }

    //4
    if (lenght >= 2 || lenght <= 64){
        if (contador_letra_numero < 2)
            return 0;
    }
    else{
        return 0;
    }

    //5
    if (!(s[0] >= 'a' && s[0] <= 'z'))
        return 0;

    // Se nao entrou em nenhum if, o e-mail e valido
    return 1;

}
