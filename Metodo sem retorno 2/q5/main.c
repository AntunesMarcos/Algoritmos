#include <stdio.h>
#include <stdlib.h>


void verificar(int idade){

    if(idade < 5){
        printf("nao tem nadador para essa idade\n");
        return main();
    }
    if(idade >= 5 && idade <= 7){
        printf("O nadador e da categoria F\n");
    }
    if(idade >= 8 && idade <= 10){
        printf("O nadador e da categoria E\n");
    }
    if(idade >= 11 && idade <= 13){
        printf("O nadador e da categoria D\n");
    }
    if(idade >= 14 && idade <= 15){
        printf("O nadador e da categoria C\n");
    }
    if(idade >= 16 && idade <= 17){
        printf("O nadador e da categoria B\n");
    }
    if(idade >= 18){
        printf("O nadador e da categoria A\n");
    }
}
int main()
{
    int idade;
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    verificar(idade);

    return 0;
}
