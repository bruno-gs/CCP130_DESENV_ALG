/*
AUTOR: FRITZ
DATA: 08/11/2021

Faça um programa que cria e grava números pares e ímpares em
arquivos separados. Números de 0 a 999. Números pares no
arquivo pares.txt e os ímpares no arquivo impares.txt
*/

#include <stdio.h>
#include <stdlib.h>

// execução pior por abrir e fechar varias vezes
/* void main(){  
    // ponteiro do arquivo
    FILE *arq;
    int n=0;

    while(n < 1000){
        if(n%2 == 0){
            arq = fopen("pares.txt", "a");
            fprintf(arq,"%d\n", n);
            fclose(arq);
        }
        else{
            arq = fopen("impares.txt", "a");
            fprintf(arq,"%d\n", n);
            fclose(arq);
        }
        n ++;
    }
} */

void main(){  
    // ponteiro do arquivo pares -- abre de uma vez
    FILE *arq_pares = fopen("pares.txt","w");
    // ponteiro do arquivo pares -- abre de uma vez
    FILE *arq_impares = fopen("impares.txt","w");

    int n=0;

    while(n < 1000){
        if(n%2 == 0){
            fprintf(arq_pares,"%d\n", n);
        }
        else{
            fprintf(arq_impares,"%d\n", n);
        }
        n ++;
    }
    fclose(arq_pares);
    fclose(arq_impares);
}