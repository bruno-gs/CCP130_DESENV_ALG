/* 
Exercicio 2 da atv 3 da disciplina
AUTOR: FRITZ
DATA: 31/08/2021
*/

/*
Faça um programa que mostra o
 menor valor dentro do vetor T de tamanho 4. 

Os valores do vetor T são fornecidos pelo programa do Moodle, 
faça o código sem declarar o vetor, apenas use esse vetor.
*/

#include <stdio.h>

int main(void){
    // declaração dada pelo programa
    int menor=T[0];
    for(int i=0; i<4; i++){
        if(T[i]<menor){
            menor = T[i];
        }
    }
    printf("O menor valor é %d", menor);
    return 0;
}