#include <stdio.h>
#include <ctype.h>

int main(){
  int c, cond;
  c = 's';

  cond = isalnum( c );

  if(cond == 1){
    printf("vero\n");}

  else
    printf("falso\n");

  return 0;
}

