/*
autor: FRITZ

ENUNCIADO: Escreva um programa que 
calcula a média aritmética de 5 números digitados pelo usuário.
Utilize contadores e acumuladores.
*/

#include <stdio.h>

int main(void){
    float cada_nota, soma=0;
    printf("MÉDIA DE 5 NOTAS\n---------------------\n");
    for(int notas=1; notas < 6 ; notas++){
        printf("\nDigite a nota %d: ",notas);
        scanf(" %f", &cada_nota);
        soma += cada_nota;
    }
    soma /= 5;

    printf("\nA média final das 5 notas é: %.2f\n",soma);
    return 0;
}

