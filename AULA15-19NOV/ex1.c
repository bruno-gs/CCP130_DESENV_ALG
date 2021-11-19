/*
AUTOR: FRITZ
DATA: 19/11/2021

Escreva um programa em C para encontrar o máximo
entre dois números usando operador ternário.

*/

#include <stdio.h>

int main(){
    float a,b, maior;

    puts("Digite um número: ");
    scanf(" %f", &a);
    puts("Digite outro número: ");
    scanf(" %f", &b);
    maior =  a>b ? a : b;
    printf("O maior eh: %.2f", maior);
    return 0;
}