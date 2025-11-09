#include <stdio.h>
#include <string.h>

int main () {
    int n, m;
    char action[7];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%s", action);

        if (strcmp(action, "fechou") == 0)
            n++;
        else if (strcmp(action, "clicou") == 0)
            n--;
    }

    printf("%d\n", n);

    return 0;
}
