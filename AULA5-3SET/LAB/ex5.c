/*
Autor : FRITZ
DATA: 04/09/2021

Na teoria dos sistemas, define-se o elemento MINIMAX de uma matriz 
    como sendo o maior elemento da linha onde se encontra o menor elemento da matriz. 

Elabore um programa que carregue uma matriz 5x6 
    com números aleatórios de 0 até 1000, 
        calcule e mostre seu MINIMAX e sua posição (linha e coluna).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    // variaveis globais para ficar mais facil
    const int linha = 5;          
    const int coluna = 6;           

    int m[linha][coluna];

    // gerando a matriz com valores aleatorios
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            m[i][j] = rand() % 1001;         // de 0 a 1000
        }
    }

    // mostrar a matriz e já pegar o menor número e sua posição
    int pos_linha=0, menor = m[0][0];
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            if(m[i][j] < menor){
                menor       = m[i][j];
                pos_linha   = i;
            }
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    
    // for para percorrer cada coluna vendo qual o maior numero
    int MINMAX = m[pos_linha][0], pos_coluna=0;
    for (int j = 0; j<coluna; j++){
        if(m[pos_linha][j] > MINMAX){
            MINMAX = m[pos_linha][j];
            pos_coluna = j;
        }
    }

    printf("MINMAX=%d na linha %d coluna %d",MINMAX, pos_linha, pos_coluna);

    return 0;
}

