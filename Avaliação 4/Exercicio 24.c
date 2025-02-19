#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (void){
setlocale(LC_ALL, "Portuguese");

//VARIAVEIS	
float n1, n2, res1, res2;

//ENTRADA DE DADOS, PROCESSAMENTO E SAIDA DE DADOS
printf ("Insira o sexo (1 = Feminino / 2 = Masculino): ");
scanf ("%f", &n1);

if (n1 == 1){
    printf ("O sexo selecionado é Feminino\n");
    printf ("Insira o altura: ");
    scanf ("%f", &n2);
    res1 = (72.7 * n2) - 58;
    printf ("O peso ideal é: %.2f\n", res1);
} else if(n1 == 2){
    printf ("O sexo selecionado é Masculino\n");
    printf ("Insira o altura: ");
    scanf ("%f", &n2);
    res2 = (62.1 * n2) - 44.7;
    printf ("O peso ideal é: %.2f\n", res2);
} 
getch();
}
