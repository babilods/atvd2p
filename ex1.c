#include <stdio.h>
#include <stdlib.h>

float calculaSalario(int pecas) {
    float salarioBase = 600.0;
    float adicional = 0.0;

    if (pecas <= 50) {
        adicional = 0.0;
    } else if (pecas <= 80) {
        adicional = (pecas - 50) * 0.5;
    } else {
        adicional = (pecas - 50) * 0.5 + (pecas - 80) * 0.75;
    }

    return salarioBase + adicional;
}

int main() {
    int numFuncionarios = 0;
    char nome[100];
    int pecas;
    float salario;

    printf("Digite o nome do funcionario (ou 'sair' para encerrar): ");
    scanf("%s", nome);

    while (strcmp(nome, "sair") != 0) {
        printf("Digite a quantidade de pecas fabricadas: ");
        scanf("%d", &pecas);

        salario = calculaSalario(pecas);

        printf("O salario total do funcionario %s e: R$ %.2f\n", nome, salario);

        numFuncionarios++;

        printf("Digite o nome do funcionario (ou 'sair' para encerrar): ");
        scanf("%s", nome);
    }

    printf("Total de funcionarios: %d\n", numFuncionarios);

    return 0;
}