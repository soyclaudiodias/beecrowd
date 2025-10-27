#include <stdio.h>

int main() {
    int t, response, hits = 0;

    scanf("%d", &t);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &response);

        if (response == t)
            hits++;
    }

    printf("%d\n", hits);

    return 0;
}
