#include <stdio.h>
#include <stdbool.h>
 
int main() {
    while (true) {
        int x, y;

        scanf("%d %d", &x, &y);

        if (x == y)
            break;
        else if (x < y)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
    } 
    
    return 0;
}
