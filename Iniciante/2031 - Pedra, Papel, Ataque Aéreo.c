#include <stdio.h>
#include <string.h>

int main () {
    int n;
    char player1[7], player2[7];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s%s", player1, player2);

        if(strcmp(player1, "ataque") == 0) {
            if (strcmp(player2, "ataque") == 0)
                printf("Aniquilacao mutua\n");
            else if (strcmp(player2, "pedra") == 0)
                printf("Jogador 1 venceu\n");
            else if (strcmp(player2, "papel") == 0)
                printf("Jogador 1 venceu\n");
        } else if(strcmp(player1, "pedra") == 0) {
            if (strcmp(player2, "ataque") == 0)
                printf("Jogador 2 venceu\n");
            else if (strcmp(player2, "pedra") == 0)
                printf("Sem ganhador\n");
            else if (strcmp(player2, "papel") == 0)
                printf("Jogador 1 venceu\n");
        } else if (strcmp(player1, "papel") == 0) {
            if (strcmp(player2, "ataque") == 0)
                printf("Jogador 2 venceu\n");
            else if (strcmp(player2, "pedra") == 0)
                printf("Jogador 2 venceu\n");
            else if (strcmp(player2, "papel") == 0)
                printf("Ambos venceram\n");
        }
    }

    return 0;
}
