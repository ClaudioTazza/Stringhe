#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char v[] = "Ciao amico, come stai? Spero bene.";
  char *v2; 
  
  v2 = strtok(v, " ");
  
  while (v2 != NULL){
    puts(v2);
    v2 = strtok(NULL, " ");
  }

  return 0;
}
