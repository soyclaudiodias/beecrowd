#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int a, b, c;

    while (true) {
        scanf("%d", &a);

        if (a == 0)
            break;
        else {
            scanf("%d%d", &b, &c);
            printf("%.f\n", floor(sqrt((a * b * 100) / c)));
        }
    }

    return 0;
}
