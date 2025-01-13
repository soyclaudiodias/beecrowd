#include <stdio.h>
 
int main() {
    int age, sum = 0, quantity = 0;

    do {
        scanf("%d", &age);
        
        if (age > 0) {
            sum += age;
            quantity++;
        }
    } while (age > 0);

    printf("%.2f\n", (float)sum/quantity);
 
    return 0;
}
