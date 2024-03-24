#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma;

    for(int x=1;x<=500;x++){
            if(x%2!=0 && x%3==0){
        soma+=x;
            }
    }
    printf("\nA soma dos valores impares nesse intervalo e: %d\n",soma);
}
