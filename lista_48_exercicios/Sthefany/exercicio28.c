#include <stdio.h>

int main(void) {
    int ano;

    printf("Digite um ano com quatro digitos: ");
    if (scanf("%d", &ano) != 1 || ano < 1000 || ano > 9999) {
        printf("Ano invalido.\n");
        return 1;
    }

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}
