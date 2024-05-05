#include <stdio.h>

int main()
{   
    // a --> CORRETO referencia o valor do terceiro elemento da matriz.
    // b --> ERRADO referencia o quinto valor da matriz.
    // c --> ERRADO referencia o endereço do quinto valor da matriz.
    // D --> ERRADO referencia o endereço do terceiro valor da matriz.

    printf("letra a: *(pulo + 2)");
    return 0;
}
