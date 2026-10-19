#include <stdio.h>

int main(void) {
    int inicio;
    int fim;
    int passo;

    printf("Digite o limite inferior, o limite superior e o passo: ");
    if (scanf("%d %d %d", &inicio, &fim, &passo) != 3 ||
        inicio > fim || passo <= 0) {
        printf("Entrada invalida. Informe inicio <= fim e passo positivo.\n");
        return 1;
    }

    printf("Percurso ascendente: ");
    for (int numero = inicio; numero <= fim; numero += passo) {
        printf("%d", numero);
        if (numero + passo <= fim) {
            printf(", ");
        }
    }

    printf("\nPercurso descendente: ");
    for (int numero = fim; numero >= inicio; numero -= passo) {
        printf("%d", numero);
        if (numero - passo >= inicio) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
