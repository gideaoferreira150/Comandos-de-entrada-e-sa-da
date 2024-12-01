#include <stdio.h>

int main() {
    float preco, valor_total;
    int quantidade;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    valor_total = preco * quantidade;

    printf("O valor total a ser pago é: R$ %.2f\n", valor_total);

    return 0;
}
