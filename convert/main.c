#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char v[] = "243";
  int num;
  double numD;

  num = atoi(v);
  printf("int: %d\n", num);

  numD = (double)num;
  printf("double: %lf\n", numD);

  sprintf( v, "%0.2lf", numD);
  printf("Stringa: %s\n", v);

  return 0;
}
