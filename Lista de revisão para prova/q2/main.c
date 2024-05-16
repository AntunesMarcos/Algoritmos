#include <stdio.h>
#include <stdlib.h>


int impar(int b[]){
    int somaI=0;
    for(int i = 0; i < 10; i++){
        if(b[i] % 2 != 0){
            somaI+=b[i];
        }
    }
    return somaI;
}
int par(int b[]){
    int somaP=0;
    for(int i = 0; i < 10; i++){
        if(b[i] % 2 == 0){
            somaP+=b[i];
        }
    }
    return somaP;
}
int main()
{
    int b[10] = {2,  5,  7,  8,  4,  12,  3,  9,  6,  15};
    int somarImpar, somaPar;
    somarImpar=impar(b);
    somaPar=par(b);
    printf("A soma dos numero impares e: %d\n", somarImpar);
    printf("A soma dos numero pares e: %d", somaPar);
    return 0;
}
