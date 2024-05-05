#include <stdio.h>

int main(){
    int work_hours = 0;
    int hour_value = 0;
    int salary = 0;
    int bonus = 0;

    printf("\n\n\n\nDigite as horas trabalhadas: ");
    scanf("%d", &work_hours);
    printf("Digite o valor da hora: ");
    scanf("%d", &hour_value);

    if (work_hours <= 40){
        salary = work_hours * hour_value;
    }
    else if(work_hours > 40 && work_hours <= 60){
        salary = work_hours * hour_value;
        work_hours -= 40;

        bonus = (work_hours * hour_value) /2;
        salary += bonus;
    }
    else if(work_hours > 60){
        salary = work_hours * hour_value;
        work_hours -= 40;

        bonus = (work_hours * hour_value) /2;
        salary += bonus;
    }

    printf("\nSeu salario foi: %d", salary);
    if (bonus > 0){ 
        printf("\nO bonus foi: %d\n\n\n\n\n", bonus);
    }

    return 0;
}