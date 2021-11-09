/*
AUTOR: FRITZ
DATA: 09/11/2021

Considere um arquivo que possui uma lista de números reais. 

Elabore um programa para determinar qual o maior valor, 
    qual sua posição 
        e quantos números possui esse arquivo.

Obs.: Utilize o arquivo: maiorR.txt

Exemplo:
Maior: # na posicao #
Total de Elementos: #
*/

#include <stdio.h>
#include <stdlib.h>

int main(){  
    // ponteiro para abrir o arquivo -- modo de leitura
    FILE *arquivo = fopen("maiorR.txt","r");
    
    float maior, n;         // variaveis de auxilio para a resposta
    int i=1, indice =1 ;    // conta quantos elementos tem no arquivo e qual o indice

    // condição do while com tudo de uma vez
    // while(fscanf(arquivo, "%f", &n) != EOF){

    while(1){
        fscanf(arquivo,"%f", &n); // pega do arquivo, um valor float e coloca no n
        // verifica se chegou ao final do arquivo
        if(feof(arquivo)){
            break;
        }
        // guarda o maior valor em maior
        if(n>maior){
            maior = n;
            indice = i;
        }
        i++;
    }
    fclose(arquivo);
    printf("Maior: %.4f na posicao %d\n", maior, indice);
    printf("Total de Elementos: %d\n", i);
    return 0;
}