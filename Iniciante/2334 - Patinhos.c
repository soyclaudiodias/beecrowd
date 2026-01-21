#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned long long int p;

    while (true) {
        scanf("%llu", &p);

        if (p == -1)
            break;
        else if (p == 0)
            printf("%llu\n", p);
        else
            printf("%llu\n", p - 1);
    }

    return 0;
}