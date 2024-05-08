#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8][10]={0}, b[10][8]={0}, maior=0, menor=0;

//gerando a matriz A
    for(int i=0; i < 8; i++){
        for(int j=0; j < 10; j++){
            a[i][j] = (2*i)+j;
        }
    }

//montando a matriz B
    for(int i=0; i < 8; i++){
        for(int j=0; j < 10; j++){
            b[j][i] = a[i][j];
        }
    }

//adicionando ao maior na matriz
maior = a[0][0];

//adicionando o menor na matriz
menor = b[0][0];

//vendo qual e o menor numero da matriz
for(int i=0; i < 10; i++){
        for(int j=0; j < 8; j++){
                if(a[i][j] < menor){
                    maior = b[i][j];
                }
        }
    }

//verificando qual e o maior numero
for(int i=0; i < 8; i++){
        for(int j=0; j < 10; j++){
                if(a[i][j] > maior){
                    maior = a[i][j];
                }
        }
    }

printf("\n");
//mostrando o maior numero e a sua localizacao
for(int i=0; i < 8; i++){
        for(int j=0; j < 10; j++){
                if(a[i][j] == maior){
                    printf("O maior numero da matriz A e: %d na posicao(%d, %d)", maior, i, j);
                }
        }
    }

printf("\n\n");
//mostrando o maior numero e a sua localizacao
for(int i=0; i < 10; i++){
        for(int j=0; j < 8; j++){
                if(b[i][j] == menor){
                    printf("O maior numero da matriz A e: %d na posicao(%d, %d)", menor, i, j);
                }
        }
}

printf("\n\n");
//mostrando a matriz A
printf("Matriz A\n\n");
    for(int i=0; i < 8; i++){
        for(int j=0; j < 10; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

printf("\n");
//mostrando a matriz B
printf("Matriz B\n\n");
    for(int i=0; i < 10; i++){
        for(int j=0; j < 8; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
