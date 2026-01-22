#include <stdio.h>

int main() {
    int v[10], maior, menor, soma = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    maior = menor = v[0];

    for (int i = 1; i < 10; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }

    printf("Maior: %d\nMenor: %d\nMedia: %.2f\n",
           maior, menor, soma / 10.0);

    return 0;
}
