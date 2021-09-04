/*
Autor : FRITZ
DATA: 04/09/2021

Ler uma matriz 4 X 4 com números inteiros e verificar se essa matriz forma o chamado quadrado mágico. 
Um quadrado mágico é formado quando 
    a soma dos elementos de cada linha é igual à soma dos elementos de cada coluna 
        e igual à soma dos elementos da diagonal principal e igual, também, 
            à soma dos elementos da diagonal secundária.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    // dado pelo Moodle
    // variaveis globais para ficar mais facil
    const int linha     =   4;           
    const int coluna    =   4;

    // int matriz[linha][coluna];

    // mostrar a matriz
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    // somando diagonal principal e obtendo um valor
    int soma_principal = 0;
    for(int i =0; i<linha; i ++){
        soma_principal +=  matriz[i][i];
    }

    // soma linha
    int vetor_soma_linha[4], soma_linha;
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            vetor_soma_linha[i] += matriz[i][j];
        }
        if(i!=0){
            if(vetor_soma_linha[i] != vetor_soma_linha[i-1]){
                soma_linha = -999;
                break;
            }
        }
        if(i == 4){
            soma_linha = vetor_soma_linha[0];
        }  
    }

    // soma coluna
    int vetor_soma_coluna[4], soma_coluna;
    for (int j = 0; j<coluna; j++){
        for(int i =0; i<linha; i ++){
            vetor_soma_coluna[j] += matriz[i][j];
        }
        if(j!=0){
            if(vetor_soma_coluna[j] != vetor_soma_coluna[j-1]){
                soma_coluna = -999;
                break;
            }
        }
        if(j == 4){
            soma_coluna = vetor_soma_coluna[0];
        }  
    }

    // soma secundaria
    int soma_secundaria = 0;
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            if(i+j == 3){
                soma_secundaria+=matriz[i][j];
            }
        }
    }


    if(soma_secundaria == soma_coluna == soma_linha == soma_principal){
        printf("Essa matriz forma o quadrado mágico");
    }
    else{
        printf("Essa é uma Matriz comum");
    }
  return 0;
}