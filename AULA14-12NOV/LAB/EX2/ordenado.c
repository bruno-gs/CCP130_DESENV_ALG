/*
AUTOR: FRITZ
DATA: 20/11/2021

Faça uma função que receba como parâmetro um vetor A com
dez números reais e retorne esses números ordenados de
forma crescente. 
*/

#include "ordenado.h"

void ordena(int vet_A[10]){
    int vet_ordenado[10];
    int ordem = 0, menor = vet_A[0], indice=0;
    while(ordem<10){
        menor = 9999999;
        for(int conf=0; conf<10;conf++){
            if (vet_A[conf]<menor){
                menor = vet_A[conf];
                indice = conf;
            }
        }

        vet_ordenado[ordem] = menor;

        vet_A[indice] = 9999999;
        ordem++;
    }

    for(int ind=0; ind<10;ind++){
        printf("%d ", vet_ordenado[ind]);
    }
}


