#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (void){
setlocale (LC_ALL, "Portuguese");

//VARIAVEIS	
float p1, p2, p3;
float m;

//ENTRADA DE DADOS	
printf ("Insira o primeiro pre�o: ");
scanf("%f", &p1);
printf ("Insira o segundo pre�o: ");
scanf("%f", &p2);
printf ("Insira o terceiro pre�o: ");
scanf("%f", &p3);

//PROCESSAMENTO
if (p1 < p2){
	m = p1;
}
else{
	m = p2;
}
//---------------	
if (m < p3){
	m = m;	
}
else{
	m = p3;
}
//---------------	
if (m < p1){
	m = m;
}
else{
m = p1;	
}
//---------------		
if (m < p3){
	m = m;
}
else{
	m = p3;
}
//---------------		
if (m < p1){
	m = m;
}
else{
	m = p1;
}
//---------------		
if (m < p2){
	m = m;	
}
else{
	m = p2;
}
//SAIDA DE DADOS
printf("O menor valor �: %.2f", m);
	
getch();
}
