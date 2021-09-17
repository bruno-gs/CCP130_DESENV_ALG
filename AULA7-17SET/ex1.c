/*
Faça um programa em C para criar dinamicamente memória para int, char e float. 
    Teste o programa recebendo e imprimindo valores para cada tipo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    //declaração do ponteiro e alocação de memoria
    int *ptr_int    = malloc(sizeof(int));
    int *ptr_char   = malloc(sizeof(char));
    int *ptr_float  = malloc(sizeof(float));

    // atribuindo valores
    *ptr_int    = 10;
    *ptr_float  = 5.00;
    *ptr_char   = 't';

    //printando o valor de cada um
    printf("%d\n", *ptr_int);
    printf("%f\n", *ptr_float);
    printf("%c\n", *ptr_char);

    return 0;
}