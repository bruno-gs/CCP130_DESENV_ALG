/*
AUTOR:  FRITZ
DATA:   27/10/2021

Dado um vetor de inteiros com qualquer número de elementos, inverta a posição dos seus elementos. 

Caso base: Tamanho do array menor ou igual a 1; 

Passo da recursão: Troca o 1º e o último elementos e inverte resto do array.

Para pegar o tamanho de um vetor de inteiros: 

int size = sizeof(vetor) / sizeof(int);
*/

#include <stdio.h>

void inverte(int vetor[], int inicio, int fim){
    int aux;
    // Tamanho do array menor ou igual a 1; 
    if(inicio >= fim){
        return;
    }
    else{
        // aux com o primeiro valor
        aux = vetor[inicio];
        // primeiro valor recebe o ultimo
        vetor[inicio] = vetor[fim];
        // ultimo valor recebe o primeiro do aux 
        vetor[fim] = aux;
        // chama a função com o inicial sendo o proximo e
        // final sendo um antes
        inverte(vetor, inicio+1,fim-1);
    }
}

int main(){
    // comentar essa parte pra jogar no moodle
    int vetor[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(vetor) / sizeof(int);
    printf("Vetor invertido: \n");
    // size -1 pois ele pega o valor completo e o index é -1
    inverte(vetor, 0, size-1);
    for(int i=0; i<size; i ++){
        printf("%d ", vetor[i]);
    }
    return 0;
}