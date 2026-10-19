#include <stdio.h>

int main(void) {
    double renda;
    double parcela;
    int inadimplente;

    printf("Digite a renda mensal bruta: R$ ");
    if (scanf("%lf", &renda) != 1 || renda <= 0.0) {
        printf("Renda invalida.\n");
        return 1;
    }

    printf("Digite o valor da parcela pretendida: R$ ");
    if (scanf("%lf", &parcela) != 1 || parcela < 0.0) {
        printf("Valor da parcela invalido.\n");
        return 1;
    }

    printf("Possui inadimplencia ativa? (0 para nao, 1 para sim): ");
    if (scanf("%d", &inadimplente) != 1 ||
        (inadimplente != 0 && inadimplente != 1)) {
        printf("Situacao cadastral invalida.\n");
        return 1;
    }

    if (parcela <= renda * 0.30 && inadimplente == 0) {
        printf("Credito aprovado.\n");
    } else {
        printf("Credito recusado.\n");
    }

    return 0;
}
