#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
	
//VARIAVEIS
int i = 5, i2 = 3; 

//MULTIPLOS DE 5
  while (i <= 500) {
    printf("%d ", i); 
    i = i + 5;
  }

//MULTIPLOS DE 3
  while (i2 <= 300) {
	printf("%d ", i2); 
    i2 = i2 + 3;
  }  
}
