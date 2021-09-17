/*
Escreva um programa em C para alocar memória dinamicamente 
    ara armazenar N números inteiros inseridos pelo usuário e, em seguida, 
        exiba a soma de todos os Nnúmeros.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

    //declaração do ponteiro e alocação de memoria
    int *vetor    = calloc(10, sizeof(int));
    

    // atribuindo valores
    for(int i =0; i<10; i ++){
        scanf(" %d", &vetor[i]);
    }

    int somatoria = 0;
    //printando o valor do vetor e somando os valores 
    for (int i =0; i<10; i ++){
        somatoria +=vetor[i];
        printf("%d ", vetor[i]);
    }

    printf("Somatoria: %d", somatoria);

    return 0;
}