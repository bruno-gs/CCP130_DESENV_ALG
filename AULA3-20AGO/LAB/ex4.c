/* 
Exercicio 4 da aula 3 da disciplina
AUTOR: FRITZ
DATA: 24/08/2021
*/

/*
Escreva um programa que leia um valor inteiro n (1 < n < 1000). 

n*2 linhas de saída serão apresentadas na execução do programa, seguindo a lógica do exemplo abaixo.
*/

#include <stdio.h>
#include <math.h>

int main(void){
    float linha, numero; 
    // int valor_meio=1, valor_fim=1;
    printf("Digite um número: \n");
    scanf(" %f", &numero);

    for(linha = 1; linha <= numero; linha ++) {

        // na correria, usando muitas variaveis
        // valor_meio = linha * linha;
        // valor_fim = valor_meio * linha;
        // printf("%d %d %d\n", linha,valor_meio, valor_fim);

        // valor_meio ++;
        // valor_fim ++;
        // printf("%d %d %d\n", linha,valor_meio, valor_fim);

        // ************ PENSANDO MELHOR
        // valor_meio = linha²
        // valor_fim = linha³

        printf("%.0f %.0f %.0f\n", linha, pow(linha,2), pow(linha,3));
        printf("%.0f %.0f %.0f\n", linha, (pow(linha,2)+1), (pow(linha,3)+1));
    }


    return 0;
}