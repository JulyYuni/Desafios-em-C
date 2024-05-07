

int main() {
    int i=5, *p;
    p = &i;

    // imprima: endereco de p (no caso ira printar um endereco em hexadecimal, considerando que o endereco e 4094, ira printar 4094),  5 + 2,   3 * 5
    printf("%x %d %d \n", p, *p+2, 3**p);
    
    printf("\n\nO que seria printado caso i ocupasse o endereco 4094 e: 4094 7 15\n\n\n\n");

    return 0;
}