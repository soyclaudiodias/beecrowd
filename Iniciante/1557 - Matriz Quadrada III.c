#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int n, t;

    while (true) {
        scanf("%d", &n);

        if (n == 0)
            break;

        t = (int)(log10((pow(2, 2 * (n - 1)))) + 1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j != 0)
                    printf(" ");
                printf("%*d", t, (int)(pow(2, i) * pow(2, j)));
            }

            printf("\n");
        }
        if (n == 0)
            break;

        printf("\n");
    }

    return 0;
}
