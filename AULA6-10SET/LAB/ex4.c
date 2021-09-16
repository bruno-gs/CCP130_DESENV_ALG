/*
Autor : FRITZ
DATA: 16/09/2021

Crie um programa que contenha um vetor de inteiros contendo 5 elementos. 
    Utilizando apenas aritmética de ponteiros, 
        leia este vetor pelo teclado e imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main(void){

    // vetor para pegar os valores
    int numeros[5];
    // ponteiro iniciados com null
    int *p_0 = NULL, *p_1= NULL, *p_2= NULL,*p_3= NULL, *p_4= NULL;

    // pegar input do usuaria e lotar o vetor
    for (int i=0; i<5; i ++){
        printf("Digite o %dº número: ",(i+1));
        scanf(" %d", &numeros[i]);
    }

    // atribuindo a localização de cada letra do vetor
    p_0 = &numeros[0];
    p_1 = &numeros[1];
    p_2 = &numeros[2];
    p_3 = &numeros[3];
    p_4 = &numeros[4];

    printf("Dobro dos valores digitados:\n");

    printf("[ %d %d %d %d %d ]", ((*p_0) * 2), ((*p_1) * 2), ((*p_2) * 2), ((*p_3) * 2), ((*p_4) * 2));

    return 0; 
}