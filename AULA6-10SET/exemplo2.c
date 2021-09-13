/*Faça um programa para somar 
    dois números reais utilizando ponteiros*/

#include <stdio.h>

int main(void){

    // declaração de ponteiros
    float a = 10.9, b = 4.1, *pa = NULL, *pb = NULL;
  
    // pra onde os ponteiros apontam
    pa = &a;
    pb = &b;


    printf("A soma de %f e %f é %f\n", *pa, *pb, (*pa + *pb));

    return 0;
}