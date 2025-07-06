#include <stdio.h>
#include <string.h>
 
int main() {
    double m[12][12], sum = 0;
    int dec_j = 11;
    char o[2];

    scanf("%s", o);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < dec_j; j++) {
            if (i < j && dec_j > 6)
                sum += m[i][j]; 
        }
        dec_j -= 1;
    }

    if ((strcmp(o, "S")) == 0) {
        printf("%.1lf\n", (double) sum);
    } else if ((strcmp(o, "M")) == 0) {
        printf("%.1lf\n", (double) sum / 30);
    }

    return 0;
}
