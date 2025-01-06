#include <stdio.h>
#include <math.h>
 
int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%.f %.f %.f\n", pow(i, 1), pow(i, 2), pow(i, 3));
 
    return 0;
}
