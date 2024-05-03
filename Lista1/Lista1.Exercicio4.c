#include <stdio.h>

float average_func(float sum, int size){
    return sum/size;
}

int approval_status(float average){
    if (average >= 6) {
        printf("\nO(A) aluno(a) esta Aprovado.\n\n");
    }
    if (average < 6 && average >= 5){
        printf("\nO(A) aluno(a) nao esta aprovado ainda mas podera fazer VS.\n\n");
    }
    if (average < 5) {
        printf("\nO(A) aluno(a) esta Reprovado.\n\n");
    }
}

int main(){
    const int size = 3;
    float sum = 0;
    float grade = 0;
    int isAValidGrade = 0;
    float average;

    printf("## Calculador de media ##\n\n");
    printf("Insira a nota das %d provas:\n\n", size);

    for (int i = 0; i < 3; i++) {

        isAValidGrade = 0;

        while(!isAValidGrade) {

            printf("Digite a nota da prova #%d: ", i + 1);
            scanf("%f", &grade);

            if (grade >= 0 && grade <= 10){
                sum += grade;
                isAValidGrade = 1;
            }

            printf("\n");
        }
    }

    average = average_func(sum, size);

    printf("\nA media do(a) aluno(a) foi: %.1f", average);

    approval_status(average);

}