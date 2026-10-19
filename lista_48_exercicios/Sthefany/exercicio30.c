#include <stdio.h>

int main(void) {
    int id;
    int bloqueado;

    printf("Digite o identificador do cracha: ");
    if (scanf("%d", &id) != 1) {
        printf("Identificador invalido.\n");
        return 1;
    }

    printf("O usuario esta suspenso? (1 para sim, 0 para nao): ");
    if (scanf("%d", &bloqueado) != 1 || (bloqueado != 0 && bloqueado != 1)) {
        printf("Situacao de suspensao invalida.\n");
        return 1;
    }

    if (id == 1001 && !bloqueado) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}
