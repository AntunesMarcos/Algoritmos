#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1;
    float mediaB, media, quant=0, con=0, maior_consumo=0, menor_consumo=0;

    while(cont){
        printf("Informe a quanridade de agua que voce gasta: ");
        scanf("%f", &quant);

        media+=quant;
        con++;
        printf("deseja continumar calculando a agua das pessoas (1 para SIM e 0 para NAO)\n");
        scanf("%d", &cont);

        if(menor_consumo == 0 && maior_consumo == 0){
            menor_consumo = quant;
            maior_consumo = quant;
        }
        else if(quant > maior_consumo){
        maior_consumo = quant;
        }
        else if(quant < menor_consumo){
        menor_consumo = quant;
    }
    }
    mediaB = (media/con)/1000;
    printf("A media de consumo do bairro e: %.3f m^3 de agua\n", mediaB);
    printf("O quantidade de consumidores analisados foi: %.f pessoas\n", con);
    printf("Maior consumo: %.3f em m^3 de agua\n", maior_consumo/1000);
    printf("Menor consumo: %.3f em m^3 de agua", menor_consumo/1000);
    return 0;
}
