#include <stdio.h>

int main() {
    float horasTrabalhadas, valorHora, salarioTotal;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salarioTotal = horasTrabalhadas * valorHora;

    printf("O salário total do funcionário é: R$ %.2f\n", salarioTotal);

    return 0;
}

