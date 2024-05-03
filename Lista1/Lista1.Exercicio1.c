#include <stdio.h>

int main()
{
    int num = 0;
    int sec = 0, min = 0, hour = 0;
    int rest;
    int i;

    num = 60;

    do {
        printf("Insira um numero inteiro e positivo de segundos:\n");
        scanf("%d", &num);
    }

    while (num <= 0);

    for (i = 1; num / 60 > 0 || i == 1; i++){
        rest = num % 60;
        num = num / 60;
        
        if (i == 1){
            sec = rest;
            min = num;
        }
        if (i == 2){
            min = rest;
            hour = num;
            num = 0;
        }
    }

    printf("Seu horario e %02d:%02d:%02d", hour, min, sec);

    return 0;
        
}