#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int min(int n1, int n2, int n3, int n4) {
    if (n1 <= n2 && n1 <= n3 && n1 <= n4)
        return n1;
    else if (n2 <= n1 && n2 <= n3 && n2 <= n4)
        return n2;
    else if (n3 <= n1 && n3 <= n2 && n3 <= n4)
        return n3;
    else
        return n4;
}

int main() {
    int n;

    while (true) {
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j != 0)
                    printf(" ");

                printf("%3d", min(i, j, n - 1 - i, n - 1 - j) + 1);
            }

            printf("\n");
        }
        
        if (n == 0)
            break;

        printf("\n");
    }

    return 0;
}
