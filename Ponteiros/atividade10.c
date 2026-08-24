#include <stdio.h>

void main() {
    int vetor[] = {1, 2, 3};
    int *p1;
    int **p2;
    int ***p3;

    p1 = vetor;
    p2 = &p1;
    p3 = &p2;

    /* a) Exibir o primeiro elemento usando *p1, **p2 e ***p3 */
    printf("Primeiro elemento: %d %d %d\n", *p1, **p2, ***p3);

    /* b) Altere o primeiro elemento para 10 utilizando somente p3 */
    ***p3 = 10;

    /* c) Faca p1 avancar para o segundo elemento utilizando p2 */
    *p2 = *p2 + 1;

    /* d) Altere o segundo elemento para 20 utilizando p3 */
    ***p3 = 20;

    /* e) Exiba o vetor completo ao final */
    printf("Vetor final: %d %d %d\n", vetor[0], vetor[1], vetor[2]);
}
