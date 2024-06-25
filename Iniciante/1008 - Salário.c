#include <stdio.h>

int main() { 
  int n, work_hours;
  float value;

  scanf("%d%d%f", &n, &work_hours, &value);
  printf("NUMBER = %d\n", n);
  printf("SALARY = U$ %.2f\n", work_hours*value);
  
  return 0;
}
