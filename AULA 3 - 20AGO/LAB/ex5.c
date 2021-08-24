/* 
Exercicio 5 da aula 3 da disciplina
AUTOR: FRITZ
DATA: 24/08/2021
*/

/*
A seguinte sequência de números 0, 1, 1, 2, 3, 5, 8, 13, 21, ... 
    é conhecida como série de Fibonacci. 

Nesta sequência, cada número, depois dos 2 primeiros, 
    é igual à soma dos 2 anteriores. 
    
Escreva um algoritmo que leia um inteiro N (N < 46) 
e mostre os N primeiros números dessa série.

Saída: Os valores devem ser mostrados na mesma linha, 
separados por um espaço em branco. 
Não deve haver espaço após o último valor.
*/

#include <stdio.h>

int main(void){
    int t2, t0=0, t1=1, termos, cont = 3;

    // pedindo a quantidade de termos da sequencia
    printf("Digite um número: \n");
    scanf(" %d",&termos);

    printf("%d %d ", t0, t1);

    while(cont<=termos){

        // novo numero como soma dos dois ultimos
        t2 = t1 + t0;
        printf("%d ", t2);

        // troca de lugar entre os valores
        // O t0 é esquecido, t1 vira t0 e t2 (novo) vira t1
        t0 = t1;
        t1 = t2;

        // incrementa cont para continuar passando os valores
        cont ++;
    }
    return 0;
}