#include <stdio.h>

int main()
{
    int a, b, c, d;
    float e, f, g, h;
    char v[10];
    int x;
    int* p = &a;

    printf("\n\n\n\n%d\n\n\n\n\n", *(++p));

    if (&x == p || &a == p || &b == p || &c == p || &d == p || &e == p || &f == p || &g == p || &h == p || v == p || &v[1] == p || &v[2] == p || &v[3] == p || &v[4] == p || &v[5] == p || &v[6] == p || &v[7] == p || &v[8] == p || &v[9] == p) {
        printf("O endereço coincidiu com o endereço de alguma outra variável");
    }

    return 0;

}