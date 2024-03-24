#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;

    printf("\nDigite um numero para encontrar seus divisores: ");
    scanf("%d",&n1);

    for(int x=1; x<=n1; x++){
        if(n1%x==0){
        printf("\nO %d e divisor de %d\n",x, n1);
        }
    }
}
