#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

void main(void) {

    setlocale(LC_ALL, "Portuguese");

    int n1, n2, i, soma;

    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("Digite um n�mero: ");
    scanf("%d", &n2);
    printf("\nS�rie de RICCI:\n\n");
    printf("%d\n", n2);


    for(i = n1; i < 19; i++) {

        soma =  n1 + n2;
        n1 = n2;
        n2 = soma;

        printf("%d\n", soma);
    }
}
