#include <stdio.h>
#include <stdlib.h>


void calcular(int num){
    float soma;
    for(; num != 0; num--){
        soma+= (1/ (float)num);
        printf("%f\n", soma);
    }
    printf("\nA soma das divisoes e: %.2f", soma);
}
int main()
{
    int num;
    printf("Informe um numero:");
    scanf("%d", &num);
    calcular(num);
    return 0;
}
