#include <stdio.h>
 
int main() {
    int n, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x == 0)
            printf("NULL\n");
        else {
            (x%2) == 0 ? printf("EVEN ") : printf("ODD ");
            (x > 0) ? printf("POSITIVE\n") : printf("NEGATIVE\n");
        }
    }

    return 0;
}
