#include <stdio.h>
#include <string.h> 
 
int main() {
    int n, quantity, quantity_rabbit = 0, quantity_mouse = 0, quantity_frog = 0;
    char type_of_guinea_pig[2];

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d%s", &quantity, type_of_guinea_pig);
        if (strcmp(type_of_guinea_pig, "C") == 0)
            quantity_rabbit += quantity;
        else if (strcmp(type_of_guinea_pig, "R") == 0)
            quantity_mouse += quantity;
        else if (strcmp(type_of_guinea_pig, "S") == 0)
            quantity_frog += quantity;
    }

    printf("Total: %d cobaias\n", quantity_rabbit + quantity_mouse + quantity_frog);
    printf("Total de coelhos: %d\n", quantity_rabbit);
    printf("Total de ratos: %d\n", quantity_mouse);
    printf("Total de sapos: %d\n", quantity_frog);
    printf("Percentual de coelhos: %.2f %%\n", 100.*quantity_rabbit/(quantity_rabbit + quantity_mouse + quantity_frog));
    printf("Percentual de ratos: %.2f %%\n", 100.*quantity_mouse/(quantity_rabbit + quantity_mouse + quantity_frog));
    printf("Percentual de sapos: %.2f %%\n", 100.*quantity_frog/(quantity_rabbit + quantity_mouse + quantity_frog));
 
    return 0;
}
