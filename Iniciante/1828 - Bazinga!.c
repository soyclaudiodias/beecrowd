#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char option1[8], option2[8];

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s%s", option1, option2);

        if (strcmp(option1, "tesoura") == 0 && strcmp(option2, "papel") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "papel") == 0 && strcmp(option2, "pedra")== 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "pedra") == 0 && strcmp(option2, "lagarto") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "lagarto") == 0 && strcmp(option2, "Spock") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "Spock") == 0 && strcmp(option2, "tesoura") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "tesoura") == 0 && strcmp(option2, "lagarto") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "lagarto") == 0 && strcmp(option2, "papel") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "papel") == 0 && strcmp(option2, "Spock") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "Spock") == 0 && strcmp(option2, "pedra") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, "pedra") == 0 && strcmp(option2, "tesoura") == 0)
            printf("Caso #%d: Bazinga!\n", i+1);
        else if (strcmp(option1, option2) == 0)
            printf("Caso #%d: De novo!\n", i+1);
        else
            printf("Caso #%d: Raj trapaceou!\n", i+1);
    }

    return 0;
}
