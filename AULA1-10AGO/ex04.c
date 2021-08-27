/* 
Exercício 04 da disciplina
AUTOR: FRITZ
DATA: 10/08/2021
*/

/*ENUNCIADO:
Faça um programa que solicita do usuário: 
uma quantidade de dias, horas, minutos e segundos. 
Calcule o total convertido em somente segundos e 
mostre o resultado.
*/

#include <stdio.h>

// função de início
int main(void){
    // Identificação do problema
    printf("TEMPO TOTAL EM SEGUNDOS\n");
    printf("==============================\n");        
    // Definindo as variáveis
    int dias, horas, minutos, segundos, tot_segundos;

    // Solicitando os valores de cada valor de tempo
    printf("Digite a quantidade de dias: ");
    scanf(" %d", &dias);
    printf("Digite a quantidade de horas: ");
    scanf(" %d", &horas);
    printf("Digite a quantidade de minutos: ");
    scanf(" %d", &minutos);
    printf("Digite a quantidade de segundos: ");
    scanf(" %d", &segundos);
    
    // variável que armazena o valor da soma
    // anos * por 86400 (60*60*24)
    tot_segundos = (dias*86400) + (horas*3600) + (minutos*60) + (segundos);

    // retornando o valor ao usuário
    printf("O valor, em segundos, de %d dias, %d horas, %d minutos e %d segundos, resulta em: %d segundos\n",dias, horas, minutos, segundos, tot_segundos);
    
    return 0;
}