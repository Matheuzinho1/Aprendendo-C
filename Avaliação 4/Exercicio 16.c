#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (void){
setlocale(LC_ALL, "Portuguese");

//VARIAVEIS	
float n1, n2, res;

//ENTRADA DE DADOS	
printf ("Insira o primeiro n�mero: ");
scanf ("%f", &n1);
printf ("Insira o segundo n�mero: ");
scanf ("%f", &n2);
	
//PROCESSAMENTO
if(n1 == n2){
	res = 1;
}
    
if (n1 < n2){
    res = n1 / n2;
}
else{
	res = n2 / n1;
}

//SAIDA DE DADOS
printf ("O resultado da divis�o �: %.2f", res);
getch();
}
