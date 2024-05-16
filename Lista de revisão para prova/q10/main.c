#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6][6]={0}, maior=0, menor=0, soma=0;
    float media=0;

    for(int i = 0; i < 6; i++ ){
        for(int j = 0; j < 6; j ++){
            a[i][j] = 5*i - 2*j;
            soma+=a[i][j];
        }
    }
    maior=a[0][0];
    menor=a[0][0];

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(a[i][j] > maior){
                maior=a[i][j];
            }
            if(a[i][j] < menor){
                menor = a[i][j];
            }
        }
    }


    for(int i = 0; i < 6; i++ ){
        for(int j = 0; j < 6; j ++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
printf("\n");
printf("Diagonal da matriz\n");
    for(int i = 0; i < 6; i++){
        printf("%d, ", a[i][i]);
    }
    for(int i =0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(maior == a[i][j]){
                printf("\no maior termo e: %d na posicao(%d, %d)", maior, i, j);
            }
            if(menor == a[i][j]){
                printf("\no menor termo e: %d na posicao(%d, %d)", menor, i, j);
            }
        }
    }
media = (float)soma/ 36;
printf("termos acima da media: \n");
    for(int i = 0; i <6; i++){
        for(int j = 0; j < 6; j++){
            if(a[i][j] > media){
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }

printf("\n");
printf("\nMatriz transposta: \n");
for(int i = 0; i < 6; i++ ){
        for(int j = 0; j < 6; j ++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
