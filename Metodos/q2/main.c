#include <stdio.h>
#include <stdlib.h>

void calcularConceito(float nota) {
    if (nota < 40) {
        printf("Conceito: F\n");
    } else if (nota < 60) {
        printf("Conceito: E\n");
    } else if (nota < 70) {
        printf("Conceito: D\n");
    } else if (nota < 80) {
        printf("Conceito: C\n");
    } else if (nota < 90) {
        printf("Conceito: B\n");
    } else {
        printf("Conceito: A\n");
    }
}

int main() {
    int numeroAlunos;
    float nota;

    printf("\nInforme o numero de alunos: ");
    scanf("%d", &numeroAlunos);

    for (int i = 1; i <= numeroAlunos; i++) {
        printf("Digite a media do aluno %d: ", i);
        scanf("%f", &nota);
        calcularConceito(nota);
    }

    return 0;
}
