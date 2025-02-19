#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3];
    int i, j;
    int res1, res2, res3, res4, res5, res6;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o número da linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    res1 = matriz[0][0] * matriz[1][1] * matriz[2][2];
    res2 = matriz[0][1] * matriz[1][2] * matriz[2][0];
    res3 = matriz[0][2] * matriz[1][0] * matriz[2][1];

    res4 = matriz[0][2] * matriz[1][1] * matriz[2][0];
    res5 = matriz[0][1] * matriz[1][0] * matriz[2][2];
    res6 = matriz[0][0] * matriz[1][2] * matriz[2][1];

    int resfinal = (res1 + res2 + res3) - (res4 + res5 + res6);

    printf("O resultado final da matriz é: %d\n", resfinal);
}
