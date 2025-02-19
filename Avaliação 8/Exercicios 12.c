#include <stdio.h>
#include <stdbool.h>

// Fun��o para verificar se um ano � bissexto
bool anoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Fun��o para verificar se uma data � v�lida
bool dataValida(int ano, int mes, int dia) {
    // Verifica o intervalo do ano
    if (ano < 1900) return false;

    // Verifica o intervalo do m�s
    if (mes < 1 || mes > 12) return false;

    // Verifica o intervalo do dia, considerando os dias de cada m�s
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

    // Solicita ao usu�rio para digitar a data
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Digite o m�s: ");
    scanf("%d", &mes);
    printf("Digite o dia: ");
    scanf("%d", &dia);

    // Verifica se a data � v�lida e exibe o resultado
    if (dataValida(ano, mes, dia)) {
        printf("A data %d/%d/%d � v�lida.\n", dia, mes, ano);
    } else {
        printf("A data %d/%d/%d n�o � v�lida.\n", dia, mes, ano);
    }

    return 0;
}

