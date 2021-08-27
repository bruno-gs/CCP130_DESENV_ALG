/* 
Exercício 03 da disciplina
AUTOR: FRITZ
DATA: 10/08/2021
*/

/*ENUNCIADO:
Faça um programa em C 
que solicita do usuário dois números reais, 
então some os dois números e exiba o resultado.
*/

#include <stdio.h>

// função de início
int main(void){
    // Identificação do problema
    printf("SOMADOR DE 2 NÚMEROS REAIS\n");
    printf("==============================\n");        
    // Definindo as variáveis
    float numero1, numero2, resultado;

    // Solicitando 2 números reais
    printf("Digite o primeiro número: ");
    scanf(" %f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    // variável que armazena o valor da soma
    resultado = numero1 + numero2;

    // retornando o valor ao usuário
    printf("A soma de %.2f e %.2f é %.2f\n",numero1,numero2,resultado);
    
    return 0;
}