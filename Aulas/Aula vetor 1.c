#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int impar[10];

void main(void){
	setlocale(LC_ALL,"Portuguese");
	
	impar[0] = 9;
	impar[6] = 5;
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Insira um numero:");
		scanf("%d", &impar[1]);
	}
	
	for(i = 0; i < 10; i++){
		printf("%d\t", impar[1]);
	}
	getch();
}
