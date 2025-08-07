#include <stdio.h>

int main() {
    int c, n, sum;

    scanf("%d", &c);

    for (int i = 0; i < c; i++) {
        sum = 0;

        scanf("%d", &n);

        for (int j = 0; j < n; j++) {
            if (j % 2 == 0)
                sum += 1;
            else
                sum -= 1;
        }

        printf("%d\n", sum);
    }

    return 0;
}
