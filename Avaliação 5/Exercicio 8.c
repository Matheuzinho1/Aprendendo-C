#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, i = 0, maior;

    printf("Insira o n�mero de vezes que deseja digitar: ");
    scanf("%d", &n1);

    if (n1 > 0) {
        printf("Digite o n�mero: ");
        scanf("%d", &n2);
        maior = n2;

        for (i = 1; i < n1; i++) {
            printf("Digite o n�mero %d: ", i + 1);
            scanf("%d", &n2);

            if (n2 > maior) {
                maior = n2; 
            }
        }

        printf("O maior n�mero digitado �: %d\n", maior);
    } else {
        printf("O n�mero de vezes deve ser maior que 0.\n");
    }
}


