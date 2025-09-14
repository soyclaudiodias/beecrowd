#include <stdio.h>

int main() {
    int n, t;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);

        if ((t - 2015) >= 0)
            printf("%d A.C.\n", t - 2014);
        else
            printf("%d D.C.\n", (t - 2015) * -1);
    }

    return 0;
}
