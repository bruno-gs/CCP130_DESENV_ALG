/* 
Exercicio 2 da aula 2 da disciplina
AUTOR: FRITZ
DATA: 17/08/2021
*/

/*Enunciado:
A empresa X resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

0-400 --> 15%
400.01-800 --> 12%
800.01-1200 --> 10%
1200.01-2000 --> 7%
acima de 2000 --> 4%

Leia o salário do funcionário e calcule e mostre o novo salário, 
bem como o valor de reajuste ganho e o índice reajustado, em percentual.
*/
#include <stdio.h>

int main(void){
    float salario, reajuste;
    
    printf("Digite o salário:");
    scanf("%f", &salario);

    // COndições para cada reajuste
    // Usando variavel para não printar tudo em todos os if's
    if(salario<=400){
        reajuste = 0.15;
    }
    else if(salario<=800){
        reajuste = 0.12;
    }
    else if(salario<=1200){
        reajuste = 0.10;
    }
    else if(salario<=2000){
        reajuste = 0.07;
    }
    else{
        reajuste = 0.04;
    }

    // Output ao usuario
    printf("\nNovo salário = %.2f", (salario*(1+reajuste)));
    printf("\nValor do reajuste = %.2f", (salario*(reajuste)));
    printf("\nIndice do reajuste = %.0f", (100*reajuste));

    return 0;
}