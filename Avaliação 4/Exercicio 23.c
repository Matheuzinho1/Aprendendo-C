#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (void){
setlocale(LC_ALL, "Portuguese");

//VARIAVEIS	
float n1, n2, n3, res1, res2, res3;

//ENTRADA DE DADOS	
printf ("Insira o primeiro número: ");
scanf ("%f", &n1);
printf ("Insira o segundo número: ");
scanf ("%f", &n2);
printf ("Insira o terceiro número: ");
scanf ("%f", &n3);

//PROCESSAMENTO
if (n1 > n2){
    res1 = n1;
    res2 = n2;
} else {
    res1 = n2;
    res2 = n1;
}

if (n3 > res1){
    res3 = res2;
    res2 = res1;
    res1 = n3;
} else {
    res3 = n3;
    res2 = n2; 
}

//SAIDA DE DADOS
printf ("O menor numero é: %.2f\n", res3);
printf ("O numero medio é: %.2f\n", res2);
printf ("O maior numero é: %.2f\n", res1);

getch();
}
