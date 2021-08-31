/* 
Exercicio 1 da atv 3 da disciplina
AUTOR: FRITZ
DATA: 31/08/2021
*/

/*
Faça um programa para receber um vetor de 10 elementos inteiros e 
apresentar todos os conteúdos que forem maiores que a soma de dois de seus antecessores.
*/

#include <stdio.h>

int main(void){

    int vetor[10], i;

    // pedindo input para criação do vetor
    for(i=0; i<10;i++){
        scanf(" %d", &vetor[i]);
    }

    // colocando os dois primeiros termos do vetor nas variaveis de comparação
    // int termo1 = vetor[0], termo2 = vetor[1], pos, soma=0;  
    int pos;
    // print pedido    
    printf("Abaixo estão os números que atendem a condição\n");

    // // for para fazer as contas do que precisamos
    // for(pos=2; pos<10; pos++){
    //     soma = termo1 + termo2;
    //     if(vetor[pos] > soma){
    //         printf("%d\n", vetor[pos]);
    //     }
    //     termo1 = vetor[(pos-1)];
    //     termo2 = vetor[pos];
    // }


    // for para fazer as contas do que precisamos
    // fazendo mais eficiente e menor
    for (pos=2; pos<10;pos++){
        if(vetor[pos]>vetor[pos-1]+vetor[pos-2]){
            printf("%d\n", vetor[pos]);
        }
    }
    return 0;
}