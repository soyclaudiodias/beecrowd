#include <stdio.h>
 
int main() {
    int x, n[10];

    scanf("%d", &x);

    for (int i = 0; i < 10; i++) {
        n[i] = x;
        
        printf("N[%d] = %d\n", i, n[i]);
        x *= 2;
    }
 
    return 0;
}
