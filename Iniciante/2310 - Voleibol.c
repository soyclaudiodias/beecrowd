#include <stdio.h>

int main() {
    int n, s, s1, b, b1, a, a1;
    float ts = 0, ts1 = 0, tb = 0, tb1 = 0, ta = 0, ta1 = 0;
    char name[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);

        ts += s; tb += b; ta += a;
        ts1 += s1; tb1 += b1; ta1 += a1;
    }

    printf("Pontos de Saque: %.2f %%.\n", (ts1 / ts) * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", (tb1 / tb) * 100);
    printf("Pontos de Ataque: %.2f %%.\n", (ta1 / ta) * 100);

    return 0;
}