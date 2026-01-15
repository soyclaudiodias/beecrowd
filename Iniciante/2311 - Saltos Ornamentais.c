#include <stdio.h>
#include <math.h>

int main() {
    int n;
    char name[100];
    float d, s[7];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float sum = 0;

        scanf("%s", name);
        scanf("%f", &d);
        scanf("%f %f %f %f %f %f %f", &s[0], &s[1], &s[2], &s[3], &s[4], &s[5], &s[6]);

        float max = s[0];
        float min = s[0];

        for (int j = 0; j < 7; j++) {
            if (s[j] > max)
                max = s[j];
            if (s[j] < min)
                min = s[j];
        }

        for (int j = 0; j < 7; j++)
            sum += s[j];

        printf("%s %.2f\n", name, (sum - max - min) * d);
    }

    return 0;
}