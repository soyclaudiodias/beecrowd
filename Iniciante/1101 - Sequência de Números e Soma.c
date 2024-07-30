#include <stdio.h>
#include <stdbool.h>
 
int main() {
    while (true) {
        int m, n, sum = 0;

        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0)
            break;
        else if (m <= n) {
            for (int i = m; i <= n; i++) {
                printf("%d ", i);
                sum += i;
            }
        } else {
            for (int i = n; i <= m; i++) {
                printf("%d ", i);
                sum += i;
            }
        }

        printf("Sum=%d\n", sum);
    }
 
    return 0;
}
