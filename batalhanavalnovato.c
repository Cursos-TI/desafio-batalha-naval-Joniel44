#include <stdio.h>
#include <stdlib.h>

#define linhas 10
#define colunas 10
#define agua 0

// Função genérica para desenhar uma forma no tabuleiro

void desenharForma(int tabuleiro[linhas][colunas], int forma[5][5], int tam, int linhaInicio, int colunaInicio, int valor) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (forma[i][j] != 0) { // só desenha se for parte da forma
                int x = linhaInicio + i;
                int y = colunaInicio + j;
                if (x >= 0 && x < linhas && y >= 0 && y < colunas) {
                    tabuleiro[x][y] = valor;
                }
            }
        }
    }
}


int main(){

char linha[linhas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Linhas com as consoantes
int tabuleiro[linhas][colunas];

printf("\n***Batalha Naval***\n\n");

for(int i = 0; i < linhas; i++) {
   for(int j = 0; j < colunas; j++) {
     tabuleiro[i][j] = agua;
     }
     }
     
     // Navios

     tabuleiro[0][1] = 3; tabuleiro[0][2] = 3; tabuleiro[0][3] = 3;
     tabuleiro[1][5] = 3; tabuleiro[2][5] = 3; tabuleiro[3][5] = 3;
     tabuleiro[3][7] = 3; tabuleiro[4][6] = 3; tabuleiro[5][5] = 3;
     tabuleiro[7][5] = 3; tabuleiro[8][6] = 3; tabuleiro[9][7] = 3;
    
     // Máscara do Cone (5x5 no máximo)
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    // Máscara do Octaedro (5x5)
    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    // Máscara da Cruz (5x5)
    int cruz[5][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

     // Desenha as formas no tabuleiro
    desenharForma(tabuleiro, cone, 5, 3, 0, 5);      // cone na posição (3,0) valor 5
    desenharForma(tabuleiro, octaedro, 5, 0, 6, 5);  // octaedro na posição (0,6) valor 5
    desenharForma(tabuleiro, cruz, 5, 6, 0, 7);      // cruz na posição (6,0) valor 7



     printf("   ");
     for (int j = 1; j <= colunas; j++)  {
     printf("%d ", j);
     }
     printf("\n");

     for (int i = 0; i < linhas; i++)
     {
     printf("%2c ", linha[i]);
     for (int j = 0; j < colunas; j++) {
     printf("%d ", tabuleiro[i][j]);
     }
     printf("\n");
     }
    
  
      
    
     return 0;

}