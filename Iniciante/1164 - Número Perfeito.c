#include <stdio.h>
 
int main() {
    int n, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        int sum = 0;

        for (int j = 0; sum < x; j++)
            sum += j;

        if ((sum == x) && (x != 1))
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }
 
    return 0;
}
