/*
Autor : FRITZ
DATA: 04/09/2021

Crie uma matriz m[12][12] com números inteiros aleatórios (de 0 até 100, rand() % 101;) . 
Em seguida, calcule e mostre a soma considerando somente aqueles elementos que 
    estão abaixo da diagonal principal da matriz, 
conforme ilustrado abaixo (área verde ).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    // variaveis globais para ficar mais facil
    const int linha = 12;
    const int coluna = 12;

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


    // passando em cada elemento da matriz
    int soma = 0;
    for(int i =0; i<linha; i ++){
        for(int j = 0; j<coluna; j++){

            // ele pede a soma dos elementos abaixo da diagonal principal
            // nesse caso, a posição desses elementos tem a seguinte caract:
                // o valor da linha é maior que o valor da coluna (no endereço)
            if(i>j){
                soma +=  m[i][j];
            }
        }
    }

    printf("Soma: %d", soma);

    return 0;
}