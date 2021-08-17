/* 
Exercicio 3 da aula 2 da disciplina
AUTOR: FRITZ
DATA: 17/08/2021
*/

/*Enunciado:
Faça um programa que calcule as raízes de uma equação de segundo grau, na forma ax² + bx + c. 
O programa deverá pedir os valores de a, b e c e fazer as consistências, 
informando ao usuário as seguintes situações:

a) Se o usuário informar o valor de a igual a zero, 
a equação não é do segundo grau e o programa não deve pedir os demais valores, sendo encerrado;

b) Se o delta calculado for negativo, a equação não possui raízes reais. 
Informe ao usuário e encerre o programa;

c) Se o delta calculado for igual a zero a equação possui apenas uma raiz real; 
informe-a ao usuário;

d) Se o delta for positivo, a equação possui duas raiz reais; informe-a ao usuário.
*/
#include <stdio.h>
// incluindo a biblioteca de matematica para usar a raiz sqrt
#include <math.h>

int main(void){
    float a,b,c;
    float delta, raiz1, raiz2;

    // Pedindo os inputs
    printf("Digite os valores de 'a', 'b' e 'c' respectivamente separados por um espaco:");
    scanf("%f %f %f", &a,&b,&c);

    // Cálculo do delta
    delta = ((b*b) - (4.0*a*c));


    // Condição de a!=0
    if(a!=0){
        // Delta > 0 
        // Colocando as variaveis sem &
        // Como tudo é float, colocamos o valor de 2.0
        if(delta>0){
        raiz1 = (((-b) + (sqrt(delta)))/(2.0*a));
        raiz2 = (((-b) - (sqrt(delta)))/(2.0*a));
        printf("\nDelta positivo (%.2f), existem duas raizes reais: %.4f e %.4f.", delta, raiz1, raiz2);
        }


        // Delta < 0
        else if(delta<0){
        printf("\nDelta negativo (%.2f), portanto nao existem raizes reais.", delta);
        }
        

        // Delta == 0
        else{
        raiz1 = (-b / (2.0*a));
        printf("\nDelta igual a 0 (%.2f), existe apenas uma raiz real: %.4f.", delta, raiz1);
        }
    }

    // a == 0
    else{
        printf("\nA equacao nao e de Segundo grau, porque 'a=0'");
    }
    return 0;
}