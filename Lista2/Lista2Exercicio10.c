#include <stdio.h>

int mdc (int x, int y){
    int result = 1;
    for (int i = 2; i <= 9; i++){
        
        while (x % i == 0 && y % i == 0){
            x /= i;
            y /= i;
            result *= i;
        }
    }

    return result;
}

int mmc(int num1, int num2){
    int resultmmc = 1;
    for(int i = 2; num1 != 1 && num2 != 1; i++){
        while (num1 % i == 0 || num2 % i == 0){
            if (num1 % i == 0){
                num1 /= i;
            }
            if(num2 % i == 0){
                num2 /= i;
            }
            resultmmc = resultmmc * i;
        }
    }
    return resultmmc;

}

int main(){

    int num1 = 0;
    int num2 = 0;
    int result = 0;

    printf("\n\n\n\n##### Calculadora de MDC!! #####");
    printf("\n\nDigite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    result = mdc(num1, num2);

    printf("\n\nO mdc entre %d e %d e: %d \n\n\n\n", num1, num2, result);

    /*
    int resultmmc = mmc(num1, num2);
    printf("O mmc entre %d e %d, e: %d \n\n\n\n", num1, num2, resultmmc);
    */

    return 0;
}