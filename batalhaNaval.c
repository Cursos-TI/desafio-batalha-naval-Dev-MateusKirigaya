#include <stdio.h>

#define TAMANHO 10
#define OCUPADO 3
#define VAZIO 0

int main() {
    // Tabuleiro 10x10 inicializado com zeros (posições livres)
    int tabuleiro[TAMANHO][TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = VAZIO;
        }
    }

    // --- Posicionamento dos navios ---

    // Navio 1: vertical, tamanho 4, início em (1,2)
    int nav1_linha = 1;
    int nav1_coluna = 2;
    int nav1_tamanho = 4;
    for (int k = 0; k < nav1_tamanho; k++) {
        tabuleiro[nav1_linha + k][nav1_coluna] = OCUPADO;
    }

    // Navio 2: horizontal, tamanho 5, início em (5,1)
    int nav2_linha = 5;
    int nav2_coluna = 1;
    int nav2_tamanho = 5;
    for (int k = 0; k < nav2_tamanho; k++) {
        tabuleiro[nav2_linha][nav2_coluna + k] = OCUPADO;
    }

    // Navio 3: diagonal descendo para a direita, tamanho 4, início em (0,0)
    int nav3_inicio_linha = 0;
    int nav3_inicio_coluna = 0;
    int nav3_tamanho = 4;
    for (int k = 0; k < nav3_tamanho; k++) {
        tabuleiro[nav3_inicio_linha + k][nav3_inicio_coluna + k] = OCUPADO;
    }

    // Navio 4: diagonal subindo para a direita, tamanho 3, início em (9,2)
    int nav4_inicio_linha = 9;
    int nav4_inicio_coluna = 2;
    int nav4_tamanho = 3;
    for (int k = 0; k < nav4_tamanho; k++) {
        tabuleiro[nav4_inicio_linha - k][nav4_inicio_coluna + k] = OCUPADO;
    }

    // --- Exibição do tabuleiro completo ---
    printf("Tabuleiro 10x10 (0 = livre, 3 = ocupado):\n");
    printf("   "); // espaçamento para cabeçalho de colunas
    for (int c = 0; c < TAMANHO; c++) {
        printf("%2d ", c);
    }
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i); // índice da linha
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // --- Exibição detalhada das coordenadas de cada navio ---
    printf("\nCoordenadas dos navios:\n");

    // Navio 1 (vertical)
    printf("Navio 1 (Vertical) tamanho %d, início em (%d, %d):\n", nav1_tamanho, nav1_linha, nav1_coluna);
    for (int k = 0; k < nav1_tamanho; k++) {
        printf("  Parte %d: (%d, %d)\n", k + 1, nav1_linha + k, nav1_coluna);
    }

    // Navio 2 (horizontal)
    printf("Navio 2 (Horizontal) tamanho %d, início em (%d, %d):\n", nav2_tamanho, nav2_linha, nav2_coluna);
    for (int k = 0; k < nav2_tamanho; k++) {
        printf("  Parte %d: (%d, %d)\n", k + 1, nav2_linha, nav2_coluna + k);
    }

    // Navio 3 (diagonal descendo-direita)
    printf("Navio 3 (Diagonal descendo-direita) tamanho %d, início em (%d, %d):\n", nav3_tamanho, nav3_inicio_linha, nav3_inicio_coluna);
    for (int k = 0; k < nav3_tamanho; k++) {
        printf("  Parte %d: (%d, %d)\n", k + 1, nav3_inicio_linha + k, nav3_inicio_coluna + k);
    }

    // Navio 4 (diagonal subindo-direita)
    printf("Navio 4 (Diagonal subindo-direita) tamanho %d, início em (%d, %d):\n", nav4_tamanho, nav4_inicio_linha, nav4_inicio_coluna);
    for (int k = 0; k < nav4_tamanho; k++) {
        printf("  Parte %d: (%d, %d)\n", k + 1, nav4_inicio_linha - k, nav4_inicio_coluna + k);
    }

    return 0;
}
