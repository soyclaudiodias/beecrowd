#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {
    char c[TAM];
    int quantity = 0;

    scanf("%s", c);

    for (int i = 0; i < TAM; i++) {
        if (c[i] == '1')
            quantity++;
    }

    if (quantity % 2 == 0)
        printf("%s0\n", c);
    else
        printf("%s1\n", c);

    return 0;
}