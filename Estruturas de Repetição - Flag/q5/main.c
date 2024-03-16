#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1;
    float quant, media, somatoria , maior_numero=0, menor_numero=0, num=0;

    while(cont){
        printf("informe um numero: ");
        scanf("%f", &num);
        somatoria +=num;
        quant++;
        printf("voce deseja continuar? (1 para SIM e 0 para NAO)\n");
        scanf("%d", &cont);
        if(maior_numero == 0 && menor_numero == 0){
            maior_numero = num;
            menor_numero = num;
        }
        else if(num > maior_numero){
            maior_numero = num;
        }
        else if(num < menor_numero){
            menor_numero = num;
        }


    }

    media = (somatoria/quant);
    printf("\nA media dos numeros inseridos e: %.2f\n", media);
    printf("\nO maior numero e: %.2f\n", maior_numero);
    printf("\nO menor numero e: %.2f\n", menor_numero);
    return 0;
}
