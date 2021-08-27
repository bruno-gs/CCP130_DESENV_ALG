/* 
Exercicio 4 da aula 2 da disciplina
AUTOR: FRITZ
DATA: 19/08/2021
*/

/*Enunciado:
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
a) Álcool:

    i. até 20 litros, desconto de 3% por litro.

    ii. acima de 20 litros, desconto de 5% por litro.

b) Gasolina:

    i. até 20 litros, desconto de 4% por litro.

    ii. acima de 20 litros, desconto de 6% por litro.


Escreva um programa que solicite o número de litros vendidos e 
o tipo de combustível (álcool ou gasolina). 
Então, calcule e imprima o valor a ser pago pelo cliente sabendo-se que o 
preço do litro da gasolina é R$ 4,39 e, do álcool, R$ 3,19.
*/

#include <stdio.h>

int main(void){
    // Definindo variaveis
    char combustivel, sinal;
    float litros, desconto, valor, total;
    // solicitando input
    printf("Digite o tipo de combustivel (G para Gasolina ou A para Alcool): ");
    scanf("%c", &combustivel);
    printf("\nDigite a quantidade de litros: ");
    scanf("%f",&litros);

    // condição de usar alcool
    if(combustivel == 'a' || combustivel == 'A'){
        // valor do combustivel
        valor = 3.19;

        // condição para desconto abaixo de 20 litros
        if(litros<=20){
            desconto = 0.03;
        }
        else{
            desconto = 0.05;
        }
    
    }

    // condição de ser escolhida a gasolina
    else if(combustivel=='g' || combustivel=='G'){
        // valor do combustivel
        valor = 4.39;

        // condição para desconto abaixo de 20 litros
        if(litros<=20){
            desconto = 0.04;
        }
        else{
            desconto = 0.06;
        }
    }

    // caso fosse escrito outro tipo de combustivel
    else{
        printf("Opção inválida neste posto");
    }

    // valor final de pagamento -- valor descontado
    total = litros * valor * (1-desconto);

    // não soube como colocar a porcentagem sem ser assim
    sinal = '%';

    // devolutiva de desconto e valor que irá passageiro
    printf("\nValor com desconto de %.0f%c: %.2f", desconto*100, sinal, total);

    return 0;
}