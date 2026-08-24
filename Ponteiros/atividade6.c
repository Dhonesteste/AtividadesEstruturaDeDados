#include <stdio.h>

int* encontrarMaior(int *inicio, int tamanho) {
    int *maior = inicio;
    int *p, i;

    for (p = inicio, i = 0; i < tamanho; i++, p++) {
        if (*p > *maior) {
            maior = p;
        }
    }
    return maior;
}

void main() {
    int vet[5], i;
    int *p = vet;

    for (i = 0; i < 5; i++, p++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", p);
    }

    int *maiorEnd = encontrarMaior(vet, 5);
    int pos = maiorEnd - vet;

    printf("\nMaior valor: %d\n", *maiorEnd);
    printf("Posicao no vetor: %d\n", pos);
    printf("Endereco de memoria: %p\n", maiorEnd);
}
