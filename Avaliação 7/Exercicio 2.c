#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

float num[10];

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float m, res[10];
    int i;
    
    printf("Insira 10 números: ");
    for(i = 0; i < 10; i++){
        scanf("%f", &num[i]);
    }
    
    printf("\nInsira o número para multiplicar os anteriores: ");
    scanf("%f", &m);
    
    for(i = 0; i < 10; i++){
        res[i] = num[i] * m;
    }

    for(i = 0; i < 10; i++){
        printf("\nO resultado da conta %.2f * %.2f é %.2f", num[i], m, res[i]);
    }
}

