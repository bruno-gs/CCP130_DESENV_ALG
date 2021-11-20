/*
AUTOR: FRITZ
DATA: 20/11/2021

Crie uma função que receba como parâmetro, uma matriz
A=12x12 e retorne a média aritmética dos elementos abaixo da diagonal principal.
*/

#include "media.h"

void media(int m[12][12], int linha, int coluna){
  
  // passando em cada elemento da matriz
  int soma = 0, quant =0 ;
  for(int i =0; i<linha; i ++){
    for(int j = 0; j<coluna; j++){

      // ele pede a soma dos elementos abaixo da diagonal principal
      // nesse caso, a posição desses elementos tem a seguinte caract:
      // o valor da linha é maior que o valor da coluna (no endereço)
      if(i>j){
        soma +=  m[i][j];
        quant++;
      }
    }
  }
  float media = (float)soma / quant;

  printf("Média: %.2f", media); 
}


