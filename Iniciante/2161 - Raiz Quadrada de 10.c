#include <stdio.h>

double fracao(int n) {
    if (n == 0)
        return 0.0;
    else if (n == 1) 
        return 1.0 / 6.0;
    else
        return 1.0 / (6 + fracao(n - 1));
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%.10lf\n", 3 + fracao(n));

    return 0;
}
