#include <stdio.h>

int main(void) {
    double media;
    double frequencia;

    printf("Digite a media semestral: ");
    if (scanf("%lf", &media) != 1 || media < 0.0 || media > 10.0) {
        printf("Media invalida.\n");
        return 1;
    }

    printf("Digite o percentual de frequencia: ");
    if (scanf("%lf", &frequencia) != 1 || frequencia < 0.0 || frequencia > 100.0) {
        printf("Frequencia invalida.\n");
        return 1;
    }

    if (media >= 6.0 && frequencia >= 75.0) {
        printf("Aprovado diretamente.\n");
    } else if (media >= 4.0 && media < 6.0 && frequencia >= 75.0) {
        printf("Encaminhado para exame de recuperacao.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}
