#include <stdio.h>
#include <string.h>

int main() {
    float m[12][12], sum = 0;
    int dec_j = 11;
    char o[2];

    scanf("%s", o);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++)
            scanf("%f", &m[i][j]);
    }

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < dec_j; j++)
            sum += m[i][j];
        dec_j -= 1;
    }

    if ((strcmp(o, "S")) == 0)
        printf("%.1f\n", (float)sum);
    else if ((strcmp(o, "M")) == 0)
        printf("%.1f\n", (float)sum / 66);

    return 0;
}
