#include <stdio.h>
#include <stdlib.h>

void fracoes(){
    float soma=0, numerador= 1;

    for(int i=1; i <= 15; i++){
        soma += numerador/(float)i;
        numerador+=2;
    }
    printf("A soma das fracoes e: %.2f", soma);
}


int main()
{
        fracoes();
    return 0;
}
