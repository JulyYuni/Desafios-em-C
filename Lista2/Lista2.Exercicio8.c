int main(){
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int mult = 0;
    int cont = 0;

    printf("\n\n\n\nOs numeros que possuem a mesma propriedade sao: ");

    for (int i = 1000; i <= 9999; i++){
        
        num1 = i/100;
        num2 = i - (num1 * 100);
        sum = num1 + num2;
        mult = sum * sum;

        if (mult == i){
            if (cont == 0){
                printf("%d", i);
            }
            else if (cont > 0){
                printf(", %d", i);
            }
            cont++;
        }
    }

    printf(".\n\n\n\n\n");

    return 0;
}