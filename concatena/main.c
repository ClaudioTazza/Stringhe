#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char v[] = "Ciao ", v2[] = "Mondo", v3[50] = ""; 

  strcat(v3, v);
  strcat(v3, v2);

  printf("%s\n", v3);
  
  return 0;
}
