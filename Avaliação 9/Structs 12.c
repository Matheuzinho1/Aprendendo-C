#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define NUM_CARTAS 10
#define CARTAS_POR_JOGADOR 5

typedef struct {
    char naipe[10]; 
    int valor;      
} Carta;

void exibirCartas(Carta cartas[], int numCartas, int jogador) {
	int i;
	
    printf("Cartas do Jogador %d:\n", jogador + 1);
    for (i = 0; i < numCartas; i++) {
        printf("Carta %d: %d de %s\n", i + 1, cartas[i].valor, cartas[i].naipe);
    }
    printf("\n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int jogador, i, j;
	
    Carta baralho[NUM_CARTAS] = {
        {"Copas", 1}, {"Copas", 2}, {"Copas", 3}, {"Copas", 4}, {"Copas", 5},
        {"Ouros", 1}, {"Ouros", 2}, {"Ouros", 3}, {"Ouros", 4}, {"Ouros", 5}
    };

    Carta cartasJogadores[2][CARTAS_POR_JOGADOR]; 
    int indice = 0;

    srand(time(NULL)); 

    for (i = 0; i < NUM_CARTAS; i++) {
        j = rand() % NUM_CARTAS; 
        Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }

    for (jogador = 0; jogador < 2; jogador++) {
        for (i = 0; i < CARTAS_POR_JOGADOR; i++) {
            cartasJogadores[jogador][i] = baralho[indice++];
        }
    }

    for (jogador = 0; jogador < 2; jogador++) {
        exibirCartas(cartasJogadores[jogador], CARTAS_POR_JOGADOR, jogador);
    }

    return 0;
}

