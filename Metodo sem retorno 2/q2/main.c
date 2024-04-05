#include <stdio.h>
#include <stdlib.h>

void arranjoSimples(int m, int p){
    float sub, soma=1, conta=1, valorF;
    sub = (float)m - (float)p;
    while(m != 0){
        soma*=m;
        m-=1;
    }
    while(sub != 0){
        conta*=sub;
        sub-=1;
    }
    valorF = soma/ conta;
    printf("o valor do arranjo simple e: %.2f\n", valorF);
}
void combinacao(int n, int k){
    float fat1 =1, fat2=1, fat3=1, valorF, sub;
    sub = (float)n - (float)k;
    while(n != 0){
        fat1*=n;
        n-=1;
    }
    while(k != 0){
        fat2*=k;
        k-=1;
    }

    while(sub != 0){
        fat3*=sub;
        sub-=1;
    }
    valorF = fat1/(fat2*fat3);
    printf("%.2f\n", valorF);
}
void permutacao(int n){
    int fat=1;
    while(n !=0){
        fat*=n;
        n-=1;
    }
    printf("a permutacao e no valor de: %d\n", fat);
}
int main()
{
    int flag=1, escolha;
    while(flag != 0){
            printf("O que voce vai querer calcular\n(1) arranjo Simples\n(2) combinacao\n(3) permutacao\n");
            scanf("%d", &escolha);
        if(escolha == 1){
                int m, n;
            printf("informe um numero: ");
            scanf("%d", &m);
            printf("informe outro numero: ");
            scanf("%d", &n);
            arranjoSimples(m, n);
    }
    if(escolha == 2){
            int n, k;
            printf("informe um numero: ");
            scanf("%d", &n);
            printf("informe outro numero: ");
            scanf("%d", &k);
            combinacao(n, k);

    }
    if(escolha == 3){
        int n;
        printf("informe um numero para fazer a permutacao: ");
        scanf("%d", &n);
        permutacao(n);

    }
    if(escolha > 3 || escolha < 1){
        printf("opcao invalida\n");
    }
    printf("voce deseja continuar calculando? \nDigite 1 para sim e 0 para nao\n");
    scanf("%d", &flag);

    if(flag > 1 || flag < 0){
        printf("Ops, era para ser 1 ou 0, tome cuidado da proxima vez\n");
    }
    }

    return 0;
}
