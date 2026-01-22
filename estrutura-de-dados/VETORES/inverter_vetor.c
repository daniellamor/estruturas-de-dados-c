#include <stdio.h>

int main() {
    int v[5], temp;

    for (int i = 0; i < 5; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < 2; i++) {
        temp = v[i];
        v[i] = v[4 - i];
        v[4 - i] = temp;
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", v[i]);

    return 0;
}
