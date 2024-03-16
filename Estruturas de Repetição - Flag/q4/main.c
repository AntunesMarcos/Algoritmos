    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int cont=1;
        float mediaIH, idades, mas=0, fem=0, gen=0, maior_idade=0, menor_idade=0, idade=0;

        while(cont){
            printf("informe o seu genero: (1 para homem e 2 para mulher)\n");
            scanf("%f", &gen);
            printf("\ninfrome a sua idade: \n");
            scanf("%f", &idade);

            if(gen == 1){
                mas++;
                idades+=idade;
            }else{
                fem++;
            }


        if(maior_idade == 0 && menor_idade == 0){
            maior_idade = idade;
            menor_idade = idade;
        }
        else if(idade > maior_idade){
            maior_idade = idade;
        }
        else if(idade < menor_idade){
            menor_idade = idade;
        }
        printf("Voce deseja continuar (1 para SIM e 0 para NAO)\n");
        scanf("%d", &cont);
        }
        mediaIH = (idades / mas);

        printf("\nA quantidade de mulheres foi: %.f\nA quantidade de homens foi: %.f\n", fem, mas);
        printf("\nA media da idades dos homens foi: %.f\n", mediaIH);
        printf("\nA maior idade registrada foi: %.f\n", maior_idade);
        printf("\nA menor idade registrada foi: %.f\n", menor_idade);
        return 0;
    }
