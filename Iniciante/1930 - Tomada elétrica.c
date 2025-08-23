#include <stdio.h>

int main() {
    int t1, t2, t3, t4, max_device;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    max_device = t1 + t2 + t3 + t4 - 3;
    
    printf("%d\n", max_device);

    return 0;
}
