#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3], b[2][3], c[2][3] , soma=0, somaM=0, somaL=0;
    float media=0;

//criando a matriz A
printf("Digite para a matriz A\n");
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            printf("informe um valor[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

//criando a matriz B
printf("\nDigite para a matriz B\n");
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            printf("informe um valor[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
printf("\n");

//soma da linha com a coluna
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            if(i == 0){
                soma+=a[i][j];
            }
            if(j == 2){
                soma+=b[i][j];
            }
        }

    }

//calculando a media
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            somaM+=b[i][j];
        }
    }



//formando a Matriz C

    for(int i =0; i < 2; i++){
        for(int j = 0; j< 3; j++){
            c[i][j] = a[i][j] + (2*b[i][j]);
        }
    }

//fazendo a soma da segunda linha da matriz C
    for(int i =0; i < 2; i++){
        for(int j = 0; j< 3; j++){
            if(i == 2){
                somaL+=c[i][j];
            }
        }
    }


printf("\n\n");

//Mostrando  a matriz A
printf("Matriz A\n");
for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
printf("\n\n");

//Mostrando a matriz B
printf("Matriz B\n");
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
media = (float)somaM/6;
printf("A media dos elementos de B e: %.2f\n\n", media);

//vendo quais numeros estão acima da media da matriz B
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            if(b[i][j] > media){
                printf("Os numeros sao: %d na posicao (%d, %d)\n", b[i][j], i, j);
            }
        }
    }

//mostrando todas as informacoes pedidas
    printf("A soma da primeira linha A e da ultima coluna de B: %d", soma);
printf("\n\n");
    return 0;
}
