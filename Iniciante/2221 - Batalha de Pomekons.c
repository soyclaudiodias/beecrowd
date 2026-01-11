#include <stdio.h>

int main () {
    int t, b, ai[2], di[2], li[2];
    float value_dabriel, value_guarte;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &b);

        scanf("%d %d %d", &ai[0], &di[0], &li[0]);
        scanf("%d %d %d", &ai[1], &di[1], &li[1]);

        value_dabriel = (ai[0] + di[0]) / 2;
        value_guarte = (ai[1] + di[1]) / 2;

        if (li[0] % 2 == 0)
            value_dabriel += b;
        if (li[1] % 2 == 0)
            value_guarte += b;

        if (value_dabriel > value_guarte)
            printf("Dabriel\n");
        else if (value_dabriel < value_guarte)
            printf("Guarte\n");
        else
            printf("Empate\n");
        
    }

    return 0;
}