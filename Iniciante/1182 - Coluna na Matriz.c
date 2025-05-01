#include <stdio.h>
#include <string.h>

int main() {
    float m[12][12];
    int c, sum = 0;
    char t[2];

    scanf("%d", &c);
    scanf("%s", t);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++)
            scanf("%f", &m[i][j]);
    }

    for (int i = 0; i < 12; i++)
        sum += m[i][c];

    if ((strcmp(t, "S")) == 0)
        printf("%.1f\n", (float)sum);
    else if ((strcmp(t, "M")) == 0)
        printf("%.1f\n", (float)sum / 12);

    return 0;
}
