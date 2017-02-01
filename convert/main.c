#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char v[] = "243", v2[10];
  int num;
  double numD;

  num = atoi(v);
  printf("int: %d\n", num);

  numD = (double)num;
  printf("double: %f\n", numD);

  sprintf( v2, "%.2f", numD);
  printf("Stringa: %s\n", v2);

  return 0;
}
