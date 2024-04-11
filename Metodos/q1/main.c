#include <stdio.h>
#include <stdlib.h>

void verificarTipoTriangulo(float lado1, float lado2, float lado3) {
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("\nTriangulo Equilatero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("\nTriangulo Isosceles\n");
        } else {
            printf("\nTriangulo Escaleno\n");
        }
    } else {
        printf("\nOs lados nao formam um triangulo\n");
    }
}

int main() {
    float lado1, lado2, lado3;
    while (lado1 != 0 || lado2 != 0 || lado3 != 0) {
        printf("Informe 0 para encerrar\n");
        if(lado1 == 0 && lado2 == 0 && lado3 == 0){
            break;
        }
        printf("\nInforme o valor do lado 1: ");
        scanf("%f", &lado1);
        printf("\nInforme o valor do lado 2: ");
        scanf("%f", &lado2);
        printf("\nInforme o valor do lado 3: ");
        scanf("%f", &lado3);

        verificarTipoTriangulo(lado1, lado2, lado3);
    }
    return 0;
}
