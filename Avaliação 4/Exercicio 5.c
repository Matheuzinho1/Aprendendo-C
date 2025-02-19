#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale(LC_ALL,"Portuguese");
	
//VARIAVEIS
float num1, num2;
float res;
	
//ENTRADA DE DADOS
printf("Insira o numero da base:");
scanf("%f", &num1);
printf("Insira o numero do comprimento:");
scanf("%f", &num2);
	
//PROCESSAMENTO
res = num1 *num2;
	
//SAIDA DE DADOS
printf("O resutado da area do quadrado �: %.2f", res);

getch();
}
