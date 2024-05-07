#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][3]={0};

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 1; j++){
            printf("Informe a nota o aluno[%d] da  prova [%d]: ", i+1, j+1);
            scanf("%d", &a[i][0]);
        }

        for(int j = 0; j < 1; j++){
            printf("informe a nota do aluno[%d] do  trabalho [%d]: ", i+1, j+1);
            scanf("%d", &a[i][1]);
        }




        printf("\n\n");
    }

    for(int i = 0; i < 10; i++){
        a[i][2] = a[i][0] + a[i][1];

        if(a[i][2] >= 60){
            printf("O aluno [%d] tirou a nota %d e ele esta aprovado\n", i+1 , a[i][2]);
        }
        printf("\n");
        if(a[i][2] < 60 && a[i][2] >=0){
            printf("O aluno [%d] tirou a nota %d e ele esta re  provado\n", i+1 , a[i][2]);
        }
    }


    printf("\n\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 3; j++){
            if(j == 2){
                printf(" = ");
            }
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
