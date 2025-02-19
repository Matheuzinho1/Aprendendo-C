#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

char nome[5][50]; 
float altura[5];

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int i;

    for (i = 0; i < 5; i++){
        printf("Insira o %d� nome:\n", i + 1); 
        scanf("%s", nome[i]); 
    }
    
    for (i = 0; i < 5; i++){
        printf("Insira a %d� altura:\n", i + 1); 
        scanf("%f", &altura[i]); 
    }
    
    printf("Nomes e alturas:\n");
    for (i = 0; i < 5; i++){
        printf("%s %.2f\n", nome[i], altura[i]); 
    }

    getchar();
}