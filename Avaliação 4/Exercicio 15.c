#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (void){
setlocale(LC_ALL,"Portuguese");

//VARIAVEIS	
float res, A1, A2;

//ENTRADA DE DADOS	
printf ("Insira a primeira altura: ");
scanf ("%f", &A1);
printf ("Insira a segunda altura: ");
scanf ("%f", &A2);

//PROCESSAMENTO	
if(A1 == A2){
	res = 1;
}

if (A1 > A2){
	res = A1;
}
else{
	res = A2;
}

//SAIDA DE DADOS
printf("A maior altura é: %2.f", res);
getch();
}
