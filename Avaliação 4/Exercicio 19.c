#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
setlocale (LC_ALL, "Portuguese");
	
float lado1, lado2, lado3;

//ENTRADA DE DADOS
printf("Insira o comprimento do primeiro lado do triângulo: ");
scanf("%f", &lado1);
printf("Insira o comprimento do segundo lado do triângulo: ");
scanf("%f", &lado2);
printf("Insira o comprimento do terceiro lado do triângulo: ");
scanf("%f", &lado3);

//PROCESSAMENTO E SAIDA DE DADOS
if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
if (lado1 == lado2 && lado2 == lado3){
printf("É um triângulo equilátero.\n");
} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
printf("É um triângulo isósceles.\n");
} else{
printf("É um triângulo escaleno.\n");
}
} else{
printf("Os valores inseridos não formam um triângulo.\n");
}

getch();
}


