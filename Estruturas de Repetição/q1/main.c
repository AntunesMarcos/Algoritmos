#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, soma=0;

    printf("Informe um valor: ");
    scanf("%d", &n1);
    printf("Informe um valor: ");
    scanf("%d", &n2);

    for(int i = n1; i <= n2; i++ ){
        if(i % 2 != 0){
            soma+=i;

        }

    }

    printf("O valor da soma e: %d", soma);
    return 0;
}
