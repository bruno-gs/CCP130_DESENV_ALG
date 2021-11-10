/*
AUTOR: FRITZ
DATA: 10/11/2021

Escreva uma função que leia uma sequência numérica do arquivo numeros3.txt em um vetor. 
Além de ler o conteúdo do arquivo, 
    a função deve eliminar os números repetidos e gravar, 
        somente os números únicos, em outro arquivo numeros3unicos.txt
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