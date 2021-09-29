/*
Autor : FRITZ
DATA: 28/09/2021

Escreva uma função chamada triplo que recebe três números reais a, b e c passados por “referência". 

    Sua função deve “retornar” em a, b e c o triplo de cada valor.

Atenção:  Submeta somente o código da função, sem o main.
*/

#include <stdio.h>

void triplo(int *a, int *b, int *c){
    *a *= 3;
    *b *= 3;
    *c *= 3;
}


void main(){
    // inteiros
    int a = 5, b = 11, c = 12;

    // chamando a função -- por referẽncia
    triplo(&a, &b, &c);

    printf("Triplo: %d, %d, %d\n", a, b, c);
}