#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[15][15]={0}, b[15]={0}, c[15]={0}, d[15]={0}, soma=0;
    float media=0;

 //criando a matriz A
    for(int i =0; i < 15; i++){
        for(int j =0; j < 15; j++){
            a[i][j] = (4 * i) - (2 * j);
        }

    }
//pegando o valor da ultima coluna da matriz
    for(int i =0; i < 15; i++){
        for(int j =0; j < 15; j++){
            b[i] = a[i][14];
        }
    }
//pegando o valor da diagonal principal da matriz
    for(int i =0; i < 15; i++){
        for(int j =0; j < 15; j++){
            c[i] = a[i][i];
        }
    }
//pegando o valor da primeira linha da matriz
    for(int i =0; i < 15; i++){
        for(int j =0; j < 15; j++){
            d[j] = a[0][j];
        }
    }
//fazendo a somatoria para calcular a media
    for(int i =0; i < 15; i++){
        for(int j =0; j < 15; j++){
            soma+=a[i][j];
        }
    }
media = (float)soma/ 225;

//mostrando a matriz A
printf("\nMatriz A\n\n");
for(int i =0; i < 15; i++){
        for(int j =0; j < 15; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
//Mostrando todos os vetores
printf("\n Os valores do vetor B:");
    for(int j =0; j < 15; j++){
            if( j == 0){
                printf("(");
            }
            if(j < 15 && j > 0){
                printf(", ");
            }
            printf("%d", b[j]);
            if( j == 14){
                printf(") ");
            }
        }

printf("\n Os valores do vetor C:");
    for(int j =0; j < 15; j++){
            if( j == 0){
                printf("(");
            }
            if(j < 15 && j > 0){
                printf(", ");
            }
            printf("%d", c[j]);
            if( j == 14){
                printf(") ");
            }
        }

printf("\n Os valores do vetor D:");
    for(int j =0; j < 15; j++){
            if( j == 0){
                printf("(");
            }
            if(j < 15 && j > 0){
                printf(", ");
            }
            printf("%d", d[j]);
            if( j == 14){
                printf(") ");
            }
        }
//mostrando os valores que estao abaixo da media da matriz
printf("\n\nA media dos valores da matriz e: %.2f\n\n", media);
for(int i =0; i < 15; i++){
        for(int j =0; j < 15; j++){
            if(a[i][j] < media){
                printf("os valores que estao abaixo da media da matriz e: %d na posicao(%d, %d)\n\n", a[i][j], i, j);
            }
        }
    }
    return 0;
}
