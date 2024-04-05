#include <stdio.h>
#include <stdlib.h>

void dolar(float r, float d){
    float conD;
    conD = (r/d);
    printf("Voce tera %.2f dolar", conD);

}
void euro(float r, float e){
    float conE;
    conE = (r/e);
    printf("Voce tera %.2f euros", conE);
}
void libra(float r, float l){
    float conL;
    conL = (r/l);
    printf("Voce tera %.2f libras", conL);
}
int main()
{
    int escolha;
    while( escolha != 4){

        printf("\nPara qual moeda voce vai querer converter?\n(1) dolar\n(2) euro\n(3) libra\n(4) encerrar a conversao\n ");
        scanf("%d", &escolha);
        if(escolha >4 || escolha < 1 ){
        printf("opcao invalida\n");
    }
        if(escolha == 1){
        float r, d;
        printf("informe quanto que voce vai querer converter: ");
        scanf("%f", &r);
        printf("informe quanto que esta a cotacao do dolar: ");
        scanf("%f", &d);
        dolar(r, d);
    }

    if(escolha == 2){
        float r, e;
        printf("informe quanto que voce vai querer converter: ");
        scanf("%f", &r);
        printf("informe quanto que esta a cotacao do euro: ");
        scanf("%f", &e);
        euro(r, e);
    }
    if(escolha == 3){
        float r, l;
        printf("informe quanto que voce vai querer converter: ");
        scanf("%f", &r);
        printf("informe quanto que esta a cotacao da libra: ");
        scanf("%f", &l);
        libra(r,l);
    }


    }


    return 0;
}
