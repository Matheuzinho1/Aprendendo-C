#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
setlocale(LC_ALL, "portuguese");

//VARIAVEIS
int numero1, numero2, resultado, resultado2;

//ENTRADA DE DADOS
printf("Insira o valor da largura em cent�metros\n");
scanf("%d", &numero1);	
printf("Insira o valor do comprimento em cent�metros\n");
scanf("%d", &numero2);
	
//PROCESSAMENTO
resultado = numero1 / 30 + 1;
resultado2 = numero2 / 30 + 1;

//SAIDA DE DADOS
printf("A quantidade de Lajotas para largura �: %d\n",resultado);
printf("A quantidade de Lajotas para altura �: %d\n",resultado2);	
printf("A quantidade de Lajotas total �: %d\n",resultado*resultado2);
	
getch();	
}
