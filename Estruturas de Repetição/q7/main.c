#include <stdio.h>
#include <stdlib.h>

int main() {
    int primo, n1;

    do {
        printf("\nDigite um numero (digite 0 para encerrar): ");
        scanf("%d", &n1);

        if (n1 <= 1) {
            printf("\nNumeros menores ou iguais a 1 nao sao primos\n");
        continue;
        }
        else{
            primo=1;
        }
        for (int i = 2; i * i <= n1; i++) {
            if (n1 % i == 0) {
                primo=0;
            }
        }

        if (n1 != 0) {
            if (primo) {
                printf("\n%d e primo.\n", n1);
            } else {
                printf("\n%d nao e primo.\n", n1);
            }
        }
    } while (n1 != 0);

    return 0;
}
