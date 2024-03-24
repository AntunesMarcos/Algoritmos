#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, n1, soma=0, posi=0, nega=0;
    float media=0, totalP=0, totalN=0;

    printf("informe a quantidade de numeros que voce deseja colocar: ");
    scanf("%d", &quantidade);

    for(int i=1; i <= quantidade; i++){
        printf("digite um numero: ");
        scanf("%d", &n1);
        soma+=n1;

        if(n1 > 0){
            posi++;
        }
        if(n1 < 0){
            nega++;
        }

    }

    totalP = ((float)posi/quantidade) * 100;
    totalN = ((float)nega/quantidade) * 100;
    media = ((float)soma/quantidade);
    printf("\nA media e: %.2f", media);
    printf("\nO poercentual de numeros positivos e: %.2f", totalP);
    printf("\nO poercentual de numeros negativos e: %.2f", totalN);

    return 0;
}
