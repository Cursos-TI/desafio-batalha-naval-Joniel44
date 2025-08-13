#include <stdio.h>
#include <stdlib.h>

int main(){

  printf("...Bem Vindo a Batalha Naval... \n\n");

  char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  int coluna[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tabuleiro[10][10]; 
  
  for (int i = 0; i < 10; i++)
  {
    printf(" %c", linha[i]);

  }   
   
    for (int j = 0; j < 10; j++)
  {
    printf("\n%d ", coluna[j]);
  } 
     
     




  
     
  return 0;
    
        
}