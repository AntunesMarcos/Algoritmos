#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0}, b[10]={0}, valor=0, soma=0, maior=0, menor=0;
    float media=0;


    for(int i = 0; i < 10; i++){
        printf("informe uma temperatura: ");
        scanf("%d", &a[i]);
        soma+=a[i];
    }
    maior = a[0];
    menor = a[0];
    for(int i = 0; i < 10; i++){
       valor=a[i];

       b[i] = valor * 1.8 + 32;
    }
    printf("\n\n");
    media = (float)soma/10;
    for(int i = 0; i < 10; i++){
        if(a[i] < media){
            printf("%d, ", a[i]);
        }
        if(a[i] > maior){
            maior = a[i];
        }
        if(a[i] < menor){
            menor = a[i];
        }
    }
    for(int i = 0; i < 10; i++){
        printf("\n[%d]", b[i]);
    }
    for(int i = 0; i < 10; i++){
        if(a[i] == maior){
            printf("\n\nA posicao do maior elemeto e: %d e o maior elemento e: %d", i+1, maior);
        }
        if(a[i] == menor){
            printf("\nA posicao do menor elemeto e: %d e o menor elemento e: %d", i+1, menor);
        }
    }

    return 0;
}
