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

    return 0;
}
