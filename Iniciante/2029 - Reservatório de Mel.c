#include <stdio.h>
#include <math.h>

int main() {
    double V, d;

    while (scanf("%lf\n%lf", &V, &d) != EOF) {
        printf("ALTURA = %.2lf\n", V / (3.14 * pow((d / 2.00), 2)));
        printf("AREA = %.2lf\n", 3.14 * pow((d / 2.00), 2));
    } 

    return 0;
}
