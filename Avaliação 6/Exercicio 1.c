#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float valor[8];

int main(void) {
    setlocale(LC_ALL,"Portuguese");
	
    int i;

    for(i = 0; i < 8; i++) {
        printf("Insira o %dº valor: ", i+1);
        scanf("%f", &valor[i]); 
    }

    printf("Os valores inseridos são: ");
    for(i = 0; i < 8; i++) {
        printf("%.2f\t", valor[i]); 
    }

    getchar();
}

