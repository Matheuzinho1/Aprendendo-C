#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
setlocale(LC_ALL, "Portuguese");

//VARIAVEIS
float n1, n2, r;

//ENTRADA DE DADOS
printf("Insira a quantidade de lados: ");
scanf("%f", &r);

//NÃƒO Ã‰ UM POLIGONO (OS CODIGOS ABAIXO Ã‰ PROCESSAMENTO E SAIDA DE DADOS)
if (r == 1){
printf ("Ele não é um poligono\n");
}
if (r == 2){
printf ("Ele não é um poligono\n");
}

//TRIANGULO
if (r == 3){
printf ("O poligono é um triangulo\n\n");
printf("Insira o valor da altura: ");
scanf("%f", &n1);
printf("Insira o valor da base: ");
scanf("%f", &n2);
printf("O seu resultado é %2.f\n", n1 * n2 / 2);
}

//QUADRADO
if (r == 4){
printf ("O poligono é um quadrado\n\n");
printf("Insira o valor da altura: ");
scanf("%f", &n1);
printf("Insira o valor da base: ");
scanf("%f", &n2);
printf("O seu resultado é %2.f\n", n1 * n2);
} 

//PENTAGONO
if (r == 5){
printf ("O poligono é um pentagono\n");
}

//NÃƒO IDENTIFICADO
if (r > 5){
printf ("Poligono não identificado\n");
}

getch();
}
