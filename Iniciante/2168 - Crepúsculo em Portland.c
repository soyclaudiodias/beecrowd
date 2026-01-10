#include <stdio.h>

int main () {
    int n, cameras[400][400];

    scanf("%d", &n);

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++)
            scanf("%d", &cameras[i][j]);
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            int count = 0;
            
            if (cameras[i - 1][j - 1] == 1)
                count++;
            if (cameras[i - 1][j] == 1)
                count++;
            if (cameras[i][j - 1] == 1)
                count++;
            if (cameras[i][j] == 1)
                count++;

            if (count >= 2)
                printf("S");
            else
                printf("U");
        }

        printf("\n");
    }

    return 0;
}