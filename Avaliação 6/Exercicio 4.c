#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[5][50] = {"Ana","Julia","Anderson","Carlos","Gusm�o"};
float altura[5];

int main(void) {
    setlocale(LC_ALL, "Portuguese");

	int i;
    
    altura[0] = 1.67;
    altura[1] = 1.80;
    altura[2] = 1.77;
    altura[3] = 1.45;
    altura[4] = 1.32;

    printf("Nomes e Alturas:\n");
    for (i = 0; i < 5; i++){
        printf("%s %.2f\n", nome[i], altura[i]);
    }

    getchar();
}