/*
Autor : FRITZ
DATA: 16/09/2021

Desenvolva um programa que cria um vetor inteiro (vetor tradicional). 
    Então, apresente cada um dos elementos e seus respectivos endereços. 
*/

#include <stdio.h>

int main(void){

    // declara o tamanho do vetor
    int tamanho = 5;

    //declara o vetor
    int vetor[tamanho];

    // inicializa o vetor com valor de 0 até o tamanho do vetor
    for(int i=0; i<tamanho; i ++){
        vetor[i] = i;
        printf("Na posição %d temos o valor %d guardado na memória %p\n", i, vetor[i], &vetor[i]);
    }

    //mostrando o valor e sua posição na memória
            // pode usar no mesmo loop
    // for(int i=0; i<tamanho; i ++){
    //     printf("Na posição %d temos o valor %d guardado na memória %p\n", i, vetor[i], &vetor[i]);
    // }

    return 0; 
}