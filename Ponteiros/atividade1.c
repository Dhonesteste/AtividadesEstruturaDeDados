#include <stdio.h>

void main() {
    int var = 20;
    int *p;

    p = &var;

    printf("Valor da variavel: %d\n", var);
    printf("Endereco da variavel: %p\n", &var);
    printf("Conteudo do ponteiro (p): %p\n", p);
    printf("Valor apontado por p (*p): %d\n\n", *p);

    *p = 35;

    printf("Novo valor da variavel (via ponteiro): %d\n", var);
}
