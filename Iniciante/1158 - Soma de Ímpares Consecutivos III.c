#include <stdio.h>
 
int main() {
    int n, x, y;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int sum = 0;

        scanf("%d %d", &x, &y);

        for (int i = 0; i < y; i++) {
            if ((x % 2) == 0 && i == 0)
                x++;
            
            sum += x;
            x += 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}
