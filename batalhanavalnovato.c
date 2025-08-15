#include <stdio.h>

int main(){

  printf("\n...Bem Vindo a Batalha Naval... \n\n");

  char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  int tabuleiro[10][10]; 
  
   // Inicializa o tabuleiro com 0 (Representando a água)

 for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
       tabuleiro[i][j] = 0;        // Inicializa o tabuleiro com 0
      }  
  }
     // Define os navios na posição horizontal e vertical

   tabuleiro[3][3] = 3; tabuleiro[3][4] = 3; tabuleiro[3][5] = 3;
   tabuleiro[4][0] = 3; tabuleiro[5][0] = 3; tabuleiro[6][0] = 3;
   tabuleiro[5][6] = 3; tabuleiro[6][5] = 3; tabuleiro[4][7] = 3;  


     // Imprime o cabeçalho das colunas

  printf("   ");         // Espaço para alinhar com as letras das linhas   
  for (int j = 1; j <= 10; j++) {
    printf("%d ", j);
  }
     printf(" \n");

    // Imprime tabuleiro com letras e números

   for (int i = 0; i < 10; i++)  {
    printf("%2c ", linha[i]);               // Imprime a letra da linha
      for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);     // imprime os valores da matrizes
      }
      printf(" \n");
   }
   

  
     
  return 0;
    
        
}