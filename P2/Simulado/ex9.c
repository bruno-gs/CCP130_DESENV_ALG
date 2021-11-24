/*
AUTOR: FRITZ
DATA: 24/11/2021

Escreva uma função chamada multiplica que recebe 
    uma matriz de 4 linhas e 3 colunas 
    e recebe um vetor de 3 elementos, 

a função deve realizar a multiplicação de cada elemento do vetor pelos elementos das linhas da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplica(int m[4][3], int v[3]){
    // verifica cada linha da matriz
    for(int i = 0; i < 4; i++){
        // vai em cada valor da linha (cada coluna)
        for(int j =0; j<3; j++){
            // pega cada valor e multiplica pelo correspondente no vetor
            m[i][j] = m[i][j] * v[j];
        }
    }
} 

int main(void){
    // main dado completo 
    int m[4][3] = {{1,2,3},{4,5,6},{3,2,1},{10,11,12}};
    int vetor[3] = {4,3,2};
    multiplica(m, vetor);

    // MOSTRAR DA FORMA DO EX
    for(int i = 0; i < 4; i++) {
        printf("|");
        for(int j = 0; j < 3; j++) {
            printf("%3d", m[i][j]);
        }
        printf(" |\n");
    }

    return 0;
}