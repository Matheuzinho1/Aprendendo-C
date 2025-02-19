#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
setlocale(LC_ALL, "Portuguese");
	
//VARIAVEIS
int num, res;
		
//ENTRADA DE DADOS
printf("Insira o valor monet�rio para achar a porcentagem: ");
scanf("%d", &num);
	
//PROCESSAMENTO
res = (num * 5) / 100 ;
	
//SAIDA DE DADOS
printf("O resultado da conta �: %d\n", res);	

getch();
}
