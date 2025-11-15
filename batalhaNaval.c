#include <stdio.h>

int main() {
    int tamanhoTabuleiro = 10, tamanhoNavio = 3;

    int tabuleiro[10][10];
    int navioHorizontal[3] = {1, 2, 3};
    int navioVertical[3]   = {1, 2, 3};

    // ponto inicial de cada navio
    int inicioHX = 4, inicioHY = 2; 
    int inicioVX = 1, inicioVY = 6;

    // inicia o tabuleiro com água (0)
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // posiciona navio horizontal
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[inicioHY][inicioHX + i] = 3;
    }

    // posiciona navio vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[inicioVY + i][inicioVX] = 3;
    }

    // coordenadas do navio horizontal
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        printf("(%d, %d)\n", inicioHY, inicioHX + i);
    }

    // coordenadas do navio vertical
    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        printf("(%d, %d)\n", inicioVY + i, inicioVX);
    }

    return 0;
}
