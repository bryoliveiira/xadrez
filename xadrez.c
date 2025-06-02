#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    
    for (int i = 0; i < 1; i++) { 
        for (int j = 0; j < 1; j++) { 
            printf("Cima Direita\n");
        }
    }
    
    moverBispoRecursivo(casas - 1);
}

int main() {

    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;
    int i, j;

    for (i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            for (j = 0; j < movimentosHorizontais + 1; j++) {
                if (j == 1) {
                    printf("Direita\n");
                    break;
                }
            }
        }
        printf("Cima\n");

        if (i == 0) continue;
    }

    return 0;
}
