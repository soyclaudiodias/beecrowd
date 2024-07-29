#include <stdio.h>
 
int main() {
    for (float i = 0; i < 2.1; i += 0.2) {
        float j = 1 + i;

        if ((i == 0. || i == 1. || i >= 2) && (j == 1. || j == 2. || j >= 3.)) {
            printf("I=%.f J=%.f\n", i, j);
            printf("I=%.f J=%.f\n", i, (j + 1));
            printf("I=%.f J=%.f\n", i, (j + 2));
        } else {
            printf("I=%.1f J=%.1f\n", i, j);
            printf("I=%.1f J=%.1f\n", i, (j + 1));
            printf("I=%.1f J=%.1f\n", i, (j + 2));
        }
    }

    return 0;
}
