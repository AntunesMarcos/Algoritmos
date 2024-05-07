#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][5] = {0}, b[3][5] = {0}, c[3][5] = {0};
    int maiorA = a[0][0], maiorB = b[0][0], ai = 0, aj = 0, bi = 0, bj = 0;
    int menorC = c[0][0] , ci = 0, cj = 0, tc[5][3];

//matriz A
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            a[i][j] = ((3 * i) - j);

            if(a[i][j] > maiorA){
                maiorA = a[i][j];
                ai = i;
                aj = j;
            }
        }
    }
//matriz B
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            b[i][j] = ((2 * i) + (3 * j));

            if(b[i][j] > maiorB){
                maiorB = b[i][j];
                bi = i;
                bj = j;
            }
        }
    }

//Matriz C
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            c[i][j] = (2* a[i][j]) + b[i][j];
            tc[j][i] = c[i][j];
            if(c[i][j] < menorC){
                menorC = c[i][j];
                ci = i;
                cj = j;
            }

        }
    }
//Vizualização da matriz A
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("[%i] [%i] = %i\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
//Vizualização da matriz B
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("[%i] [%i] = %i\t", i, j, b[i][j]);
        }
        printf("\n");
    }
printf("\n\n");
//Vizualização da matriz c
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("[%i] [%i] = %i\t", i, j, c[i][j]);
        }
        printf("\n");
    }

printf("\n\n");

//mostrando o maior e menor valor das matrizis
printf("o menor valor de C e: %i  na posicao(%i, %i)\n", menorC, ci,cj);

printf("o maior valor de A e: %i  na posicao(%i, %i)\n", maiorA, ai, aj);

printf("o maior valor de B e: %i  na posicao(%i, %i)\n", maiorB, bi, bj);

printf("\n\n");
//matriz transposta de C

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("[%i] [%i] = %i\t", i, j, tc[i][j]);
        }
        printf("\n");
    }
    return 0;
}
