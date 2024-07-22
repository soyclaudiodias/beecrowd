#include <stdio.h>
#include <math.h>
 
int main() {
    int n;

    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2)
        printf("%d^%d = %.f\n", i, 2, (pow(i, 2)));
 
    return 0;
}
