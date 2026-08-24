#include <stdio.h>

/*
a) O programa original apresenta comportamento indefinido porque tenta atribuir o valor 50 a *p sem antes inicializar o ponteiro p com um endereco de memoria valido (ponteiro selvagem).
*/

void main() {
    int valor = 50;
    int *p;

    /* b) Aponta p para uma posicao valida */
    p = &valor;

    /* c) Modifica o valor de 'valor' para 100 por meio do ponteiro */
    *p = 100;

    printf("Valor alterado via ponteiro: %d\n", valor);
}
