#include <stdio.h>
 
int main() {
    int positive_quantity = 0;
    float number, positive;

    for (int i = 0; i < 6; i++){
        scanf("%f", &number);
        
        if (number > 0){
            positive += number;
            positive_quantity += 1;
        }
    }

    printf("%d valores positivos\n%.1f\n", positive_quantity, (positive/positive_quantity)/1.0);
 
    return 0;
}
