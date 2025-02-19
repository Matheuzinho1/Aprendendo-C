#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome [10];
char sobrenome [20];

void main(void){
	setlocale(LC_ALL, "Portuguese");
	
int i, pos;

for(i = 0; i < 10; i++){
	pos = i + 1;
	printf("Insira a %d letra do seu nome: ", pos);
	scanf("%c", &nome[i]);
	nome[i] = getchar();
}

for(i = 0; i < 10; i++){
	printf("%c", nome[i]);
}

for(i = 0; i < 10; i++){
	pos = i + 1;
	printf("Insira a %d letra do seu sobrenome: ", pos);
	scanf("%c", &sobrenome[i]);
	sobrenome[i] = getchar();
}
for(i = 0; i < 10; i++){
	printf("%c", sobrenome[i]);
}

	getch();
}
