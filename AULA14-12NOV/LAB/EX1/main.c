/*
AUTOR: FRITZ
DATA: 18/11/2021
Faça uma função que receberá dois números positivos por
parâmetro e retorna a soma dos N números inteiros existentes
entre eles
*/

#include "somatorio.h"
#include <stdio.h>

int main(){
    int num1,num2;
    printf("Digite o primeiro número: ");
    scanf(" %d", &num1);
    printf("Digite o segundo número: ");
    scanf(" %d", &num2);

    soma(num1,num2);
    
    return 0;
}