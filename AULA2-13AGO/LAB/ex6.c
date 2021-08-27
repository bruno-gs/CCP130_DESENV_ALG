/* 
Exercicio 4 da aula 2 da disciplina
AUTOR: FRITZ
DATA: 17/08/2021
*/

/*Enunciado:
Faça um programa para um caixa eletrônico. 
O programa deverá perguntar ao usuário o valor do saque 
e depois informar quantas notas de cada valor serão fornecidas. 
O programa sempre tenta dar a menor quantidade de notas possível. 
    As notas disponíveis são as de 1, 5, 10, 50, 100 reais. 
O valor mínimo de saque é de 10 reais e o máximo de 1000 reais. 
    O programa não deve se preocupar coma a quantidade de notas existentes na máquina.

Exemplo 1: Para sacar a quantia de 256 reais, 
o programa fornece duas notas de 100, uma de 50, uma de 5 e uma nota de 1;

Exemplo 2: Para sacar a quantia de 399 reais, 
o programa fornece três notas de 100, uma nota de 50, 
quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/

#include <stdio.h>

int main(void){
    int valor, cem=0, cinq=0, dez=0, cinco=0, um=0;
    printf("Digite quanto deseja sacar: ");
    scanf(" %d", &valor);

    if(valor / 100 != 0){
        cem = valor / 100;
        valor = valor % 100;
    }
    if(valor/50!=0){
        cinq = valor/50;
        valor = valor % 50;
    }
    if(valor/10!=0){
        dez = valor/10;
        valor = valor % 10;
    }
    if(valor/5!=0){
        cinco = valor/5;
        valor = valor % 5;
    }
    if(valor/1!=0){
        um = valor/1;
        valor = valor % 1;
    }
    printf("%d nota(s) de 100\n", cem);
    printf("%d nota(s) de 50\n", cinq);
    printf("%d nota(s) de 10\n", dez);
    printf("%d nota(s) de 5\n", cinco);
    printf("%d nota(s) de 1", um);

    return 0;
}