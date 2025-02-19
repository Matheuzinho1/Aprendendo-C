#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numA[200];

int main(void) { 
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
    int i; 

    for (i = 0; i < 200; i++) {
        numA[i] = rand() % 300; 
        printf("%d\n", numA[i]); 
    }

    getchar();
}