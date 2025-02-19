#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define MAX 100

typedef struct {
    char nome[MAX];
    int dia, mes, ano; 
    char cep[9]; 
} DadosPessoais;

int validarData(int dia, int mes, int ano) {
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
        return 0; 
    }
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        return 0; 
    }
    if (mes == 2 && dia > 28) {
        return 0; 
    }
    return 1; 
}

int validarCEP(char* cep) {
	int i;

    if (strlen(cep) != 11) return 0;

    for (i = 0; i < 11; i++) {
        if (cep[i] < '0' || cep[i] > '9') {
            return 0; 
        }
    }
    return 1; 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    DadosPessoais usuario;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", usuario.nome); 

    printf("Digite sua data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &usuario.dia, &usuario.mes, &usuario.ano); 

    printf("Digite seu CEP (somente números): ");
    scanf("%s", usuario.cep);

    if (validarData(usuario.dia, usuario.mes, usuario.ano) && validarCEP(usuario.cep)) {
        printf("\nDados Pessoais:\n");
        printf("Nome: %s\n", usuario.nome);
        printf("Data de Nascimento: %02d/%02d/%04d\n", usuario.dia, usuario.mes, usuario.ano);
        printf("CEP: %s\n", usuario.cep);
    } else {
        printf("\nAlguma informação está errada.\n");
        if (!validarData(usuario.dia, usuario.mes, usuario.ano)) {
            printf("Data de Nascimento inválida. Use o formato DD MM AAAA.\n");
        }
        if (!validarCEP(usuario.cep)) {
            printf("CEP inválido. O CEP deve ter 11 dígitos numéricos.\n");
        }
    }

    return 0;
}

