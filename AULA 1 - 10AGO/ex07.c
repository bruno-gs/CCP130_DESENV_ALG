/* 
Exercício 07 da disciplina
AUTOR: FRITZ
DATA: 12/08/2021
*/

/*ENUNCIADO:
Tendo como dados de entrada a altura de uma pessoa, 
construa um algoritmo que calcule seu peso ideal, usando a 
seguinte fórmula: (72.7*altura) - 58. Imprima o resultado.
*/

#include <stdio.h>

// função de início
int main(void){
    // Identificação do problema
    printf("PESO IDEAL\n");
    printf("===================================\n");        
    // Definindo as variáveis
    // Colocarei um print tentando evitar a utilização de peso para entender a função
    float altura, peso;

    // Solicitando o valor da altura
    printf("Digite sua altura (em metros): ");
    scanf(" %f", &altura);
           
    // variável que calcula o peso pela fórmula fornecida
    // dias * 60 REAIS
    // km * 0.15 reais
    peso = (72.7*altura) - 58;

    printf("==================================\n"); 
    // retornando o valor do peso ao usuário
    printf("Com %.2fm de altura, seu peso ideal é: %.2fkg\n",altura, peso);

    // Não considero boa prática, pois é mais visual ver na variável
    // Porém, queria testar, em alguns casos simples, acredito n ter mto impacto
    // printf("Com %.2fm de altura, seu peso ideal é: %.2fkg\n",altura, ((72.7*altura) - 58));
    return 0;
}