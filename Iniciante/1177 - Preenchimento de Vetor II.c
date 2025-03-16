#include <stdio.h>
 
int main() {
    int t, values = 0;

    scanf("%d", &t);

    for (int i = 0; i < 1000; i++) {
        if (values == t)
            values = 0;

        printf("N[%d] = %d\n", i, values);
        values++;
    }
 
    return 0;
}
