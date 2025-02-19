#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char descricao[100];
} Compromisso;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    Compromisso compromisso;

    compromisso.data.dia = 5;
    compromisso.data.mes = 11;
    compromisso.data.ano = 2024;

    compromisso.horario.hora = 14;
    compromisso.horario.minutos = 30;
    compromisso.horario.segundos = 0;

    strcpy(compromisso.descricao, "Reunião com equipe de desenvolvimento");

    printf("Compromisso: %s\n", compromisso.descricao);
    printf("Data: %02d/%02d/%04d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horário: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    return 0;
}

