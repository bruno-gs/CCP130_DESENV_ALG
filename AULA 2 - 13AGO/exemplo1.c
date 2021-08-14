/* 
Exemplos aula 2 da disciplina
AUTOR: FRITZ
DATA: 13/08/2021
*/

/*ENUNCIADO:
Escreva um programa que pergunte a distância que um passageiro deseja percorrer em km. 
Calcule o preço da passagem, cobrando R$ 0,50 por km para viagens até 200 km e 
R$ 0,45 para viagens mais longas
*/

#include <stdio.h>

int main(void){
    printf("COBRANÇA DE PASSAGEIRO\n");
    printf("========================================================\n");        
    // Definindo as variáveis
    float km, total;

    // Solicitando os valores de km
    printf("Qual a distância, em km, da viagem: ");
    scanf("%f", &km);

    // bloco de condição para cálculo do total a ser pago
    if (km <= 200){
        total = km * 0.5;
    }
    else{
        total = km * 0.45;
    }

    printf("==================================\n"); 
    // retornando o valor ao usuário
    printf("TOTAL A SER PAGO: R$%.2f\n",total);
    
    return 0;
}