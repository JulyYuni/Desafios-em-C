#include <stdio.h>

int total_de_notas(int valor){
    int notas_cem = 0;
    int notas_cinquenta = 0;
    int notas_vinte = 0;
    int notas_dez = 0;
    int notas_cinco = 0;
    int notas_um = 0;
    int total = 0;

    while (valor != 0){
        if (valor >= 100){
            valor -= 100;
            notas_cem++;
            total++;
        }
        else if (valor >= 50){
            valor -= 50;
            notas_cinquenta++;
            total++;
        }
        else if (valor >= 20){
            valor -= 20;
            notas_vinte++;
            total++;
        }       
        else if (valor >= 10){
            valor -= 10;
            notas_dez++;
            total++;
        }
        else if (valor >= 5){
            valor -= 5;
            notas_cinco++;
            total++;
        }
        else if (valor >= 1){
            valor -= 1;
            notas_um++;
            total++;
        } 
    }
    return total;
}

int main(){
    int valor;
    int totalDeNotas;

    printf("\n\nDigite um numero: ");
    scanf("%d", &valor);

    totalDeNotas = total_de_notas(valor);

    printf("A quantidade de notas necessarias sao: %d", totalDeNotas);

    return 0;
}
    