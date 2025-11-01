#include <stdio.h>

int main() {

    // ==============================================================
    // SIMULAÇÃO DE MOVIMENTOS DAS PEÇAS DE XADREZ
    // Torre -> usa FOR
    // Bispo -> usa WHILE
    // Rainha -> usa DO-WHILE
    // ==============================================================

    int casas_torre = 5;
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    int casas_bispo = 5;
    int i = 1;
    printf("=== Movimento do BISPO ===\n");
    while (i <= casas_bispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    int casas_rainha = 8;
    int j = 1;
    printf("=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casas_rainha);

    printf("\n=== Fim da Simulação ===\n");

    return 0;
}
