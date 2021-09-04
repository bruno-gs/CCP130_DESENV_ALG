/*
Autor : FRITZ
DATA: 04/09/2021

Crie uma matriz m[8][8] com números inteiros aleatórios 
    (de 0 até 100, rand() % 101;). 
em seguida realize a soma dos elementos da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    // variaveis globais para ficar mais facil
    const int linha = 8;
    const int coluna = 8;

    int m[linha][coluna];

    // gerando a matriz com valores aleatorios
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            m[i][j] = rand() % 101;         // de 0 a 100
        }
    }

    // mostrar a matriz
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    int soma = 0;
    for(int i =0; i<linha; i ++){
        soma +=  m[i][i];
    }

    printf("A soma da diagonal principal é %d", soma);

    return 0;
}