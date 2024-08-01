#include <stdio.h>
 
int main() {
    float n, soma = 0;
    int count = 0;

    while (count < 2) {
        scanf("%f", &n);

        if ((n >= 0 && n <= 10)) {
            soma += n;
            count++;
        } else
            printf("nota invalida\n");    
    }

    printf("media = %.2f\n", (soma) / 2.);
 
    return 0;
}
