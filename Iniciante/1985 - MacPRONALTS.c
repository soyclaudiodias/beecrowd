#include <stdio.h>

int main() {
    int p, product_number, q;
    float sum;

    scanf("%d", &p);

    for (int i = 0; i < p; i++) {
        scanf("%d %d", &product_number, &q);

        switch (product_number) {
            case 1001:
                sum += 1.5 * q;
                break;
            case 1002:
                sum += 2.5 * q;
                break;
            case 1003:
                sum += 3.5 * q;
                break;
            case 1004:
                sum += 4.5 * q;
                break;
            case 1005:
                sum += 5.5 * q;
                break;
        }
    }

    printf("%.2f\n", sum);

    return 0;
}
