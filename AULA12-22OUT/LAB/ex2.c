/*
AUTOR:  FRITZ
DATA:   27/10/2021

Usando recursividade, escreva uma função chamada soma 
    que calcule a soma de todos os valores de um vetor de números inteiros. 
    
O vetor pode ter qualquer quantidade de números. 

Caso base: Tamanho do vetor = 0 => Soma é 0; 
    Passo da recursão: v[n-1] + soma do restante do vetor
*/

#include <stdio.h>

int soma(int quantidade, int vetor[]){
    // Tamanho do vetor = 0 => Soma é 0; 
    if(quantidade == 0){
        return 0;
    }
    else{
        // pega o valor atual ( vetor[quantidade-1] ) e soma
        // com o proximo 'soma' que via pegar o proximo valor
            // EX: Quantidade == 5: vetor[5-1] (index do ultimo eletemento) + soma(4, vetor)
                                                                            // esse soma vai pegar o valor vetor[3]
        return vetor[quantidade-1] + soma(quantidade-1, vetor);
    }
}

// comentar essa parte pra jogar no moodle
int main(){
    int vetor[] = {1, 2, 3, 4, 5};
    printf("Soma do vetor: %d\n", soma(5, vetor));
    return 0;
}