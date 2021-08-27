/* 
Exercicio 1 da aula 3 da disciplina
AUTOR: FRITZ
DATA: 24/08/2021
*/

/*Escreva um programa que leia números digitados pelo usuário. 
O programa deve ler os números até que 0 (zero) seja digitado. 
Quando 0 for digitado, o programa deve exibir a quantidade de dígitos que foram digitados, 
a somatória destes dígitos e a média aritmética.*/

#include <stdio.h>

int main(void){
    int numero, contagem =0, soma=0;
    do{
        printf("Digite um número: \n");
        scanf(" %d", &numero);
        contagem ++;
        soma += numero;

    }while(numero != 0);

    printf("Você digitou %d números\n", (contagem-1));
    printf("O somatório dos números é %d\n", soma);
    printf("Média = %d", (soma/(contagem-1)));

    return 0;
}