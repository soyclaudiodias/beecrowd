#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int x;

    while (true) {
        int sum = 0;

        scanf("%d", &x);

        if (x == 0)
            break;

        for (int i = 0; i < 5; i++) {
            if ((x % 2) != 0 && i == 0)
                x++;

            sum += x;
            x += 2;
        }

        printf("%d\n", sum);
    } 
 
    return 0;
}
