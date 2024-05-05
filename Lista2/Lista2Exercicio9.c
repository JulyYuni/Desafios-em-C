#include <stdio.h>
#include <math.h>

unsigned int start_zero = 0;

unsigned int inverte(unsigned int num){
    unsigned int cont = 0;
    unsigned int num_inverted= 0;
    unsigned int temp_num = num;

    while (temp_num != 0){
        temp_num /= 10;
        cont++;
    }

    temp_num = num;
    cont--;
    unsigned int list[cont];

    for (int i = cont; i <= cont; --i){
        list[i] = temp_num % 10;
        temp_num /= 10;
    }


    for (int i = cont; i >= 0; --i){
        if (i == cont && list[i] == 0){
            start_zero = 1;
        }

        num_inverted += (list[i] * pow(10, i));

        if ((list[i] * pow(10, i)) >= 10 && num_inverted % 10 != 0){
            num_inverted = num_inverted+1;
        }

    }

    return num_inverted;
}




int main(){
    unsigned int num = 0;
    unsigned int num_inverted = 0;

    printf("\n\n\n\nDigite um numero: ");
    scanf("%u", &num);

    num_inverted = inverte(num);
    
    printf("\nEsse numero escrito ao contrario e: ");
    if (start_zero == 1){
        printf("0");
    }
    printf("%u\n\n\n\n\n", num_inverted);

    return 0;
}