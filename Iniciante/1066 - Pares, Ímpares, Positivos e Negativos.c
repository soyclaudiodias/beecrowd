#include <stdio.h>
 
int main() {
    int n, qty_pair = 0, qty_odd = 0, qty_positive = 0, qty_negative = 0;

    for (int i = 0; i < 5; i++){
        scanf("%d", &n);

        if (n%2 == 0)
            qty_pair += 1;
        else
            qty_odd += 1;
            
        if (n > 0)
            qty_positive += 1;
        else if (n < 0)
            qty_negative += 1;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", qty_pair, qty_odd, qty_positive, qty_negative);
 
    return 0;
}
