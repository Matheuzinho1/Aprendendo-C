#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Funcionario {
    char nome[50];
    int idade;
    char sexo;
    char cpf[15];
    struct Data dataNascimento;
    int codigoSetor;
    char cargo[30];
    float salario;
};

int main() {
    setlocale(LC_ALL, "Portuguese");


    struct Funcionario funcionario;

    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]s", funcionario.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario.idade);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &funcionario.sexo);

    printf("Digite o CPF (somente números): ");
    scanf(" %s", funcionario.cpf);

    printf("Digite a data de nascimento (dia mês ano): ");
    scanf("%d %d %d", &funcionario.dataNascimento.dia, &funcionario.dataNascimento.mes, &funcionario.dataNascimento.ano);

    printf("Digite o código do setor (0-99): ");
    scanf("%d", &funcionario.codigoSetor);

    printf("Digite o cargo: ");
    scanf(" %[^\n]s", funcionario.cargo);

    printf("Digite o salário: ");
    scanf("%f", &funcionario.salario);


    printf("\n--- Dados do Funcionário ---\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %02d/%02d/%04d\n", funcionario.dataNascimento.dia, funcionario.dataNascimento.mes, funcionario.dataNascimento.ano);
    printf("Código do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: R$ %.2f\n", funcionario.salario);

    return 0;
}
