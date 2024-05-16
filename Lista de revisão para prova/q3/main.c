#include <stdio.h>
#include <stdlib.h>

void arranjo(int n, int p){
    int fatN=1, fatS=1,  i=0, soma=0, a;
    soma = (n-p);

    for(i=1;i<=n;i++){
        fatN*= i;
    }

    for(i=1; i <= soma; i++){
        fatS*=i;
    }
    a=fatN/fatS;
    printf("O arranjo deu: %d", a);
}
int main()
{
    int n, p;
    printf("informe um valor para calcular a arranjo: ");
    scanf("%d", &n);
    printf("informe um segundo valor para calcular o arranjo: ");
    scanf("%d", &p);
    arranjo(n, p);
    return 0;
}
