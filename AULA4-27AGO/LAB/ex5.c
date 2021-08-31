/* 
Exercicio 5 da atv 3 da disciplina
AUTOR: FRITZ
DATA: 31/08/2021
*/

/*
Faça um programa que preencha um vetor com vinte números inteiros aleatórios (de 0 a 200). 
Ordene, então, o vetor de forma crescente.

Para usar os números aleatórios, utilize a variável seed no lugar do time(NULL). 
A variável seed é uma variável que é declarada pelos testes no Moodle.

Use assim: srand(seed);
*/

#include <stdio.h>
// rand()%201 -- gera um a menos do estabelecido (até 200)
#include <stdlib.h>

// time(NULL) -- para ajudar a randomizar a partir do tempo
#include <time.h>

int main(void){
    // declarando a seed para o moodle passar
    srand(seed); // seed

    // declarando o vetor
    int vetor[20], ordenado[20];

    // gerar o vetor com os valores aleatorios
    for(int pos=0; pos<20; pos++){

        int n = rand() % 201; // de 0 a 200 -- % 201 são os elementos

        // colocar os valores no vetor
        vetor[pos] = n;
    }

    int ordem = 0, menor = vetor[0], indice=0;
    while(ordem<20){
        menor = 9999;
        for(int conf=0; conf<20;conf++){
            if (vetor[conf]<menor){
                menor = vetor[conf];
                indice = conf;
            }
        }

        ordenado[ordem] = menor;

        vetor[indice] = 999;
        ordem++;
    }

    for(int ind=0; ind<20;ind++){
        printf("%d ", ordenado[ind]);
    }
    

    return 0;
}
