#include <stdio.h>

int main(void) {
    int idade;
    int anosContribuicao;

    printf("Digite sua idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Idade invalida.\n");
        return 1;
    }

    printf("Digite os anos de contribuicao: ");
    if (scanf("%d", &anosContribuicao) != 1 || anosContribuicao < 0) {
        printf("Tempo de contribuicao invalido.\n");
        return 1;
    }

    if (idade >= 65 || anosContribuicao >= 35) {
        printf("Aposentadoria autorizada.\n");
    } else {
        printf("Aposentadoria nao autorizada: requisitos nao preenchidos.\n");
    }

    return 0;
}
