#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int x[30];

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int i, num, num2;

    printf("Insira seu n�mero: ");
    scanf("%d", &num);

    if (num % 2 == 1) {
        for (i = 0; i < 30; i++) {
            x[i] = num + 2 * i;
            if (x[i] % 3 == 0) {
                printf("PIM\t");
            } else {
                printf("%d\t", x[i]);
            }
        }
    } else {
        num2 = num + 1;
        for (i = 0; i < 30; i++) {
            x[i] = num2 + 2 * i;
            if (x[i] % 3 == 0) {
                printf("PIM\t");
            } else {
                printf("%d\t", x[i]);
            }
        }
    }

    getchar();
}