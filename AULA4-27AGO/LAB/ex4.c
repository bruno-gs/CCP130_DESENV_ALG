/* 
Exercicio 4 da atv 3 da disciplina
AUTOR: FRITZ
DATA: 31/08/2021
*/

/*
Faça um programa que preencha um vetor com dez números inteiros aleatórios (de 0 a 100). 
    Calcule e mostre os números superiores a 50 e suas respectivas posições. 
    O programa deverá mostrar uma mensagem caso não exista nenhum número nessa condição.

Para usar os números aleatórios, utilize a variável seed no lugar do time(NULL).
    A variável seed é uma variável que é declarada pelos testes no Moodle.

Use assim: srand(seed);
*/

#include <stdio.h>
// rand()%101 -- gera um a menos do estabelecido (até 100)
#include <stdlib.h>

// time(NULL) -- para ajudar a randomizar a partir do tempo
#include <time.h>

int main(void){
    // declarando a seed para o moodle passar
    srand(seed); // seed

    // declarando o vetor
    int vetor[10], soma=0;


    for(int pos=0; pos<10; pos++){

        int n = rand() % 101; // de 0 a 100 -- % 101 são os elementos

        // colocar os valores no vetor
        vetor[pos] = n;

        if(vetor[pos]>50){
            soma+=1;
        }
    }
    printf("Há %d números maiores que 50 nas posições: ",soma);

    for(int conf=0; conf<10; conf++){
        if(vetor[conf]>50){
            printf("%d ",conf);
        }
    }

    return 0;
}
