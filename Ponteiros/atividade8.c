#include <stdio.h>

int contarVogais(const char *texto) {
    int qtd = 0;
    const char *p = texto;

    while (*p != '\0') {
        char c = *p;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            qtd++;
        }
        p++;
    }
    return qtd;
}

void main() {
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);

    int total = contarVogais(frase);
    printf("Quantidade de vogais: %d\n", total);
}
