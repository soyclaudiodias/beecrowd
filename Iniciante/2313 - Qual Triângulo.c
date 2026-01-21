#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c, h, ca, co;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if ((a == b) && (b == c))
            printf("Valido-Equilatero\n");
        else if ((a == b) || (a == c) || (b == c))
            printf("Valido-Isoceles\n");
        else if ((a != b) && (a != c) && (b != c))
            printf("Valido-Escaleno\n");

        if ((a > b) && (a > c)) {
            h = a;
            ca = b;
            co = c;
        } else if ((b > a) && (b > c)) {
            h = b;
            ca = a;
            co = c;
        } else {
            h = c;
            ca = a;
            co = b;
        }

        if (pow(h, 2) == pow(ca, 2) + pow(co, 2))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");

    } else
        printf("Invalido\n");

    return 0;
}