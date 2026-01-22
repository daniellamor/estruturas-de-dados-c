#include <stdio.h>

int main() {
    int a[2][2], b[2][2], soma[2][2];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            soma[i][j] = a[i][j] + b[i][j];

    printf("Resultado:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", soma[i][j]);
        printf("\n");
    }

    return 0;
}
