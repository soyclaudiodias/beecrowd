#include <stdio.h>
 
int main() {
    int n, x, dividers;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        dividers = 0;

        scanf("%d", &x);

        for (int j = 1; j <= x; j++) {
            if ((x % j) == 0)
                dividers++;
        }

        if (dividers == 2)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }
 
    return 0;
}
