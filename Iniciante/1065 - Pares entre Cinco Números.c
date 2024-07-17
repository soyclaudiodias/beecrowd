#include <stdio.h>
 
int main() {
    int n, quantity = 0;

    for (int i = 0; i < 5; i++){
        scanf("%d", &n);
        
        if (n%2 == 0)
            quantity += 1;
    }

    printf("%d valores pares\n", quantity);
 
    return 0;
}
