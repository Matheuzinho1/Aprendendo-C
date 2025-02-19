#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int valor[60];

int main(void) {
    setlocale(LC_ALL,"Portuguese");

	int i;
	
    for(i = 0; i < 60; i++){
		valor[i] = i + 1;
        printf("%d\t", valor[i]); 
    }

    getchar();
}