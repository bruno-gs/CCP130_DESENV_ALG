/*Escreva um programa que declare um inteiro, um real, um char, e ponteiros para inteiro, 
    real, e char. Associe as variáveis aos ponteiros (use &). 
        Modifique os valores de cada variável usando os ponteiros. 
            Imprima os valores das variáveis antes e após as modificações*/

#include <stdio.h>

int main(void){

    // declaração de ponteiros
    int *pa, a = 10;
    float *pb, b = 20.20;
    char *pc, c = 'a';

    // pra onde os ponteiros apontam
    pa = &a;
    pb = &b;
    pc = &c;

    // troca indireta
    *pa = 11;
    *pb = 21.21;
    *pc = 'c';



    return 0;
}