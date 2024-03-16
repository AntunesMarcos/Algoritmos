#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1, cara=0, coroa=0, jogada;

    while(cont){
        printf("Informe qual lado da moedo voce quer escolher: (Cara=1 / Coroa=2)");
        scanf("%d", &jogada);

        if(jogada == 1){
            cara++;
        }else if( jogada == 2){
            coroa++;
        }else{
            printf("\nnumero informado invalido, digite 1 para cara e 2 para coroa\n");
        }
        printf("Deseja continuar? (1 sim | 0 nao)\n");
        scanf("%d", &cont);
    }

    printf("Ocorrencias: %d", cara+coroa);
    printf("\nQuantidade de vezes que caiu cara: %d", cara);
    printf("\nQuantidade de vezes que caiu coroa: %d", coroa);

    if(cara > coroa){
        printf("\nA face que teve mais ocorrencias foi: %d", cara);
    }else if(coroa > cara){
        printf("\nA face que teve mais ocorrencias foi: %d", coroa);
    }else{
        printf("\nAs faces teve a mesma quantidade de ocorrencia");
        }


    return 0;
}
