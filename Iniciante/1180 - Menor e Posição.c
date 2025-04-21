#include <stdio.h>
#define N 1000
 
int main() {
    int n, x[N], min, position;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        
        if ((x[i] < min) || (i == 0)) {
            min = x[i];
            position = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", position);
 
    return 0;
}
