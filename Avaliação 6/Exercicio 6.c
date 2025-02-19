#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int x[30];

int main(void) {	
	setlocale(LC_ALL, "portuguese");

	int i, num, num2;
	
	printf("Insira seu n�mero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){		
		for(i = 0; i < 30; i++){	
			x[i] = num += 2;		
			printf("%d\t", x[i]);
		}
	} else {
		(num2 = num + 1);
		for(i = 0; i < 30; i++){	
			x[i] = num2 += 2;		
			printf("Os %d\t", x[i]);
		}
	}
	
getchar();
}