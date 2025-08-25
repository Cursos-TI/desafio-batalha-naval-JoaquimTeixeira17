#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
   char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
   int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i;
   int j;
   int tabuleiro[10][10];

   // Inicializa o tabuleiro com água
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Cabeçalho com letras
    for (i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);
    }
    printf("\n");

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

      // Navio vertical (coluna 2, linhas 3 a 5)
    for (i = 2; i <= 4; i++) {
        tabuleiro[i][1] = '3';
    }

    // Navio horizontal (linha 8, colunas 5 a 7)
    for (j = 4; j <= 6; j++) {
        tabuleiro[7][j] = '4';
    }

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    printf(" TABULEIRO BATALHA NAVAL\n\n");
    printf("    ");  // Espaço para alinhar cabeçalho

    // Cabeçalho com letras
    for (i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);
    }
    printf("\n");

    // Impressão do tabuleiro
    for (j = 0; j < 10; j++) {
        printf("%2d ", coluna[j]);  // Numeração das linhas
        for (i = 0; i < 10; i++) {
            printf(" %c ", tabuleiro[j][i]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
