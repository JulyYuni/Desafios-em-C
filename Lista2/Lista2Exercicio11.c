#include <stdio.h>
#include <math.h>

int main(){
    int num1 = 0;
    int num2 = 0;

    printf("\n\n\n\nDigite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("\n\n%d^%d = %d\n\n\n\n\n", num1, num2, (int)pow(num1, num2));

    return 0;
}