#include <stdio.h>

int main() { 
  char name;
  double fixed_salary, sales;

  scanf("%s%lf%lf", &name, &fixed_salary, &sales);
  printf("TOTAL = R$ %.2lf\n", fixed_salary + sales*0.15);
  
  return 0;
}
