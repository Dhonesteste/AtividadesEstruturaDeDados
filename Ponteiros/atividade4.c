#include <stdio.h>

void main() {
    int numeros[] = {4, 8, 12, 16, 20, 24};
    int size = 6, i, soma = 0;
    int *p;

    for (p = numeros, i = 0; i < size; i++, p++) {
        printf("%d ", *p);
        soma += *p;
    }

    printf("\nSoma total: %d\n", soma);
}
