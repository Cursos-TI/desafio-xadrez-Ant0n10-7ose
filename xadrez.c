#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// === FUNÇÕES RECURSIVAS PARA AS PEÇAS ===

/**
 * Função recursiva para movimento da Torre
 * @param casas_restantes: número de casas ainda a serem movidas
 * @param casa_atual: número da casa atual (para exibição)
 */
void mover_torre_recursivo(int casas_restantes, int casa_atual) {
    // Caso base: se não há mais casas para mover, para a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Casa %d: ", casa_atual);
    printf("Direita\n");
    
    // Chamada recursiva: move para a próxima casa
    mover_torre_recursivo(casas_restantes - 1, casa_atual + 1);
}

/**
 * Função recursiva para movimento do Bispo
 * @param casas_restantes: número de casas ainda a serem movidas
 * @param casa_atual: número da casa atual (para exibição)
 */
void mover_bispo_recursivo(int casas_restantes, int casa_atual) {
    // Caso base: se não há mais casas para mover, para a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento diagonal atual
    printf("Casa %d: ", casa_atual);
    printf("Cima, Direita\n");
    
    // Chamada recursiva: move para a próxima casa diagonal
    mover_bispo_recursivo(casas_restantes - 1, casa_atual + 1);
}

/**
 * Função recursiva para movimento da Rainha
 * @param casas_restantes: número de casas ainda a serem movidas
 * @param casa_atual: número da casa atual (para exibição)
 */
void mover_rainha_recursivo(int casas_restantes, int casa_atual) {
    // Caso base: se não há mais casas para mover, para a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Casa %d: ", casa_atual);
    printf("Esquerda\n");
    
    // Chamada recursiva: move para a próxima casa
    mover_rainha_recursivo(casas_restantes - 1, casa_atual + 1);
}

/**
 * Função para movimento do Bispo com loops aninhados
 * Loop externo: movimento vertical
 * Loop interno: movimento horizontal
 */
void mover_bispo_loops_aninhados() {
    int casas_verticais = 5;    // Número de movimentos verticais
    int casas_horizontais = 1;  // Para cada vertical, 1 horizontal (diagonal)
    int casa_total = 1;         // Contador total de casas
    
    printf("=== BISPO COM LOOPS ANINHADOS ===\n");
    printf("Loop externo: movimento vertical\n");
    printf("Loop interno: movimento horizontal\n\n");
    
    // Loop externo - controla movimento vertical (5 casas)
    for (int vertical = 1; vertical <= casas_verticais; vertical++) {
        printf("--- Movimento vertical %d ---\n", vertical);
        
        // Loop interno - para cada movimento vertical, faz o horizontal
        for (int horizontal = 1; horizontal <= casas_horizontais; horizontal++) {
            printf("Casa %d: ", casa_total);
            printf("Cima, Direita\n");  // Movimento diagonal
            casa_total++;
        }
    }
    
    printf("\n✓ Bispo completou movimento com loops aninhados!\n\n");
}

