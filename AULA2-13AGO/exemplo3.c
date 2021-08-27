/* 
Exemplos aula 2 da disciplina
AUTOR: FRITZ
DATA: 13/08/2021
*/

/*ENUNCIADO:
Uma loja fornece sempre 5% de desconto para os seus funcionários. 
A loja fornece também 3% de desconto para clientes que comprem mais do que R$ 1.000,00. 
Faça um programa que calcule o valor total a ser pago por uma pessoa. 
O programa deverá ler o valor total da compra efetuada 
e um código que identifique se o comprador é um cliente comum (1) ou um funcionário (2)
*/

#include <stdio.h>

int main(void){
    printf("LOJA\n");
    printf("========================================================\n");        
    // Definindo as variáveis
    float total, final;
    int cliente;

    // Solicitando os valores dos números e qual a opção
    printf("Qual o valor total da compra: ");
    scanf("%f", &total);
    printf("Identificação do Cliente: \n[1] Comum \n[2] Funcionário\nOpção:");
    scanf("%d", &cliente);

    if (cliente == 2){
        final = total * 0.95;
    }
    else if (cliente ==1){
        if (total>1000){
            final = total * 0.97;
        }
        else{
            final = total;
        }
    }
    else{
        printf("Entrada de cliente inválida. Nenhum desconto aplicado.");
        final = total;
    }
    
    printf("==================================\n"); 
    // retornando o TOTAL A SER PAGO
    printf("O valor final é: R$%.2f\n",final);
    
    return 0;
}