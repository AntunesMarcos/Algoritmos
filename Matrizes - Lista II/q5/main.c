#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][4]={0};


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("informe um valor: ");
            scanf("%d", &a[i][j]);
        }

            a[i][3] = a[i][0] + a[i][1] + a[i][2];
            for(int j = 0; j < 4; j++){
                a[3][j] = a[0][j] + a[1][j] + a[2][j];
            }

    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
