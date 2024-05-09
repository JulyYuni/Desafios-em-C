#include <stdio.h>

int main(){
    int n = 1;
    int cont_idade = 0;
    int cont_altura = 0;
    int sum = 0;
    int media = 0;
    float variancia = 0 ;

    printf("\n\n\n\nDigite o numero de pessoas a serem registradas: ");
    scanf("%d", &n);
    printf("\n");

    int generos[n];
    int idades[n];
    int alturas[n];

    for (int i = 0; i < n; i++){
        printf("\nInsira o genero da pessoa numero %d (0 para mulheres e 1 para homens): ", i+1);
        scanf("%d", &generos[i]);

        printf("Insira a idade da pessoa numero %d: ", i+1);
        scanf("%d", &idades[i]);

        printf("Insira a altura em centimetros da pessoa numero %d: \n", i+1);
        scanf("%d", &alturas[i]);

        if (generos[i] == 0 && idades[i] >= 20 && idades[i] >= 35){
            cont_idade++;
        }
        if (generos[i] == 1 && alturas[i] > 180){
            cont_altura++;
        }

    }

    for(int i = 0; i < n; i++){
        sum = sum + alturas[i];
    }

    media = sum / n;
    sum = 0;

    for(int i = 0; i < n; i++){
        sum += ((alturas[i] - media) * (alturas[i] - media));
    }

    variancia = sum / (float)n;

    printf("\n\nA quantidade de mulheres com idade entre 20 e 35 anos e: %d", cont_idade);
    printf("\nA quantidade de homens com altura maior que 1,80m  e: %d", cont_altura);
    printf("\nA variancia de altura entre as pessoas registradas e: %.0f\n\n\n\n\n", variancia);
}   
