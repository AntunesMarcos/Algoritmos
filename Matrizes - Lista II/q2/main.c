#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10], TA[10][10];
    float media=0, soma=0;
//matriz normal
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){

            A[i][j] = (i + (2 * j));
            TA[j][i] = A[i][j];
            soma+=A[i][j];
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%i\t", A[i][j]);
        }
        printf("\n");
    }

printf("\n\n");

//linha transversal
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == j){
            printf("%i\t", A[i][j]);
        }
        }
    }
    printf("\n\n");
//Matriz transposta
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                printf("%i\t", A[i][j]);
        }
        printf("\n");
    }

media = soma /100;

printf("A media da matriz normal e: %.2f", media);
    return 0;
}
