#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno a;

    printf("Nome: ");
    scanf(" %[^\n]", a.nome);

    printf("Matricula: ");
    scanf("%d", &a.matricula);

    printf("Media: ");
    scanf("%f", &a.media);

    printf("\nAluno: %s\nMatricula: %d\nMedia: %.2f\n",
           a.nome, a.matricula, a.media);

    return 0;
}
