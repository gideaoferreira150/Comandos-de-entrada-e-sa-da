#include <stdio.h>

int main() {
    float num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("A soma de %.2f e %.2f é %.2f\n", num1, num2, soma);

    return 0;
}
