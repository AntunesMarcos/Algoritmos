#include <stdio.h>
#include <stdlib.h>

void fatorial(int b[]){
    int fat=1,n;
    for(int i = 0; i < 6; i++){
        fat=1;
        n=b[i];
        while (n>1)
        {
            fat*=n;
            n--;
        }
        printf("\n b[%d] = %d   fat = %d ",i,b[i],fat);

        }
    }

int main()
{
    int b[6] = {1, 2, 3, 4, 5, 6};
    fatorial(b);
    return 0;
}
