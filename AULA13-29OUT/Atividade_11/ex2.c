/*
AUTOR: FRITZ
DATA: 10/11/2021

Crie um programa que inverta a ordem das linhas do arquivo pares.txt. 
    A primeira linha deve conter o maior número e a última linha o menor. 
    Salve o resultado em outro arquivo, chamado pares_invertido.txt.
*/

#include <stdio.h>
#include <stdlib.h>

// função para pegar o total de funcionarios no arquivo
int leitura(FILE *arquivo, int vet_num[1000]){
    int i = 0;
    while(fscanf(arquivo, "%d", &vet_num[i]) != EOF){
        i ++;
    }
    return i;
}


int main(){  
    // ponteiro para abrir o arquivo -- modo de leitura
    FILE *arquivo = fopen("pares.txt","r");
    FILE *invertido = fopen("pares_invertido.txt","a");

    //vetor para salvar todos os numeros do arquivo
    int vet_num[1000];

    // retorna com o vetor cheio dos valores do arquivo
    int quantidade = leitura(arquivo, vet_num); // pega a quantidade de valores

    for(int i=quantidade-1; i>=0; i --){
        // escreve no arquivo
        fprintf(invertido,"%d\n", vet_num[i]);
    }
    return 0;
}