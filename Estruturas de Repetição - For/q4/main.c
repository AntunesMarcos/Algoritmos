#include <stdio.h>
#include <stdlib.h>

int main()
{

    int impar=0, par=0, num=0;
    for(int i=1; i<=10; i++){
        printf("digite um numero:");
        scanf("%d", &num);
        if(num % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("A quantidade de numeros pares: %d\n", par);
    printf("A quantidade de numeros impares: %d", impar);
    return 0;
}
