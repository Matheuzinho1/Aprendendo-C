#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
setlocale(LC_ALL, "Portuguese");

//VARIAVEIS
int n1, n2, n3, n4, n5, m, sm;

//ENTRADA DE DADOS
printf("Insira o valor da primeira nota: ");
scanf("%d", &n1);
printf("Insira o valor da segunda nota: ");
scanf("%d", &n2);
printf("Insira o valor da terceira nota: ");
scanf("%d", &n3);
printf("Insira o valor da quarta nota: ");
scanf("%d", &n4);
printf("Insira o valor da quinta nota: ");
scanf("%d", &n5);

//PROCESSAMENTO
if (n1 > n2){
    m = n1;
    sm = n2;
} else {
    m = n2;
    sm = n1;
}

if (n3 > m){
    sm = m;
    m = n3;
} else if (n3 > sm){
    sm = n3;
}

if (n4 > m){
    sm = m;
    m = n4;
} else if (n4 > sm){
    sm = n4;
}

if (n5 > m){
    sm = m;
    m = n5;
} else if (n5 > sm){
    sm = n5;
}

//SAIDA DE DADOS
printf("A maior nota é: %d\n", m);
printf("A segunda maior nota é: %d", sm);

getch();
}

