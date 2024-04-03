#include <stdio.h>
#include <stdlib.h>

void prefeitura(){
    float mediaF, mediaS, salario=1, pessoas, filhos, maiorS=1, menorS=1, quantidade_de_filhos,valor_final, salario1000,percentual;
        while(salario >= 0){
            printf("Informe o seu salario: \n");
            scanf("%f", &salario);
            if(salario >= 0){
                printf("Informe quantos filhos voce tem: \n");
                scanf("%f", &filhos);
                if(salario < 0){
                break;
            }

            valor_final+=salario;
            quantidade_de_filhos+=filhos;
            if(salario>maiorS){
                maiorS=salario;
            }
            if(salario<menorS){
                menorS=salario;
            }
            if(salario <= 1000){
                salario1000++;
            }
            pessoas++;
            }




        }

    mediaF=quantidade_de_filhos/pessoas;
    mediaS=valor_final/pessoas;
    percentual = (salario1000/pessoas)*100;

    printf("A media de filhos e: %.2f\n", mediaF);
    printf("A media de salario da populacao e: %.2f\n", mediaS);
    printf("o pecentual de pessoal com o salario menor que mil e: %.2f\n", percentual);
    }
int main()
{
    prefeitura();
    return 0;
}
