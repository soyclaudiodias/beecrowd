#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m, t[1001][1001];
    bool check = false;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%d", &t[i][j]);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (t[i][j] == 42 &&
                t[i - 1][j - 1] == 7 && t[i - 1][j] == 7 && t[i - 1][j + 1] == 7 &&
                t[i][j - 1] == 7 && t[i][j + 1] == 7 &&
                t[i + 1][j - 1] == 7 && t[i + 1][j] == 7 && t[i + 1][j + 1] == 7) {
                    check = true;
                    printf("%d %d\n", i + 1, j + 1);
                }
        }
    }

    if (!check)
        printf("%d %d\n", 0, 0);

    return 0;
}
