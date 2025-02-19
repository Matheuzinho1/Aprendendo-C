#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX_CARROS 5
#define MAX_MARCA 15

typedef struct {
    char marca[MAX_MARCA]; 
    int ano;              
    float preco;         
} Carro;

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    
    Carro carros[MAX_CARROS];
    float p;                 
    int i;


    for (i = 0; i < MAX_CARROS; i++) {
        printf("Digite a marca do carro %d: ", i + 1);
        scanf(" %[^\n]", carros[i].marca); 
        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano); 
        printf("Digite o preço do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco); 
    }

    do {
        printf("Digite um valor p (0 para sair): ");
        scanf("%f", &p);
        
        if (p > 0) {
            printf("\nCarros com preço menor que %.2f:\n", p);
            int encontrou = 0; 
            
            for (i = 0; i < MAX_CARROS; i++) {
                if (carros[i].preco < p) {
                    printf("Marca: %s, Ano: %d, Preço: %.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);
                    encontrou = 1; 
                }
            }
            if (!encontrou) {
                printf("Nenhum carro encontrado com preço menor que %.2f.\n", p);
            }
        }
    } while (p != 0)

    return 0;
}

