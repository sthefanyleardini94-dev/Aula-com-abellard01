#include <stdio.h>

int main(void) {
    double consumo;
    double tarifa;
    double total;

    printf("Digite o consumo mensal em kWh: ");
    if (scanf("%lf", &consumo) != 1 || consumo < 0.0) {
        printf("Consumo invalido.\n");
        return 1;
    }

    if (consumo <= 100.0) {
        tarifa = 0.40;
    } else if (consumo <= 250.0) {
        tarifa = 0.65;
    } else {
        tarifa = 0.90;
    }

    total = consumo * tarifa + 15.0;

    printf("Consumo: %.2f kWh\n", consumo);
    printf("Tarifa aplicada: R$ %.2f por kWh\n", tarifa);
    printf("Contribuicao de iluminacao: R$ 15.00\n");
    printf("Valor total da fatura: R$ %.2f\n", total);

    return 0;
}
