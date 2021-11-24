/*
AUTOR: FRITZ
DATA: 24/11/2021

Escreva uma função chamada triplo que recebe três números reais 
    a, b e c passados por “referência" (usando ponteiros). 
    
Sua função deve alterar a, b e c para serem o triplo do valor original. 

Lembrete: Não copiem o código entre vocês. Qualquer plágio identificado receberá nota zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void triplo(float *a, float *b, float *c){
    // acessa valor da variavel e multiplica ele por 3
    (*a) *= 3;
    (*b) *= 3;
    (*c) *= 3;
} 

int main(void){
    // main dado completo 
    float a=1.2, b=3.7, c=80.1;
    triplo(&a, &b, &c);
    printf("a=%.2f b=%.2f c=%.2f", a, b, c);

    return 0;
}