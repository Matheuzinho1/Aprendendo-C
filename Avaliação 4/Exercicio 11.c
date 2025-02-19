#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
setlocale(LC_ALL, "portuguese");

//VARIAVEIS
int numero1, numero2, resultado, resultado2;

//ENTRADA DE DADOS
printf("Insira o valor da altura em cent�metros\n");
scanf("%d", &numero1);
printf("Insira o valor da largura em cent�metros\n");
scanf("%d", &numero2);

//PROCESSAMENTO
resultado = numero1 * numero1 + numero2 * numero2;
resultado2 = sqrt (resultado) / 2.5;
	
//SAIDA DE DADOS
printf("O valor em polegadas �: %d\n",resultado2);
	
getch();
}
