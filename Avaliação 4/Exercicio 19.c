#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale (LC_ALL, "Portuguese");
	
float lado1, lado2, lado3;

//ENTRADA DE DADOS
printf("Insira o comprimento do primeiro lado do tri�ngulo: ");
scanf("%f", &lado1);
printf("Insira o comprimento do segundo lado do tri�ngulo: ");
scanf("%f", &lado2);
printf("Insira o comprimento do terceiro lado do tri�ngulo: ");
scanf("%f", &lado3);

//PROCESSAMENTO E SAIDA DE DADOS
if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
if (lado1 == lado2 && lado2 == lado3){
printf("� um tri�ngulo equil�tero.\n");
} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
printf("� um tri�ngulo is�sceles.\n");
} else{
printf("� um tri�ngulo escaleno.\n");
}
} else{
printf("Os valores inseridos n�o formam um tri�ngulo.\n");
}

getch();
}


