#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char v[] = "243";
  int num;

  num = atoi(v);
  printf("int: %d\n", num);

  num = (double)num;
  printf("double: %lf\n", num);

  sprintf( v, "%lf", num);
  puts( v );

  return 0;
}
