/* 
Exercicio 6 da aula 3 da disciplina
AUTOR: FRITZ
DATA: 24/08/2021
*/

/*
Faça um programa que receba um número inteiro maior que 1 e 
verifique se o número fornecido é primo ou não.

Mostre uma mensagem de número primo ou de número não primo. 
    Um número é primo quando é divisível apenas pelo número um e por ele mesmo.
*/

#include <stdio.h>

int main(void){
    int num, total=0;

    // Qual numero deseja saber que é primo
    printf("Digite um número inteiro: \n");
    scanf(" %d", &num);

    // fará a conferencia em cada valor até o desejado
    // somará ao total quando for divisivel
    for(int seq = 1; seq <= num; seq++){
        if(num % seq == 0){
            total ++;
        }
    }

    // total == 2 pois tem o 1 e o valor
    if(total==2){
        printf("O número %d é primo.", num);
    }

    // senão não é primo
    else{
        printf("O número %d não é primo.", num);
    }
    return 0;
}