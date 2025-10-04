#include <stdio.h>

// ==========================
// Função recursiva para a Torre
// Move "n" casas para a direita
// ==========================
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva para continuar o movimento
}

// ==========================
// Função recursiva para a Rainha
// Move "n" casas para a esquerda
// ==========================
void moverRainha(int casas) {
    if (casas == 0) return; 
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ==========================
// Função recursiva + loops aninhados para o Bispo
// Move "n" casas para cima e direita (diagonal)
// O loop externo controla o movimento vertical
// O loop interno controla o movimento horizontal
// ==========================
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop aninhado para imprimir "Cima" e "Direita" juntos
    for (int vertical = 1; vertical <= 1; vertical++) { // sempre 1 passo vertical
        for (int horizontal = 1; horizontal <= 1; horizontal++) { // sempre 1 passo horizontal
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // Chamada recursiva
}

// ==========================
// Cavalo com loops complexos
// Movimento: 2 casas para cima e 1 para a direita
// Usando loops aninhados, múltiplas variáveis, continue e break
// ==========================
void moverCavalo() {
    int movVertical = 2;   // duas casas para cima
    int movHorizontal = 1; // uma casa para a direita

    printf("Movimento do Cavalo:\n");

    for (int v = 1; v <= movVertical; v++) {
        // se for a primeira casa, pula impressão só para demonstrar o uso do continue
        if (v == 0) continue;
        printf("Cima\n");
    }

    // Agora movimento horizontal
    for (int h = 1; h <= movHorizontal; h++) {
        // Se atingir mais do que 1, parar o loop
        if (h > movHorizontal) break;
        printf("Direita\n");
    }
}

int main() {
    // ==========================
    // Torre (recursividade)
    // ==========================
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // ==========================
    // Bispo (recursividade + loops aninhados)
    // ==========================
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // ==========================
    // Rainha (recursividade)
    // ==========================
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // ==========================
    // Cavalo (loops complexos)
    // ==========================
    printf("\n");
    moverCavalo();

    return 0;
}
