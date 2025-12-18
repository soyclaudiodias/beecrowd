#include <stdio.h>
#include <string.h>
#define TAM_MAX 500

int main() {
    char l[TAM_MAX];

    fgets(l, TAM_MAX, stdin);

    if (strlen(l) - 1 <= 80)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
