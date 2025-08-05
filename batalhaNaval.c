#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    // Tabuleiro (apenas para contexto, não é estritamente necessário para imprimir coordenadas)
    char tabuleiro[LINHAS][COLUNAS];
    
    // Inicializa o tabuleiro com '~' representando água
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // --- Configuração dos navios ---
    // Navio 1: vertical de tamanho 4, começando na posição (linha=2, coluna=3)
    int navio1_inicio_linha = 2; // índice 0-based
    int navio1_inicio_coluna = 3;
    int navio1_tamanho = 4; // vertical

    // Marca o navio vertical no "tabuleiro"
    for (int k = 0; k < navio1_tamanho; k++) {
        tabuleiro[navio1_inicio_linha + k][navio1_inicio_coluna] = 'V'; // V de vertical
    }

    // Navio 2: horizontal de tamanho 5, começando na posição (linha=5, coluna=1)
    int navio2_inicio_linha = 5;
    int navio2_inicio_coluna = 1;
    int navio2_tamanho = 5; // horizontal

    // Marca o navio horizontal no "tabuleiro"
    for (int k = 0; k < navio2_tamanho; k++) {
        tabuleiro[navio2_inicio_linha][navio2_inicio_coluna + k] = 'H'; // H de horizontal
    }

    // --- Exibição das coordenadas dos navios ---
    printf("Posicionamento dos navios no tabuleiro (índices 0-based):\n\n");

    // Navio vertical
    printf("Navio 1 (Vertical) - tamanho %d, iniciando em (%d, %d):\n",
           navio1_tamanho, navio1_inicio_linha, navio1_inicio_coluna);
    for (int k = 0; k < navio1_tamanho; k++) {
        int linha_atual = navio1_inicio_linha + k;
        int coluna_atual = navio1_inicio_coluna;
        printf("  Parte %d: (%d, %d)\n", k + 1, linha_atual, coluna_atual);
    }
    printf("\n");

    // Navio horizontal
    printf("Navio 2 (Horizontal) - tamanho %d, iniciando em (%d, %d):\n",
           navio2_tamanho, navio2_inicio_linha, navio2_inicio_coluna);
    for (int k = 0; k < navio2_tamanho; k++) {
        int linha_atual = navio2_inicio_linha;
        int coluna_atual = navio2_inicio_coluna + k;
        printf("  Parte %d: (%d, %d)\n", k + 1, linha_atual, coluna_atual);
    }
    printf("\n");

    return 0;
}
