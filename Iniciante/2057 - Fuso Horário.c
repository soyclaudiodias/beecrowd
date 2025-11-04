#include <stdio.h>

int main() {
    int s, t, f, destination_hour;

    scanf("%d %d %d", &s, &t, &f);

    if (s == 0)
        s = 24;

    destination_hour = s + t + f;

    if (destination_hour >= 24)
        printf("%d\n", destination_hour - 24);
    else
        printf("%d\n", destination_hour);

    return 0;
}
