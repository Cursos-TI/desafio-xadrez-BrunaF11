#include <stdio.h>

int main() {
    // ================================
    // Constantes de movimentação
    // ================================
    const int BISPO_PASSOS = 5;
    const int TORRE_PASSOS = 5;
    const int RAINHA_PASSOS = 8;

    // ================================
    // Movimentação do Bispo
    // Usando loop for
    // ================================
    printf("=== Movimento do Bispo ===\n");
    for (int i = 1; i <= BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // ================================
    // Movimentação da Torre
    // Usando loop while
    // ================================
    printf("\n=== Movimento da Torre ===\n");
    int j = 1;
    while (j <= TORRE_PASSOS) {
        printf("Direita\n");
        j++;
    }

    // ================================
    // Movimentação da Rainha
    // Usando loop do...while
    // ================================
    printf("\n=== Movimento da Rainha ===\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= RAINHA_PASSOS);

    return 0;
}