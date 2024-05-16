#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
    int soma;
    soma = a + b;
    return soma;

}
int subitracao(int a, int b){
    int subitracao;
    subitracao = a - b;
    return subitracao;

}
int multiplicacao(int a, int b){
    int multiplicacao;
    multiplicacao = a * b;
    return multiplicacao;

}
int divisao(int a, int b){
    int divisao;
    divisao = a / b;
    return divisao;

}
int main()
{
    int a=0, b=0, r;
    char escolha;

    printf("Digite um valor para ser calculado: ");
    scanf("%d", &a);
    printf("digite a operação que vc quer fazer: \nsoma(+) \nsubitracao(-) \nmultiplicacao(x) e divisao(/)\n");
    scanf(" %c", &escolha);
    printf("Digite um segundo valor para ser calculado:");
    scanf("%d", &b);

    switch(escolha){
        case '+':
            r = soma(a, b);
            printf("A soma dos numeros digitados e: %d", r);
            break;
        case '-':
            r = subitracao(a, b);
            printf("A subitracao dos numeros digitados e: %d", r);
            break;
        case 'x':
        case 'X':
            r = multiplicacao(a, b);
            printf("A multipliicacao dos numeros digitados e: %d", r);
            break;
        case'/':
            r = divisao(a, b);
            printf("A divisao dos numeros digitados e: %d", r);
            break;
        default:
            printf("opcao invalida!\n\n");
            return main();
            break;

    }
    return 0;
}
