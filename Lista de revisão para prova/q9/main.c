#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][2]={0}, b[3][2]={0}, c[3][2]={0}, soma=0;

    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            printf("\nInforme os numeros para a matriz A: ");
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            printf("\nInforme os numeros para a matriz B: ");
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            c[i][j] = (3 * a[i][j]) - b[i][j];
        }
    }
    for (int j = 0; j < 2; j++) {
        soma += a[2][j] + b[j][1] + c[0][j] ;
    }
    soma += b[2][1];

    printf("\n Matriz A\n\n");
    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
printf("\n Matriz B\n\n");
    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
         printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
printf("\n Matriz C\n\n");
    for(int i=0; i < 3; i++){
        for(int j=0; j < 2; j++){
         printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

printf("\n Matriz transposta de C\n\n");
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
         printf("%d\t", c[j][i]);
        }
        printf("\n");
    }
printf("A soma: %d", soma);

    return 0;
}
