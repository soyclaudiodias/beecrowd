#include <stdio.h>

int main() {
  int time, speed;
  float space;

  scanf("%d%d", &time, &speed);

  space = (speed*time);

  printf("%.3f\n", space/12);

  return 0;
}
