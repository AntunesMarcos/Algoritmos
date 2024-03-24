#include <stdio.h>
#include <stdlib.h>

int main() {
    float genero, masculino=0, feminino=0, id=0, id_f=0, estado, casado_m=0, casado_f=0, solteiro_f=0, solteiro_m=0;
    float peso, peso_f=0, peso_m=0, altura_m=0, altura;
    int contador=1;
    int i, pessoas_entre_30_e_40=0;
    float idade_total=0, altura_m_total=0, peso_f_total=0;
    do{
        printf("Pessoa %d:\n",contador);

        printf("\nGenero: (1)Masculino (2)Feminino: ");
        scanf("%f", &genero);

        printf("Informe a Idade: ");
        scanf("%f", &id);

        printf("Informe o peso: ");
        scanf("%f",&peso);

        printf("Informe a altura: ");
        scanf("%f",&altura);

        printf("Estado Civil: (1)Casado (2)Solteiro: ");
        scanf("%f",&estado);

        printf("Deseja continuar: (1)Sim (0)Nao: ");
        scanf("%d",&i);


          if(genero == 1){
            masculino++;
            altura_m+=altura;
            peso_m+=peso;
             if(estado==1){
            casado_m++;
            if(estado==2){
            solteiro_m++;
        }
             }
        }else
        {
        feminino++;
        id_f+=id;
        peso_f+=peso;
        if(estado==2){
            solteiro_f++;
        }
        }

        if (id >= 30 && id <= 40 && estado == 2 && altura > 1.70) {
            pessoas_entre_30_e_40++;
        }

        idade_total += id;

        contador++;

    }while(i!=0);

    float media_idf = 0;
    if (solteiro_f != 0) {
        media_idf = id_f / solteiro_f;
    }

    float id_media_grupo = idade_total / (masculino + feminino);
    float altura_media_m = 0;
    if (masculino != 0) {
        altura_media_m = altura_m_total / masculino;
    }
    float peso_medio_homens_casados = 0;
    if (casado_m != 0) {
        peso_medio_homens_casados = peso_m / casado_m;
    }
    float peso_medio_f = 0;
    if (feminino != 0) {
        peso_medio_f = peso_f_total / feminino;
    }
    printf("\nHomens Solteiros: %d  |  Mulheres Solteiras: %d",solteiro_m, solteiro_f);
    printf("\nIdade media das mulheres solteiras: %.2f", media_idf);
    printf("\nPeso medio dos homens casados: %.2f", peso_medio_homens_casados);
    printf("\nNumero de pessoas entre 30 e 40 anos, solteiras e que medem acima de 1.70 m: %d", pessoas_entre_30_e_40);
    printf("\nIdade media do grupo: %.2f", id_media_grupo);
    printf("\nAltura media dos homens: %.2f", altura_media_m);
    printf("\nPeso medio das mulheres: %.2f", peso_medio_f);
}
