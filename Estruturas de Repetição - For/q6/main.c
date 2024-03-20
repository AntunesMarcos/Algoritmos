#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=1, soma=0;

    for(int i=1; i <= 8; i++){
        f*=i;
        soma+=f;
    }
    printf("\nA soma e: %d\n", soma);
    return 0;
}
