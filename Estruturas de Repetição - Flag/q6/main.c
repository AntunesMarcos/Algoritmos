#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1, num=0, fatorial;

    while(cont){
        printf("informe um numero: ");
        scanf("%d", &num);
        fatorial=1;


        while(num > 0){
            fatorial*=num;
            num-=1;
        }

    printf("\nO fatorial e: %d",fatorial);
    printf("\ndeseja continuar? (1 para SIM e 0 para NAO)\n");
    scanf("%d", &cont);
    }

    return 0;
}
