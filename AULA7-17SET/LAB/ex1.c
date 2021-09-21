/*
Autor : FRITZ
DATA: 21/09/2021

Escreva um programa em C para alocar memória dinamicamente para armazenar N números inteiros 
    inseridos pelo usuário e, em seguida, exiba a soma de todos os N números.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int N = 1;

    // pedindo para o usuário digitar qual a quantidade de números
    printf  ("Digite a quantidade de números inteiros que serão digitados: ");
    scanf   (" %d", &N);

    //declaração do ponteiro e alocação de memoria
    int *ptr_int    = calloc(N ,sizeof(int));
    
    // atribuindo valores
    for(int i =0; i<N; i ++){
        printf  ("Digite o %dº número: ", (i+1));
        scanf   (" %d", &ptr_int[i]);
    }

    printf  ("=============================\nOs números inteiros digitados foram: ");

    //printando cada um
    for(int i =0; i<N; i ++){
        printf   ("%d ", ptr_int[i]);
    }

    free(ptr_int);

    printf  ("\n");

    return 0;
}