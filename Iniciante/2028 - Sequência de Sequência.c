#include <stdio.h>

int main() {
    int n, x = 1, count;

    while (scanf("%d", &n) != EOF) {
        count = 1;

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j < i; j++)
                count++;
        }

        if (n == 0)
            printf("Caso %d: %d numero\n", x, count);
        else
            printf("Caso %d: %d numeros\n", x, count);

        printf("%d", 0);

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j < i; j++)
                printf(" %d", i);
        }

        printf("\n\n");

        x++;
    }

    return 0;
}
