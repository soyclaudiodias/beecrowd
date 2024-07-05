#include <stdio.h>

int main() {
    float price[5] = {4.0, 4.5, 5.0, 2.0, 1.5};
    int code, qtd;

    scanf("%d%d", &code, &qtd);
    printf("Total: R$ %.2f\n", price[code-1]*qtd);
    
    return 0;
}
