#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma=0.0;
    int denomi=1;
    for(int nume=1; nume <= 99; nume+=2){
        soma += (float)nume/denomi;
        denomi++;

    }
    printf("A soma e: %.2f\n", soma);
    return 0;
}
