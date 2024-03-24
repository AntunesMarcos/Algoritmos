#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
int quantidadep= 0, quantidadei = 0;
int somap = 0, somai = 0;
float mediap = 0, mediai = 0, mediag = 0;

printf("Digite numeros positivos (0 para encerrar):\n");

do {
printf("Digite um numero: ");
scanf("%d", &n);

if (n> 0) {

if (n % 2 == 0) {
quantidadep++;
somap += n;
} else {
    quantidadei++;
    somai += n;
    }
}
} while (n != 0);


if (quantidadep > 0) {
mediap = (float)somap / quantidadep;
}
if (quantidadei > 0) {
mediai = (float)somai / quantidadei;
}
mediag = (float)(somap + somai) / (quantidadep + quantidadei);


printf("\nQuantidade de numeros pares: %d\n", quantidadep);
printf("Quantidade de numeros impares: %d\n", quantidadei);
printf("Media dos valores pares: %.2f\n", mediap);
printf("Media dos valores impares: %.2f\n", mediai);
printf("Media geral dos numeros lidos: %.2f\n", mediag);

return 0;
}
