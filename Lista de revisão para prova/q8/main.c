#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8]={0}, impa=0, par=0, im=0, pa=0;
    float mediaI, mediaP;
    for(int i = 0; i < 8; i++){
        printf("informe um valor: ");
        scanf("%d", &a[i]);
    }

    for(int i=0; i< 8; i++){
        if(a[i] % 2 != 0){
            printf("\nO numero impar: %d na posicao [%d]\n", a[i], i+1);
            impa+=a[i];
            im++;
        }
        if(a[i] % 2 == 0){
            printf("\nO numero par: %d na posicao [%d]\n", a[i], i+1);
            par+=a[i];
            pa++;
        }
    }
    mediaI = (float)impa / (float)im;
    mediaP = (float)par / (float)pa;
    printf("\nA media dos numeros impares e: %.2f", mediaI);
    printf("\nA media dos numeros pares e: %.2f", mediaP);
    return 0;
}
