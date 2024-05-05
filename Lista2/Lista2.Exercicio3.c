#include <stdio.h>

void fibonacci(int n, int *lista_fibonacci){
    lista_fibonacci[0] = 1;
    lista_fibonacci[1] = 1;

    for (int i = 2; i <= n; i++){
        lista_fibonacci[i] = lista_fibonacci[i-1] + lista_fibonacci[i-2];
    }

}

int main(){
    int n;
    printf("\n\n\n\nDigite um numero: ");
    scanf("%d", &n);

    int lista_fibonacci[n];

    fibonacci(n, lista_fibonacci);

    printf("\nOs %d primeiros numeros da Serie de Fibonacci sao: ", n);
    
    for (int i = 0; i <= n; i++){
        if (i < n){
        printf("%d, ", lista_fibonacci[i]);
        }
        else{
            printf("%d.\n\n\n\n\n", lista_fibonacci[i]);
        }
    }
    
    return 0;
}