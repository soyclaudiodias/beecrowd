#include <stdio.h>

int main() {
    int n;
    char phrase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%c", phrase[i]);

    printf("\n");

    return 0;
}
