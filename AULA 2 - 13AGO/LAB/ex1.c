/* 
Exercicio 1 da aula 2 da disciplina
AUTOR: FRITZ
DATA: 17/08/2021
*/

/*Enunciado:
Ler 2 valores reais, x e y, que representam coordenadas
Determine qual quadrante está ou se esta sobre um dos eixos

Leia 2 valores reais (x e y), que devem representar as coordenadas de um ponto em um plano. 
Então, determine a que quadrante (Q1, Q2, Q3, Q4) o ponto pertence 
ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).
*/

#include <stdio.h>

int main(void){
    // Declaração de variáveis
    float x, y;

    printf("Digite x e y: ");
    scanf("%f %f", &x, &y);

    if (x>0 && y>0){
        printf("\nQ1");
    }
    else if (x<0 && y>0){
        printf("\nQ2");
    }
    else if (x<0 && y<0){
        printf("\nQ3");
    }
    else if (x>0 && y<0){
        printf("\nQ4");
    }
    else{
        printf("\nEsta na origem");
    }
    return 0;
}