/* 
Exercício 05 da disciplina
AUTOR: FRITZ
DATA: 12/08/2021
*/

/*ENUNCIADO:
Faça um programa que solicita dois números inteiros ao usuário.
Armazene cada um destes números em variáveis distintas. 
Realize então uma troca de valores entre as variáveis. 
Exiba, no fim, os valores de cada variável. Exemplo: 
    Entrada: a = 9; b = 2;        Saída: b = 2; a = 9
*/

#include <stdio.h>

// função de início
int main(void){
    // Identificação do problema
    printf("TROCANDO VARIÁVEIS\n");
    printf("==============================\n");        
    // Definindo as variáveis
    int prim, seg, aux;

    // Solicitando os valores das variáveis
    printf("Digite o primeiro número: ");
    scanf(" %d", &prim);
    printf("Digite o segundo número: ");
    scanf(" %d", &seg);

    // Usando uma única variável auxiliar
    // O obj seria usar mais, porém a construção seria a mesma
    aux = prim;
    prim = seg;
    seg = aux;

    // retornando os valores ao usuário
    // Poderia só printar e alterar a ordem
    // Poderia fazer um pedido como A e B, para ficar mais visível, mas também da na mesma
    printf("O novo primeiro valor é o: %d\nO novo segundo valor é o: %d\n",prim, seg);
    
    return 0;
}