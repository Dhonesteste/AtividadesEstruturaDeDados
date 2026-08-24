#include <stdio.h>

void main() {
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int lin, col;

    /* a) Exibir todos os elementos */
    printf("Matriz:\n");
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 4; col++) {
            printf("%d\t", *(*(matriz + lin) + col));
        }
        printf("\n");
    }

    /* b) Calcule a soma de cada linha */
    printf("\nSoma das linhas:\n");
    for (lin = 0; lin < 3; lin++) {
        int somaLinha = 0;
        for (col = 0; col < 4; col++) {
            somaLinha += *(*(matriz + lin) + col);
        }
        printf("Linha %d: %d\n", lin, somaLinha);
    }

    /* c) e d) Maior elemento e sua posicao */
    int maior = *(*(matriz + 0) + 0);
    int linMaior = 0, colMaior = 0;

    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 4; col++) {
            int valorAtual = *(*(matriz + lin) + col);
            if (valorAtual > maior) {
                maior = valorAtual;
                linMaior = lin;
                colMaior = col;
            }
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Armazenado na Linha %d, Coluna %d\n", linMaior, colMaior);
}
