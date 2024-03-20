#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, n1, maior_nota=0, menor_nota=0, cont=0;
    float media;
    for(int i=1; i < 10; i++){
        printf("digite a nota: ");
        scanf("%d", &n1);
        soma+=n1;
        cont++;

        if(maior_nota == 0 && menor_nota == 0){
            maior_nota = n1;
            menor_nota = n1;
        }
        else if(n1 > maior_nota){
            maior_nota = n1;
        }
        else if(n1 < menor_nota){
            menor_nota = n1;
    }
    }
    media = ((float) soma/cont);
    printf("\nA media das notas foi: %.2f", media);
    printf("\nA maior nota foi: %d", maior_nota);
    printf("\nA menor nota foi: %d", menor_nota);
    return 0;

}
