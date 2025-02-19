#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um ano é bissexto
bool anoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para verificar se uma data é válida
bool dataValida(int ano, int mes, int dia) {
    // Verifica o intervalo do ano
    if (ano < 1900) return false;

    // Verifica o intervalo do mês
    if (mes < 1 || mes > 12) return false;

    // Verifica o intervalo do dia, considerando os dias de cada mês
    if (dia < 1) return false;

    int diasNoMes;
    if (mes == 2) {
        diasNoMes = anoBissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasNoMes = 30;
    } else {
        diasNoMes = 31;
    }

    return dia <= diasNoMes;
}

int main() {
    int ano, mes, dia;

    // Solicita ao usuário para digitar a data
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o dia: ");
    scanf("%d", &dia);

    // Verifica se a data é válida e exibe o resultado
    if (dataValida(ano, mes, dia)) {
        printf("A data %d/%d/%d é válida.\n", dia, mes, ano);
    } else {
        printf("A data %d/%d/%d não é válida.\n", dia, mes, ano);
    }

    return 0;
}

