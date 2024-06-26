#include <stdio.h>

int main() { 
  int code1, code2, qty_pieces1, qty_pieces2;
  float value_pieces1, value_pieces2;

  scanf("%d%d%f %d%d%f", &code1, &qty_pieces1, &value_pieces1,
                         &code2, &qty_pieces2, &value_pieces2);
  printf("VALOR A PAGAR: R$ %.2f\n", qty_pieces1*value_pieces1 + qty_pieces2*value_pieces2);
  
  return 0;
}
