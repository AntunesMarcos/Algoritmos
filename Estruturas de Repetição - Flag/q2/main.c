#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1;
    float mediaC, mediaR, mediaB, comer=0, resi=0, ener, tipo, quntR=0, quntC=0;

    while(cont){
        printf("Esta em uma residencia ou um comercio? (Residencia=1/Comercio=2)\n");
        scanf("%f", &tipo);
        printf("Informe a quantidade de energia que voce gasta: \n");
        scanf("%f", &ener);


        if(tipo == 1){
            resi++;
            quntR+=ener;
        }
        else if(tipo == 2){
            comer++;
            quntC+=ener;
        }else{
            printf("\nLocal informado invalido, digite 1 para Residencia e 2 para Comercio ");
        }
        printf("\nDeseja continuar calculando a media de energia das pessoas? 1 para SIM e 0 para NAO\n");
        scanf("%d", &cont);

    }

    mediaR=(quntR/resi);
    mediaC=(quntC/comer);
    mediaB=(mediaC+mediaR)/(resi+comer);


    printf("\nA quantidade de residencias e: %.f", resi);
    printf("\nA quandidade de comercios e: %.f", comer);
    printf("\nA media de consumo de energia das residencias e: %.2f", mediaR);
    printf("\nA media de consumo de energia dos comercios e: %.2f", mediaC);
    printf("\nA media de consumo de energia do bairro e: %.2f", mediaB);
    return 0;
}