int main() {
    // === DECLARAÇÃO DAS VARIÁVEIS ===
    int casas_torre = 5;        // Torre: 5 casas para a direita
    int casas_bispo = 5;        // Bispo: 5 casas na diagonal
    int casas_rainha = 8;       // Rainha: 8 casas para a esquerda
    
    // Variáveis para movimento complexo do Cavalo
    int movimento_cavalo_vertical = 2;    // Duas casas para cima
    int movimento_cavalo_horizontal = 1;  // Uma casa para a direita
    int etapas_movimento = 2;             // Duas etapas: vertical + horizontal
    
    // === APRESENTAÇÃO DO PROGRAMA ===
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║          XADREZ NÍVEL MESTRE - TÉCNICAS AVANÇADAS       ║\n");
    printf("║          Recursividade e Loops Complexos                ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n\n");
    
    printf("Este programa demonstra técnicas avançadas:\n");
    printf("• Recursividade (Torre, Bispo, Rainha)\n");
    printf("• Loops complexos (Cavalo)\n");
    printf("• Loops aninhados (Bispo alternativo)\n\n");
    
    // === MOVIMENTO DA TORRE COM RECURSIVIDADE ===
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║               TORRE - RECURSIVIDADE                     ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    printf("Movimento: %d casas para a direita (função recursiva)\n\n", casas_torre);
    
    // Chamada da função recursiva para a Torre
    mover_torre_recursivo(casas_torre, 1);
    
    printf("\n✓ Torre completou movimento recursivo!\n\n");
    
    // === MOVIMENTO DO BISPO COM RECURSIVIDADE ===
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║               BISPO - RECURSIVIDADE                     ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    printf("Movimento: %d casas na diagonal (função recursiva)\n\n", casas_bispo);
    
    // Chamada da função recursiva para o Bispo
    mover_bispo_recursivo(casas_bispo, 1);
    
    printf("\n✓ Bispo completou movimento recursivo!\n\n");
    
    // === MOVIMENTO DA RAINHA COM RECURSIVIDADE ===
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║              RAINHA - RECURSIVIDADE                     ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    printf("Movimento: %d casas para a esquerda (função recursiva)\n\n", casas_rainha);
    
    // Chamada da função recursiva para a Rainha
    mover_rainha_recursivo(casas_rainha, 1);
    
    printf("\n✓ Rainha completou movimento recursivo!\n\n");
    
    // === MOVIMENTO DO CAVALO COM LOOPS COMPLEXOS ===
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║              CAVALO - LOOPS COMPLEXOS                   ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    printf("Movimento em 'L': 2 casas para cima + 1 casa para a direita\n");
    printf("Usando loops complexos com múltiplas variáveis e condições\n\n");
    
    // === LOOPS COMPLEXOS PARA O CAVALO ===
    // Múltiplas variáveis de controle
    int etapa_atual = 1;
    int casa_movimento = 1;
    int movimentos_feitos = 0;
    int total_movimentos = movimento_cavalo_vertical + movimento_cavalo_horizontal;
    
    // Loop complexo com múltiplas condições
    for (etapa_atual = 1; etapa_atual <= etapas_movimento; etapa_atual++) {
        
        // Primeira etapa: movimento vertical (2 casas para cima)
        if (etapa_atual == 1) {
            printf("--- Etapa %d: Movimento Vertical ---\n", etapa_atual);
            
            // Loop interno com múltiplas variáveis
            for (int mov_vertical = 1, casa_vertical = 1; 
                 mov_vertical <= movimento_cavalo_vertical; 
                 mov_vertical++, casa_vertical++) {
                
                printf("Casa %d: ", casa_vertical);
                printf("Cima\n");
                movimentos_feitos++;
                
                // Condição para controle de fluxo
                if (movimentos_feitos >= movimento_cavalo_vertical) {
                    printf("✓ Movimento vertical concluído!\n\n");
                    break;  // Sai do loop quando completa movimento vertical
                }
            }
        }
        
        // Segunda etapa: movimento horizontal (1 casa para a direita)
        else if (etapa_atual == 2) {
            printf("--- Etapa %d: Movimento Horizontal ---\n", etapa_atual);
            
            // Loop com condição específica
            int mov_horizontal = 1;
            while (mov_horizontal <= movimento_cavalo_horizontal) {
                printf("Casa %d: ", mov_horizontal);
                printf("Direita\n");
                mov_horizontal++;
                
                // Continue seria usado aqui se houvesse condições especiais
                // Por exemplo: if (alguma_condicao) continue;
                
                // Break seria usado para sair prematuramente se necessário
                if (mov_horizontal > movimento_cavalo_horizontal) {
                    break;
                }
            }
            printf("✓ Movimento horizontal concluído!\n\n");
        }
    }
    
    printf("✓ Cavalo completou movimento em 'L' com loops complexos!\n\n");
    
    // === MOVIMENTO DO BISPO COM LOOPS ANINHADOS ===
    mover_bispo_loops_aninhados();
    
    // === RESUMO FINAL ===
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║                   RESUMO TÉCNICO                        ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    printf("\n🏆 TÉCNICAS IMPLEMENTADAS:\n");
    printf("📌 Torre:   Recursividade (%d casas)\n", casas_torre);
    printf("📌 Bispo:   Recursividade + Loops Aninhados (%d casas)\n", casas_bispo);
    printf("📌 Rainha:  Recursividade (%d casas)\n", casas_rainha);
    printf("📌 Cavalo:  Loops Complexos com múltiplas variáveis\n");
    printf("📌 Controle: break, continue, múltiplas condições\n");
    
    printf("\n🎯 CONCEITOS AVANÇADOS DEMONSTRADOS:\n");
    printf("• Funções recursivas com casos base\n");
    printf("• Loops aninhados com controle de fluxo\n");
    printf("• Múltiplas variáveis de controle\n");
    printf("• Estruturas condicionais complexas\n");
    printf("• Otimização e boas práticas\n");
    
    printf("\n🚀 Nível Mestre concluído com sucesso!\n");
    printf("Todas as técnicas avançadas foram implementadas!\n");
    
    return 0;
}