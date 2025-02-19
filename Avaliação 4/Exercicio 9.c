#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");
	
//VARIAVEIS
float num1, num2, num3;
float res;

//ENTRADA DE DADOS
printf("Insira o lado:");
scanf("%f", &num1);
printf("Insira o lado:");
scanf("%f", &num2);
printf("Insira o lado:");
scanf("%f", &num3);

//PROCESSAMENTO
res = num2 * num2 - (4 * num1) * num3;
	
//SAIDA DE DADOS
printf("O resutado �: %.2f", res);

getch();
}
