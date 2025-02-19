#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

//VARIAVEIS
int i = 0;

//IMPRESSÃO DOS NUMEROS ATE 999
    for (i = 0; i <= 999; i++){
        printf("%d\n", i);
    }
}

