#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
setlocale(LC_ALL, "portuguese");

//VARIAVEIS
float numero1, resultado;

//ENTRADA DE DADOS
printf("Insira o valor em real\n");
scanf("%f", &numero1);

//PROCESSAMENTO
resultado = numero1 * 0.19;
resultado = numero1 * 0.16;
resultado = numero1 * 0.20;
resultado = numero1 * 30.44;
resultado = numero1 * 172.10 ;

//SAIDA DE DADOS
printf("O valor em Euros �: %.2f\n",resultado);
printf("O valor em Libras �: %.2f\n",resultado);
printf("O valor em D�lares �: %.2f\n",resultado);
printf("O valor em Ienes �: %.2f\n",resultado);
printf("O valor em Pesos argentinos �: %.2f",resultado);

getch();
}
