#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char v[] = "10 2.00";
  int num;
  double numD, prodotto;

  sscanf(v ,"%d %lf", &num, &numD);
  
  printf("Num: %d\n", num);
  printf("Double: %f\n", numD);

  prodotto = num * numD;

  printf("Prodotto: %f\n", prodotto);
  
  return 0;
}
