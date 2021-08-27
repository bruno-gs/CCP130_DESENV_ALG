/* 
Exercício 06 da disciplina
AUTOR: FRITZ
DATA: 12/08/2021
*/

/*ENUNCIADO:
Escreva um programa que pergunte a quantidade de km percorridos por um carro alugado, 
assim como a quantidade de dias pelos quais o carro foi alugado. 
Calcule e mostre o preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por km rodado. 
*/

#include <stdio.h>

// função de início
int main(void){
    // Identificação do problema
    printf("ALUGUEL DE CARROS\n");
    printf("========================================================\n");        
    // Definindo as variáveis
    // km pode ser 1.5, ou 2.5 -- coloquei float por usar em python 
    // ainda n usei double, mas parece carregar mais informação
    int dias;
    float km, total;

    // Solicitando os valores de dias e km
    printf("Digite a quantidade de dias em que o carro foi utilizado: ");
    scanf(" %d", &dias);
    printf("Por quantos km o carro rodou? Digite: ");
    scanf(" %f", &km);
       
    // variável que armazena o valor da soma
    // dias * 60 REAIS
    // km * 0.15 reais
    total = (dias*60) + (km*0.15);

    printf("==================================\n"); 
    // retornando o valor ao usuário
    printf("TOTAL A SER PAGO: R$%.2f\n",total);
    
    return 0;
}