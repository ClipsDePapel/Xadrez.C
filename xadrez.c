#include <stdio.h>

int main() {
    // ==========================
    // Torre - usando FOR
    // Movimento: 5 casas para a direita
    // ==========================
    int casasTorre = 5; 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ==========================
    // Bispo - usando WHILE
    // Movimento: 5 casas na diagonal (cima + direita)
    // ==========================
    int casasBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ==========================
    // Rainha - usando DO-WHILE
    // Movimento: 8 casas para a esquerda
    // ==========================
    int casasRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
