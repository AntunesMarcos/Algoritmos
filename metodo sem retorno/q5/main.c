#include <stdio.h>
#include <stdlib.h>

void numero(){
    int num=0, soma=0, limite;
    printf("informe um numero par: ");
    scanf("%d", &num);

    while(num > 0){

        if(num%2 != 0){
            printf("o numero informado e impar");
            break;
    }
        soma+=num;
        num-=2;
    }

    printf("A soma dos numeros e: %d", soma);
}
int main()
{
    numero();

    return 0;
}
