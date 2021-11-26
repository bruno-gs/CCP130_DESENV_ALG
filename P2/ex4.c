/*
AUTOR: FRITZ
DATA: 26/11/2021

Escreva um programa que calcule a e^x, sabendo que:

Considere somente os 7 primeiros termos da equação na sua solução.

*/

#include <stdio.h>
#include <math.h>

int fatorial(int n){
    // FAZER
    int fatorial=1;
    while(n>0){
        fatorial *= n;
        n --;
    }
    return fatorial;
}

float exponencial(float base, int expoente){
    // FAZER
    float exxp;
    exxp = pow(base, expoente);
    return exxp;    
}

int main(){
    // FAZER
    // chame a função exponencial
    // exiba o resultado
    float x;
    float resultado = 0;
    float exxp;
    int ff;
    printf("Digite x: \n");
    scanf(" %f",&x);

    for(int i =0; i<7; i++){ 
        ff = fatorial(i);
        exxp= exponencial(x, i);
        resultado += exxp/ ff;
    }
    // exiba o resultado
    printf("exp(%.2f) = %f", x, resultado);
    return 0;
}