#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][4]={0}, b[4]={0}, maior=0;
    int soma;
    float media;
    for(int i = 0; i < 4; i++){
        for(int j =0; j< 4; j++){
            printf("Informe um valor para a matriz: ");
            scanf("%i", &a[i][j]);
        }
        printf("\n");
    }



    for(int i =0; i < 4; i++){
        b[i] = a[i][i];
    }


    maior = b[0];


    for(int i =0; i < 4; i++){
        if(b[i] > maior){
            maior = b[i];
        }
    }



    for(int i = 0; i < 4; i++){
        soma += b[i];
    }


    media = (float)soma/4;


    for(int i = 0; i < 4; i++){
        for(int j =0; j <4; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    printf("Os elementos da diagonal principal e:");
    for(int i = 0; i < 4; i++){
        printf("%i, ", b[i]);
}


    printf("\n");


    printf("A media dos elementos da diagonal principal: %.2f", media);
    printf("\n");
    for(int i = 0; i < 4 ; i++){
        if(maior == b[i]){
            printf("O maior elemento da diagonal principal e %d na posicao [%d]", maior, i+1);
        }
    }



    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            if(a[i][j] > maior){
                printf("os numeros maiores do que a diagonal principal e: %d na posicao(%d, %d)", a[i][j], i,j);
            }
            printf("\n");
        }
    }
    return 0;
}
