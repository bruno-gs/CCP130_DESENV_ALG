/*
Autor : FRITZ
DATA: 05/09/2021

Escreva um programa que recebe quatro strings (sem utilizar o scanf()) 
    que representam números inteiros, 
        converte as strings em inteiros, 
            soma os valores e imprime o total dos quatro valores.

Fazer com vetores de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // declarando os ponteiros
    char *str_num1, *str_num2, *str_num3, *str_num4;

    int num1,num2,num3,num4;

    int total=0;

    // alocação de memoria
    str_num1 = malloc(sizeof(char)*10);
    str_num2 = malloc(sizeof(char)*10);
    str_num3 = malloc(sizeof(char)*10);
    str_num4 = malloc(sizeof(char)*10);


    printf("Digite os números:");

    // pega a entrada
    fgets(str_num1, 10, stdin);
    fgets(str_num2, 10, stdin);
    fgets(str_num3, 10, stdin);
    fgets(str_num4, 10, stdin);

    // converte os valores em int
    num1 = atoi(str_num1);
    num2 = atoi(str_num2);
    num3 = atoi(str_num3);
    num4 = atoi(str_num4);

    // faz a somatoria
    total =num1+num2+num3+num4;

    printf("\nSoma = %d", total);

    return 0;
}