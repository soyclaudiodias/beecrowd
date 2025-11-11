#include <stdio.h>
#include <stdbool.h>

int main () {
    int n, m, change;

    while (true) {
        scanf("%d %d", &n, &m);

        change = m - n;

        for (int i = 0; i < 2; i++) {
            if (change >= 100)
                change -= 100;
            else if (change >= 50)
                change -= 50;
            else if (change >= 20)
                change -= 20;
            else if (change >= 10)
                change -= 10;
            else if (change >= 5)
                change -= 5;
            else
                change -= 2;
        }

        if (n == 0 && m == 0)
            break;

        if (change == 0)
            printf("possible\n");
        else
            printf("impossible\n");
    }

    return 0;
}
