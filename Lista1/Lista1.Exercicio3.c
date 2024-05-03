#include <stdio.h>

int calculator(int num1, int num2, char operator)
{
    if (operator == '+') {
        return num1 + num2;
    }

    else if (operator == '-') {
        return num1 - num2;
    }

    else if (operator == '/') {
        return num1 / num2;
    }

    else if (operator == '*') {
        return num1 * num2;
    }
}

int main()
{   
    char operator;
    int num1, num2;

    printf("\n\nInsira dois valores no seguinte formato: a-b\n\n");
    scanf("%d%c%d", &num1, &operator, &num2);

    int result = calculator(num1, num2, operator);

    printf("\n\n\nResultado da operacao: %d\n\n", result);

    return 0;
}