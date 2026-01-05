#include <stdio.h>
#include <string.h>

int main() {
    char t[501];

    fgets(t, 500, stdin);

    if (strlen(t) - 1 <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}