#include <stdio.h>

int main() {
    unsigned long long int n;

    scanf("%llu", &n);

    for (unsigned long long int i = n; i > 0; i/=10)
        printf("%llu", i % 10);

    printf("\n");

    return 0;
}
