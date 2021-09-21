/*
Autor : FRITZ
DATA: 21/09/2021

Escreva um programa em C para encontrar o maior elemento dentro de um vetor de ponteiros arr, 
    usando a Alocação de Memória Dinâmica.
        O usuário deve digitar a quantidade de elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    // para utilizar valores aleatórios
    srand(time(NULL));

    int N = 1;
    // pedindo para o usuário digitar a quantidade de elementos do vetor
    printf  ("Digite a quantidade de elementos do vetor: ");
    scanf   (" %d", &N);

    //declaração do ponteiro e alocação de memoria
    int *arr = calloc(N ,sizeof(int));    
 
    // atribuindo valores aleatórios de 0 a 50
    for(int i =0; i<N; i ++){
        arr[i] = rand() % 51;       // de 0 a 50
    }

    // mostrando os valores do vetor de ponteiros
    for(int i =0; i<N; i ++){
        printf("%d ", arr[i]);
    }

    // comparação para chegar no maior valor que está nos vetores
        // coloquei na primeira posição do vetor pois é oq parece pela imagem
    for(int i =0; i<N; i ++){
        if(arr[i]>arr[0]){
            arr[0] = arr[i];
        }
    }

    // O maior valor estará na primeira posição do vetor
    printf("\nO maior valor dentre os ponteiros é: %d", arr[0]);

    free(arr);

    printf  ("\n");
    return 0;
}