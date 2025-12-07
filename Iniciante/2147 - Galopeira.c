#include <stdio.h>
#include <string.h>

int main() {
    int n;
    float time;
    char world[10000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        time = 0;

        scanf("%s", world);

        for (int j = 0; j < strlen(world); j++)
            time += 0.01;

        printf("%.2f\n", time);
    }

    return 0;
}
