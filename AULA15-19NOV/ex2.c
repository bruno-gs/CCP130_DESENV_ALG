/*
AUTOR: FRITZ
DATA: 19/11/2021

Faça uma calculadora com 2 operações básicas, soma
e subtração, utilizando operador ternário.

*/

#include <stdio.h>

int main(){
    float n1,n2, resultado;
    int operacao;
    puts("Digite um número: ");
    scanf(" %f", &n1);
    puts("Digite um número: ");
    scanf(" %f", &n2);
    puts("Digite a operação: [1] SOMA [2] SUBTRAÇÃO");
    scanf(" %d", &operacao);
    resultado =  operacao == 1 ? n1 + n2 : n1-n2;
    printf("Resultado: %.2f", resultado);
    return 0;
}