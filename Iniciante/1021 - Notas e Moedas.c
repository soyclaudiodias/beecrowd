#include <stdio.h>
#include <math.h>

int main() {
  float value, moedas[] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};
  int notas[] = {100, 50, 20, 10, 5, 2};

  scanf("%f", &value);
  printf("NOTAS:\n");
  for (int i = 0; i < 6; i++){
    printf("%.f nota(s) de R$ %.2f\n", floor(value/notas[i]), notas[i]/1.0);
    value -= notas[i]*floor(value/notas[i]);
  }

  printf("MOEDAS:\n");
  for (int i = 0; i < 5; i++){
    printf("%.f moeda(s) de R$ %.2f\n", floor(value/moedas[i]), moedas[i]);
    value -= moedas[i]*floor(value/moedas[i]);
  }

  printf("%.f moeda(s) de R$ %.2f\n", (value/moedas[5]), moedas[5]);

  return 0;
}
