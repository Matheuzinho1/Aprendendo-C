#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
	
//VARIAVEIS
int i, i2 =0 ;

//C�LCULO
for (i = 0; i <= 100; i++){
	i2 += i;
}

//IMPRESS�O DO RESULTADO
printf("%d\n", i2);
}
