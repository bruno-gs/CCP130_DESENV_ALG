/*
Autor : FRITZ
DATA: 02/09/2021

Faça um programa que cria uma matriz A 10x5 com números inteiros aleatórios 
        (de 0 até 100, rand() % 101;)  e, 
então, exiba a matriz transposta de A ( At ). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    const int linha = 10;
    const int coluna = 5;

    int m[linha][coluna];

    // transposta de m
    int mt[coluna][linha];

    // gerando a matriz com valores aleatorios
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            m[i][j] = rand() % 101;         // de 0 a 100
        }
    }

    // mostrar a matriz
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }

    // fazendo a transposta
     for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            mt[j][i] = m[i][j];
        }
    }

    printf("\n");

    // mostrar a transposta
    for(int i =0; i<coluna; i ++){
        for (int j = 0; j<linha; j++){
            printf("%3d", mt[i][j]);
        }
        printf("\n");
    }

    return 0; 
}