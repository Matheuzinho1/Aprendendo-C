#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	printf("Hello World\n");
						// Variáveis:
						// Int   	--> Número Inteiro --> %d	
						// float 	--> Numero Decimal --> %f
						// char  	--> Caractere	   --> %c

	int x; 				// Declaração de variável chamada X
	int y = 2;   		// Declaração de variavel chamada Y
	       	    		// Com atribuição de valor  2
	int z = 3;			// Declaração de variaável chamada Z
	
	x = 10;				// Atribui a x o valor 10
	y = 14;				// Atribui a y o valor 14
	x = 20;				// Atribui a x o valor 20
	y = 4;				// Atribui a x o valor 20
	
	x = x + y;			// Atribui a x o valor de x + y
	y = y + y - x;  	// Valor de y é igual a -12
	z = (-1 * y) / x;   // Multiplica posterior divide
	
	printf ("O valor de X é: %d\n", x);
	printf ("O valor de Y é: %d\n", y);
	printf ("O valor de Z é: %f\n", z);
}
