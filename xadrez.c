#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\nMovimento do Cavalo (2 Baixo, 1 Esquerda):\n");

    for (int passo = 0; passo < 2; passo++) {
        printf("Baixo\n");

        int auxiliar = 0;
        while (auxiliar < 1 && passo == 1) { 
            printf("Esquerda\n");
            auxiliar++;
        }
    }

    return 0;
}
