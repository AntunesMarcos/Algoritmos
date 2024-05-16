#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, genero, idade;
    int votosSimMulheres=0, votoNaoMenores=0, MulheresNao=0, HomensSim=0, totalMulher=0, totalHomem=0, votoSim=0, votoNao=0, somaHomem=0, somaMulher=0;
    float mediaIdadeHomem=0, mediaIdadeMulher=0;
    int i=1;
    while(i > 0){
        printf("Informe o seu voto:  (sim=1/nao=2)\n");
        scanf("%d", &voto);
        printf("Informe o seu genero (mas=1/fem=2)\n");
        scanf("%d", &genero);
        printf("Informe a sua idade: ");
        scanf("%d", &idade);



        if(voto == 2 && genero == 2){
        votosSimMulheres++;
    }
    if(genero == 1 && voto == 2 && idade < 18){
        votoNaoMenores++;
    }
    if(genero == 2 && voto == 2){
        somaMulher+=idade;
        MulheresNao++;
    }



    if(genero == 1 && voto == 1){
        somaHomem+=idade;
        HomensSim++;
    }


    if(genero == 1 ){
        totalHomem++;
    }
    else{
        totalMulher++;
    }
    if(voto == 1){
        votoSim++;
    }
    else{
        votoNao++;
    }

    printf("Deseja continuar? (sim=1/nao=0)\n");
        scanf("%d", &i);
    }
    mediaIdadeMulher = (float)somaMulher / (float)MulheresNao;
    mediaIdadeHomem = (float)somaHomem/ (float)HomensSim;
    printf("\n\n");
    printf("o numero de votos sim, das mulheres: %d\n", votosSimMulheres);
    printf("o numero de votos (nao) dos homens com menos de 18 anos: %d\n", votoNaoMenores);
    printf("a media das idades das mulheres que falaram nao: %.2f\n", mediaIdadeMulher);
    printf("a media das idades dos homens que falaram sim: %.2f\n", mediaIdadeHomem);
    printf("o numero de homens: %d\no numero de mulheres: %d", totalHomem, totalMulher);
    printf("o total de sim: %d\no total de voto nao: %d", votoSim, votoNao);

    return 0;
}
