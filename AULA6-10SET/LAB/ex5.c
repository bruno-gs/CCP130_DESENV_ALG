/*
Autor : FRITZ
DATA: 16/09/2021

Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. 
    Imprima o endereço de cada posição dessa matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));
    // variaveis globais para ficar mais facil
    const int linha = 3;
    const int coluna = 3;

    float m[linha][coluna];

    // gerando a matriz com valores aleatorios
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            m[i][j] = rand() % 101;         // de 0 a 100
        }
    }

    // mostrar a matriz
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            printf("%3f ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // mostrar a posição de cada elemento da matriz
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            printf("Posição %dx%d : %p \n", (i+1), (j+1), &m[i][j]);
        }
    }

    return 0; 
}