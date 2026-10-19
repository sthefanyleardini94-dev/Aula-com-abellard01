#include <stdio.h>

int main(void) {
    double ladoA;
    double ladoB;
    double ladoC;

    printf("Digite os tres lados do triangulo: ");
    if (scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC) != 3 ||
        ladoA <= 0.0 || ladoB <= 0.0 || ladoC <= 0.0) {
        printf("Entrada invalida. Os lados devem ser positivos.\n");
        return 1;
    }

    if (ladoA < ladoB + ladoC &&
        ladoB < ladoA + ladoC &&
        ladoC < ladoA + ladoB) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("Triangulo equilatero.\n");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
