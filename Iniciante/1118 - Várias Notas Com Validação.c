#include <stdio.h>
 
int main() {
    float n;
    int x = 1;

    while (x == 1) {
        float sum = 0;
        int count = 0;

        while (count < 2) {
            scanf("%f", &n);

            if ((n >= 0) && (n <= 10)){
                sum += n;
                count++;
            } else
                printf("nota invalida\n");
        }

        printf("media = %.2f\n", sum / 2);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while ((x != 1) && (x != 2));

        if (x == 2)
            break;
    }
 
    return 0;
}
