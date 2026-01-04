#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, h[10000];
    bool check = true;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &h[i]);

    if (n == 2) {
        if (h[1] == h[0])
            check = false;
    } else {
        for (int i = 1; i < n - 1; i++) {
            if ((h[i] > h[i-1] && h[i] > h[i+1]) || (h[i] < h[i-1] && h[i] < h[i+1]))
                continue;
            else {
                check = false;
                break;
            }
        }
    }

    printf("%d\n", check);

    return 0;
}
