#include <stdio.h>
 
int main() {
    int n, even[5], even_size = 0, odd[5], odd_size = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &n);

        if ((n % 2) == 0) {
            even[even_size] = n;
            even_size++;
        }
        else {
            odd[odd_size] = n;
            odd_size++;
        }

        if (even_size == 5) {
            for (int i = 0; i < 5; i++) {
                printf("par[%d] = %d\n", i, even[i]);
                even[i] = 0;
            }

            even_size = 0;
        } else if (odd_size == 5) {
            for (int i = 0; i < 5; i++) {
                printf("impar[%d] = %d\n", i, odd[i]);
                odd[i] = 0;
            }

            odd_size = 0;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (odd[i] != 0)
            printf("impar[%d] = %d\n", i, odd[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (even[i] != 0)
            printf("par[%d] = %d\n", i, even[i]);
    }
 
    return 0;
}
