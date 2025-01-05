#include <stdio.h>
 
int main() {
    int n, combustible1 = 0, combustible2 = 0, combustible3 = 0;

    do {
        scanf("%d", &n);

        if (n == 1)
            combustible1 += 1;
        else if (n == 2)
            combustible2 += 1;
        else if (n == 3)
            combustible3 += 1;
    } while (n != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", combustible1);
    printf("Gasolina: %d\n", combustible2);
    printf("Diesel: %d\n", combustible3);
 
    return 0;
}
