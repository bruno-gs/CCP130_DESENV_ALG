/*
Faça um programa que crie um vetor de tamanho 10 dinamicamente por ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    //declaração do ponteiro e alocação de memoria
    int *vetor    = calloc(10, sizeof(int));
    

    // atribuindo valores
    for(int i =0; i<10; i ++){
        vetor[i] = i;
    }

    //printando o valor do vetor
    for (int i =0; i<10; i ++){
        printf("%d ", vetor[i]);
    }

    return 0;
}