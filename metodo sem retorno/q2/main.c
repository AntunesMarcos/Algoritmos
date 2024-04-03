#include <stdio.h>
#include <stdlib.h>


void lojas(){
    float maior=1, menor=1, media=0, produ, soma;

    for(int i=0; i < 7; i++){
        printf("Informe o valor do produto: ");
        scanf("%f", &produ);
        soma+=produ;
        if(produ<menor){
            menor = produ;
        }
        if(produ>maior){
            maior=produ;
        }
    }
    media = soma / 7;
    printf("o maior numero e: %.2f\n", maior);
    printf("o menor numero e: %.2f\n", menor);
    printf("a media dos numero e: %.2f", media);

}
int main()
{

    lojas();
    return 0;
}
