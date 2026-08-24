#include <stdio.h>

void main() {
    int valores[] = {1, 2, 3, 4, 5, 6};
    int *inicio = valores;
    int *fim = valores + 5;
    int temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }

    int *p;
    int i;
    for (p = valores, i = 0; i < 6; i++, p++) {
        printf("%d ", *p);
    }
    printf("\n");
}
