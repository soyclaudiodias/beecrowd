#include <stdio.h>

int main() {
    int n, list[1000], amount = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    for (int i = 0; i < n; i++) {
        if (list[i] % 2 == 0)
            amount++;
    }
    printf("%d Multiplo(s) de 2\n", amount);
    
    amount = 0;
    for (int i = 0; i < n; i++) {
        if (list[i] % 3 == 0)
            amount++;
    }
    printf("%d Multiplo(s) de 3\n", amount);

    amount = 0;
    for (int i = 0; i < n; i++) {
        if (list[i] % 4 == 0)
            amount++;
    }
    printf("%d Multiplo(s) de 4\n", amount);

    amount = 0;
    for (int i = 0; i < n; i++) {
        if (list[i] % 5 == 0)
            amount++;
    }
    printf("%d Multiplo(s) de 5\n", amount);

    return 0;
}
