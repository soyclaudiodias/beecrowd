#include <stdio.h>
 
int main() {
    int victories_inter = 0, victories_gremio = 0, draws = 0, x = 1, goals_i, goals_g;

    while (x == 1) {
        scanf("%d%d", &goals_i, &goals_g);

        if (goals_i > goals_g)
            victories_inter += 1;
        else if (goals_i < goals_g)
            victories_gremio += 1;
        else
            draws += 1;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);      

        if (x == 2)
            break;
    }

    printf("%d grenais\n", victories_inter + victories_gremio + draws);
    printf("Inter:%d\n", victories_inter);
    printf("Gremio:%d\n", victories_gremio);
    printf("Empates:%d\n", draws);

    if (victories_inter > victories_gremio)
        printf("Inter venceu mais\n");
    else
        printf("Gremio venceu mais\n");
 
    return 0;
}
