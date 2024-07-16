#include <stdio.h>
 
int main() {
    float values[6];
    int positive_quantity = 0;

    for (int i = 0; i < 6; i++){
        scanf("%f", &values[i]);
        
        if (values[i] > 0)
            positive_quantity += 1;
    }

    printf("%d valores positivos\n", positive_quantity);
 
    return 0;
}
