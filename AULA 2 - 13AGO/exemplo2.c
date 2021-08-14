/* 
Exemplos aula 2 da disciplina
AUTOR: FRITZ
DATA: 13/08/2021
*/

/*ENUNCIADO:
Escreva um programa que lê dois números 
e que pergunta qual a operação você quer realizar. 
Você pode escolher soma(0), subtração(1), multiplicação(2) ou divisão(3).
Exiba o resultado da operação escolhida ou uma mensagem dizendo que a operação escolhida não é válida.

*/

#include <stdio.h>

int main(void){
    printf("OPERAÇÕES COM 2 NÚMEROS\n");
    printf("========================================================\n");        
    // Definindo as variáveis
    float n1,n2, total;
    int op;

    // Solicitando os valores dos números e qual a opção
    // printf("Digite o primeiro número: ");
    // scanf("%f", &n1);
    // printf("DIgite o segundo número: ");
    // scanf("%f", &n2);
    printf("Digite o 1 e o 2 número: ");
    // 2 inputs em um só, com espaço no meio
    scanf("%f %f", &n1, &n2);
    printf("Digiite a operação desejada\n");
    printf("[0-soma; 1-subtração; 2-multiplicação; 3-divisão]:");
    scanf("%d", &op);

    // bloco de condição para ver qual a operação
    // COM IF
    // if (op == 0){
    //     total = n1+n2;
    // }
    // else if (op==1){
    //     total = n1-n2;
    // }
    // else if (op==2){
    //     total = n1*n2;
    // }
    // else if (op==3){
    //     total = n1/n2;
    // }
    // else{
    //     total = 0;
    //     printf("Operação inválida!");
    // }


    // COM switch
    switch(op){
        case 0:
            total = n1+n2;
        break;
        case 1: 
            total = n1-n2;
        break;
        case 2:
            total = n1*n2;
        break;
        case 3:
            total = n1/n2;
        break;
        default:
            total = 0;
            printf("Operação inválida!");
    }

    printf("==================================\n"); 
    // retornando o RESULTAOD
    printf("RESULTAOD: %.2f\n",total);
    
    return 0;
}