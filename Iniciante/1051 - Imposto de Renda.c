#include <stdio.h>
 
int main() {
    float income;

    scanf("%f", &income);

    if (income >= 0.00 && income <= 2000.00)
        printf("Isento\n");
    if (income >= 2000.01 && income <= 3000.00)
        printf("R$ %.2f\n", (income-2000)*0.08);
    if (income >= 3000.01 && income <= 4500.00)
        printf("R$ %.2f\n", 1000*0.08+(income-3000)*0.18);
    if (income >= 4500.01)
        printf("R$ %.2f\n", 1000*0.08+1500*0.18+(income-4500)*0.28);

    return 0;
}
