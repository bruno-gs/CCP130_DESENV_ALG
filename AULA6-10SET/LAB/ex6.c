/*
Autor : FRITZ
DATA: 16/09/2021

Crie um programa que contenha um vetor contendo 5 elementos inteiros. 
    Leia esse vetor do teclado e imprima o endereço das posições com conteúdo sendo valores pares.
*/

#include <stdio.h>

int main(void){

    // declara o tamanho do vetor
    int tamanho = 5;

    //declara o vetor
    int vetor[tamanho];

    // pegar input do usuario e lotar o vetor
    for (int i=0; i<5; i ++){
        printf("Digite o %dº número: ",(i+1));
        scanf(" %d", &vetor[i]);
    }

    // 
    for(int i=0; i<tamanho; i ++){

        if (vetor[i] % 2 == 0){
            printf("Na posição %d temos o valor %d guardado na memória %p\n", i, vetor[i], &vetor[i]);   
        }
    }

    return 0; 
}