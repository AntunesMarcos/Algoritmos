#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][5]={0}, b[4][5]={0}, c[4][5]={0}, d[5][4]={0}, menor=0, maior=0;
//criando a matriz A
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            a[i][j] = i+j;
        }
    }
//criando a matriz B
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            b[i][j] = (3*i)+j;
        }
    }
//criando a matriz C
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            c[i][j] = (2*a[i][j])-(3*b[i][j]);
        }
    }
//criando a matriz D
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            d[j][i] = c[i][j] ;
        }
    }

menor = c[0][0];
maior = c[0][0];

//verificando qual eo maior e o menor
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){

            if(c[i][j] < menor){
                menor = c[i][j];
            }
            if(c[i][j] > maior){
                maior = c[i][j];
            }
        }
    }

//mostrando todas as informacoes pedidas
    printf("\n\nMatriz A\n");
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

printf("\n\nMatriz B\n");
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

printf("\n\nMatriz C\n");
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
printf("\n\nMatriz D\n");
    for(int i = 0; i < 5; i++){
        for(int j=0; j < 4; j++){
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }

printf("\n\nMaior e menor numero e suas posicoes\n");
    for(int i = 0; i < 4; i++){
        for(int j=0; j < 5; j++){
            if(maior == c[i][j]){
                printf("maior numero %d na posicao (%d, %d)", maior, i, j);
            }
            if(menor == c[i][j]){
                printf("menor numero %d na posicao (%d, %d)", menor, i, j);
            }
        }
        printf("\n");
    }
    return 0;
}
