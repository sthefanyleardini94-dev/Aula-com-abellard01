#include <stdio.h>

int main(void) {
    double massa;
    double altura;
    double imc;

    printf("Digite a massa em quilogramas: ");
    if (scanf("%lf", &massa) != 1 || massa <= 0.0) {
        printf("Massa invalida.\n");
        return 1;
    }

    printf("Digite a altura em metros: ");
    if (scanf("%lf", &altura) != 1 || altura <= 0.0) {
        printf("Altura invalida.\n");
        return 1;
    }

    imc = massa / (altura * altura);
    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: magreza.\n");
    } else if (imc < 25.0) {
        printf("Classificacao: peso adequado.\n");
    } else if (imc < 30.0) {
        printf("Classificacao: sobrepeso.\n");
    } else {
        printf("Classificacao: obesidade.\n");
    }

    return 0;
}
