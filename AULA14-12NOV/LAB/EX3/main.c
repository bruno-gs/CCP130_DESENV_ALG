/*
AUTOR: FRITZ
DATA: 20/11/2021

Crie uma função que receba como parâmetro, uma matriz
A=12x12 e retorne a média aritmética dos elementos abaixo da diagonal principal.
*/

#include "media.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(NULL));

  // variaveis globais para ficar mais facil
  const int linha = 12;
  const int coluna = 12;

  int m[linha][coluna];

  // gerando a matriz com valores aleatorios
  for(int i =0; i<linha; i ++){
    for (int j = 0; j<coluna; j++){
        m[i][j] = rand() % 11;         // de 0 a 10
      }
  }

  // mostrar a matriz
  for(int i =0; i<linha; i ++){
    for (int j = 0; j<coluna; j++){
      printf("%3d ", m[i][j]);
    }
    printf("\n");
  }

  media(m,linha,coluna);
    
  return 0;
}