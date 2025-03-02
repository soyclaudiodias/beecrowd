#include <stdio.h>
 
int main() {
    int t, pa, pb;
    double g1, g2;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int years = 0;

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while (years < 100) {
            pa *= (1+g1/100);
            pb *= (1+g2/100);

            years++;

            if (pa > pb)
                break;
        }

        if (pa > pb)
            printf("%d anos.\n", years);
        else
            printf("Mais de 1 seculo.\n");
    }
 
    return 0;
}
