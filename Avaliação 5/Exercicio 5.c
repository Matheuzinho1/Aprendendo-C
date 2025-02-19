#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main (void){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0; 
    int i;

    for (i = 26; i <= 200; i += 2) {
        soma += i;
        printf("Soma até %d: %d\n", i, soma); 
    }
    printf("A soma total dos números pares entre 25 e 200 é: %d\n", soma);
    getch();
}
