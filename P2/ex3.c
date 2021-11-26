/*
AUTOR: FRITZ
DATA: 26/11/2021

Leia um valor X. Coloque este valor na primeira posição de um vetor N[10]. 
    Em cada posição subsequente de N (1 até 9), 
        coloque o dobro do valor armazenado na posição anterior, conforme o exemplo abaixo. 
    Imprima o vetor N.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    // declarando o vetor
    int N[10];

    int X;

    //lendo valor X
    scanf(" %d",&X);

    // valor da primeira posição sendo x
    N[0] = X;

    // adicionando valores certos
    for(int i=1; i<10; i++){

        N[i] = N[i-1] * 2;
    }

    // mostrando do jeito pedido
    for(int i=0; i<10;i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    

    return 0;
}