#include <stdio.h>
#include <stdbool.h>

int main () {
    int x, m;

    while (true) {
        scanf("%d %d", &x, &m);

        if (x == 0 && m == 0)
            break;
        else
            printf("%d\n", x * m);
    } 

    return 0;
}