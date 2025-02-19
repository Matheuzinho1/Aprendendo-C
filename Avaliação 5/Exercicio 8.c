#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, i = 0, maior;

    printf("Insira o número de vezes que deseja digitar: ");
    scanf("%d", &n1);

    if (n1 > 0) {
        printf("Digite o número: ");
        scanf("%d", &n2);
        maior = n2;

        for (i = 1; i < n1; i++) {
            printf("Digite o número %d: ", i + 1);
            scanf("%d", &n2);

            if (n2 > maior) {
                maior = n2; 
            }
        }

        printf("O maior número digitado é: %d\n", maior);
    } else {
        printf("O número de vezes deve ser maior que 0.\n");
    }
}


