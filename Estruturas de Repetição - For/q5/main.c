#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("digite um numero: ");
    scanf("%d", &num);
    for(int i=1; i <=20; i++){
        if(num % 2 == 0){
            printf("multiplo: %d\n",num*i);
        }
    }
    return 0;
}
