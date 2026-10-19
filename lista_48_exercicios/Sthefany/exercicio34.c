#include <stdio.h>

int main(void) {
    int quantidade;
    double valor;
    double soma = 0.0;

    printf("Digite a quantidade de medicoes: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("A quantidade deve ser um inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite a medicao %d: ", i);
        if (scanf("%lf", &valor) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
        soma += valor;
    }

    printf("Somatorio: %.2f\n", soma);
    printf("Media aritmetica: %.2f\n", soma / quantidade);

    return 0;
}
