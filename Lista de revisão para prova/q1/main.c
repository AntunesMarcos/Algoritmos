#include <stdio.h>
#include <stdlib.h>

int calcular(){
    int soma=0, comecar=2;
    for(int i = 0; i < 20; i++){
        soma+=comecar;
        printf("\n termmo = %d    numero= %d    soma atual %d\n",i+1,comecar, soma);
        comecar+=3;
    }
    return soma;
}


int main()
{
    calcular();
    printf("\nA soma e: %d",calcular());
    return 0;
}
