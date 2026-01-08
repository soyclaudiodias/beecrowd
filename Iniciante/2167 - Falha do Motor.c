#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, r[100];
    bool check = false;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &r[i]);

    for (int i = 1; i < n; i++) {
        if (r[i] < r[i-1]) {
            printf("%d\n", i + 1);

            check = true;

            break;
        }
    }

    if(!check)
        printf("%d\n", 0);

    return 0;
}