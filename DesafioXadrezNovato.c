#include <stdio.h>

/**
 * @file xadrez.c
 * @brief Desafio: Movimentando as Peças do Xadrez - Simulação de movimento
 * usando as estruturas de repetição (for, while, do-while) em C.
 *
 * O programa simula o movimento da Torre, Bispo e Rainha, imprimindo a
 * direção do movimento a cada casa percorrida.
 */

// Definições de constantes para o número de casas a serem movidas
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8

int main() {
    printf("========================================\n");
    printf(" SIMULACAO DE MOVIMENTOS DE PECAS DE XADREZ\n");
    printf("========================================\n\n");

    // --- MOVIMENTO DA TORRE (Utilizando FOR) ---

    /*
     * Requisito: A Torre se move 5 casas para a direita.
     * Estrutura: for
     * Lógica: O loop 'for' é ideal para repetições com número fixo e conhecido
     * de iterações. A variável 'i' rastreia o número da casa percorrida.
     */
    printf("--- 🏰 Movimento da TORRE (5 casas para a DIREITA) ---\n");
    int i; // Variável de controle (inteiro) para o loop for
    for (i = 1; i <= MOVIMENTOS_TORRE; i++) {
        // Imprime a direção do movimento para a casa atual
        printf("Casa %d: Direita\n", i);
    }
    printf("Torre completou %d movimentos.\n\n", MOVIMENTOS_TORRE);

    // --- MOVIMENTO DA BISPO (Utilizando WHILE) ---

    /*
     * Requisito: O Bispo se move 5 casas na diagonal para cima e à direita.
     * Estrutura: while
     * Lógica: O loop 'while' é usado. A repetição continua enquanto a
     * variável 'casas_bispo' for menor ou igual ao total de movimentos.
     * O incremento deve ser feito explicitamente dentro do loop.
     */
    printf("--- ♗ Movimento do BISPO (5 casas na DIAGONAL Cima/Direita) ---\n");
    int casas_bispo = 1; // Variável de controle (inteiro) para o loop while, começa na casa 1
    while (casas_bispo <= MOVIMENTOS_BISPO) {
        // Imprime a combinação das duas direções para representar o movimento diagonal
        printf("Casa %d: Cima, Direita\n", casas_bispo);

        // Incrementa o contador para a próxima casa
        casas_bispo++;
    }
    // A variável 'casas_bispo' agora é MOVIMENTOS_BISPO + 1, então subtraímos 1
    printf("Bispo completou %d movimentos.\n\n", MOVIMENTOS_BISPO);

    // --- MOVIMENTO DA RAINHA (Utilizando DO-WHILE) ---

    /*
     * Requisito: A Rainha se move 8 casas para a esquerda.
     * Estrutura: do-while
     * Lógica: O loop 'do-while' garante que o corpo do loop execute
     * pelo menos uma vez antes da condição ser verificada.
     * É adequado aqui, embora o 'while' ou 'for' também pudessem ser usados.
     */
    printf("--- ♕ Movimento da RAINHA (8 casas para a ESQUERDA) ---\n");
    int casas_rainha = 0; // Variável de controle (inteiro) para o loop do-while, começa na casa 0

    // O loop garante que a primeira casa (casas_rainha = 0) seja processada antes de checar a condição
    do {
        // Incrementa o contador para a casa atual antes de imprimir
        casas_rainha++;

        // Imprime a direção do movimento
        printf("Casa %d: Esquerda\n", casas_rainha);

        // A condição verifica se o número de casas movidas já atingiu o total.
    } while (casas_rainha < MOVIMENTOS_RAINHA);
    
    printf("Rainha completou %d movimentos.\n\n", MOVIMENTOS_RAINHA);

    printf("========================================\n");
    printf(" FIM DA SIMULACAO\n");
    printf("========================================\n");

    return 0;
}
