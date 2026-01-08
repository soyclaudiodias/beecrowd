#include <stdio.h>

double square_root(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return (double) 1 / 2;
    else
        return (double) 1 / (2 + square_root(n -  1));
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%.10lf\n", square_root(n) + 1);

    return 0;
}