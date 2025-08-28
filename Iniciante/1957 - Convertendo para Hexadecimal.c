#include <stdio.h>

int main() {
    int list[1000], v, hex_length = 0;

    scanf("%d", &v);

    for (int i = 0; v > 0; i++) {
        list[i] = v % 16;
        v /= 16;
        hex_length++;
    }

    for (int i = hex_length - 1; i >= 0; i--) {
        switch (list[i]) {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", list[i]);
            break;
        }
    }
    printf("\n");

    return 0;
}
