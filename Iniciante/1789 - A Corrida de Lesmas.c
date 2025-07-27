#include <stdio.h>

int main() {
    int l, v, v_level;

    while (scanf("%d", &l) != EOF) {
        v = 0, v_level = 0;

        for (int i = 0; i < l; i++) {
            scanf("%d", &v);

            if (v >= v_level)
                v_level = v;
        }

        if (v_level < 10)
            printf("%d\n", 1);
        else if (v_level >= 10 && v_level < 20)
            printf("%d\n", 2);
        else
            printf("%d\n", 3);
    }

    return 0;
}
