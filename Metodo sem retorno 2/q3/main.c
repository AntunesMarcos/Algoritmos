#include <stdio.h>
#include <stdlib.h>

void quadrado(int l){
    float soma;
    soma = (float)(l*l);
    printf("A area do quadrado e: %.2f\n", soma);
}
void retangulo(int b, int h){
    float soma;
    soma = (float)( b*h);
    printf("A area do retangulo e: %.2f\n", soma);
}
void cubo(int l){
    float soma;
    soma = (float)(l*l)*(6);
    printf("A area do cubo e: %.2f\n", soma);
}
void trianguloRetangulo(int b, int h){
    float soma;
    soma = (float)(b*h)/2;
    printf("A area do triangulo retangulo e: %.2f\n", soma);
}
int main()
{
    int flag=1, escolha;
    while(flag !=0){
        printf("Qual figura voce quer calcular a area? \n(1) quadrado\n(2) retangulo\n(3) cubo\n(4) triangulo retangulo\n");
        scanf("%d", &escolha);

        if(escolha == 1){
                int l;
            printf("Informe o lado do quadrado: ");
            scanf("%d", &l);
            quadrado(l);
        }
        if(escolha == 2){
                int b,h;
            printf("Informe a base do retangulo: ");
            scanf("%d", &b);
            printf("Informe a altura do retangulo: ");
            scanf("%d", &h);
            retangulo(b, h);
        }
        if(escolha == 3){
                int l;
            printf("Informe o lado do cubo: ");
            scanf("%d", &l);
            cubo(l);
        }
        if(escolha == 4){
               int b,h;
            printf("Informe a base do retangulo: ");
            scanf("%d", &b);
            printf("Informe a altura do retangulo: ");
            scanf("%d", &h);
            trianguloRetangulo(b, h);

        }
        if(escolha > 4 || escolha < 1){
            printf("Opcao invalida\n");
        }
        printf("Deseja continuar calculando areas?\nDigite (1) para sim e (0) para nao \n");
        scanf("%d", &flag);
        if(flag > 1 || flag < 0){
            printf("Ops, era para ser 1 ou 0, tome cuidado da proxima vez\n");
        }
    }
    return 0;
}
