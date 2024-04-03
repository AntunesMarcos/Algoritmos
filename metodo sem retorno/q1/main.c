#include <stdio.h>
#include <stdlib.h>



void diversificacao(){
    int num, i=0, par=0, impar=0;
    while(i < 10){
        printf("informe um numero: ");
        scanf("%d", &num);
        i++;
    if(num%2 == 0){
        par++;
    }else{
        impar++;
    }
    }

    printf("A quantidade de numeros pares e: %d\n", par);
    printf("A quantidade de numeros impares e: %d", impar);
}
int main()
{
    diversificacao();

    return 0;
}
