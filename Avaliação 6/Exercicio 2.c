#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int valor[15];

int main(void) {
    setlocale(LC_ALL,"Portuguese");

	int i;

    for(i = 0; i < 15; i++) {
        printf("Insira o %d� valor: ", i+1);
        scanf("%d", &valor[i]); 
    }

    printf("Os valores inseridos s�o: ");
    for(i = 0; i < 15; i++) {
        printf("%d\t", valor[i]); 
    }

    getchar();
}

