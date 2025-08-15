#include <stdio.h>

int main(){

  printf("\n...Bem Vindo a Batalha Naval... \n\n");

  char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  int tabuleiro[10][10]; 
  
   // Inicializa o tabuleiro com 0 (Representando a água)

 for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
       tabuleiro[i][j] = 0;                 // Inicializa o tabuleiro com 0
      }  
  }
     // Define a posição dos navios no diagonal, horizontal e vertical

    tabuleiro[0][3] = 3; tabuleiro[0][4] = 3; tabuleiro[0][5] = 3;        // Navio horizontal
    tabuleiro[2][0] = 3; tabuleiro[3][0] = 3; tabuleiro[4][0] = 3;        // Navio vertical
    tabuleiro[1][8] = 3; tabuleiro[2][7] = 3; tabuleiro[3][6] = 3;        // Navio diagonal  
    tabuleiro[6][6] = 3; tabuleiro[7][7] = 3; tabuleiro[8][8] = 3;       // Navio diagonal

  // Imprime o cabeçalho das colunas

  printf("   ");                   // Espaço para alinhar com as letras das linhas   
  for (int j = 1; j <= 10; j++) {
    printf("%d ", j);
  }
     printf(" \n");

    // Imprime tabuleiro com letras e números

   for (int i = 0; i < 10; i++)  {
    printf("%2c ", linha[i]);          // Imprime a letra da linha
      for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);     // imprime os valores da matrizes
      }
      printf(" \n");
   }
   

  
     
  return 0;
    
        
}