#include <stdio.h>
#include <stdbool.h>

bool anoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

bool dataValida(int ano, int mes, int dia) {
    if (ano < 1900) return false;
    
    if (mes < 1 || mes > 12) return false;
    
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

    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o dia: ");
    scanf("%d", &dia);

    if (dataValida(ano, mes, dia)) {
        printf("A data %d/%d/%d é válida.\n", dia, mes, ano);
    } else {
        printf("A data %d/%d/%d não é válida.\n", dia, mes, ano);
    }

    return 0;
}

