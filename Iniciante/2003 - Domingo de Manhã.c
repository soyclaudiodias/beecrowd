#include <stdio.h>

int main() {
    int h, min, sum;

    while (scanf("%d:%d", &h, &min) != EOF) {
        sum = (h + 1) * 60 + min;

        if (sum - 480 > 0)
            printf("Atraso maximo: %d\n", sum - 480);
        else
            printf("Atraso maximo: %d\n", 0);
    } 

    return 0;
}
