#include <stdio.h>
 
int main() {
    int t, n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        double fibonacci[60] = {0, 1};
        int count = 2;

        scanf("%d", &n);

        for (int j = 0; j < n; j++) {
            fibonacci[count] = fibonacci[count-2] + fibonacci[count-1];
            count++;
        } 

        printf("Fib(%d) = %.0lf\n", n, fibonacci[count-2]);
    }
 
    return 0;
}
