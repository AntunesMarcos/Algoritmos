#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, cont=0;

    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite um numero: ");
    scanf("%d", &b);

    for(int i=1; i <= 1000; i++){
        if(i % a == 0 && i % b == 0 ){
            cont++;
        }
    }
    printf("A quantidade de numeros divisiveis e: %d", cont);

    return 0;
}
