#include <stdio.h>

int main(void)
{
    int k;
    int pares = 0;
    int impares = 0;

    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &k) != 1 || k <= 0)
    {
        printf("Entrada invalida. O numero deve ser positivo.\n");
        return 1;
    }

    for (int numero = 1; numero <= k; numero++)
    {
        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
