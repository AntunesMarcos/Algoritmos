#include <stdio.h>
#include <stdlib.h>

void calcularMediaAritmetica(float nota1, float nota2, float nota3) {
    float media;
    media = (nota1 + nota2 + nota3) / 3;
    printf("Media aritmetica: %.2f\n", media);
}

void calcularMediaPonderada(float nota1, float nota2, float nota3) {
    float media;
    media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    printf("Media ponderada: %.2f\n", media);
}

int main() {
    int numeroAlunos;
    char opcao;
    float nota1, nota2, nota3;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numeroAlunos);

    for (int i = 1; i <= numeroAlunos; i++) {
        printf("\nAluno %d:\n", i);
        printf("Digite a nota da prova 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &nota2);
        printf("Digite a nota da prova 3: ");
        scanf("%f", &nota3);

        printf("Digite (A) para media aritmetica ou (P) para media ponderada: ");
        scanf(" %c", &opcao);

        if (opcao == 'A' || opcao == 'a') {
            calcularMediaAritmetica(nota1, nota2, nota3);
        } else if (opcao == 'P' || opcao == 'p') {
            calcularMediaPonderada(nota1, nota2, nota3);
        }

    }

    return 0;
}
