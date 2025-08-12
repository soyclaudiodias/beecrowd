#include <stdio.h>
#include <string.h>

int main() {
    int qt, number1, number2;
    char player1[100], choise1[6], player2[100], choise2[6];

    scanf("%d", &qt);

    for (int i = 0; i < qt; i++) {
        scanf("%s %s %s %s", player1, choise1, player2, choise2);
        scanf("%d %d", &number1, &number2);

        if ((number1 + number2) % 2 == 0) {
            if (strcmp(choise1, "PAR") == 0)
                printf("%s\n", player1);
            else
                printf("%s\n", player2);
        }
        else {
            if (strcmp(choise1, "IMPAR") == 0)
                printf("%s\n", player1);
            else
                printf("%s\n", player2);
        }
    }

    return 0;
}
