#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
setlocale (LC_ALL, "Portuguese");

//VARIAVEIS
int s, n, n1;

//ENTRADA DE DADOS
printf("Insira a senha da conta: ");
scanf("%d", &n1);

//PROCESSAMENTO E SAIDA DE DADOS
if (n1 == 1234){
    printf("ACESSO PERMITIDO");
} else {
    printf("ACESSO NEGADO");
}

getch();
}

