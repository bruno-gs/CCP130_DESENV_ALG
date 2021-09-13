/*Escreva um programa que contenha duas variáveis inteiras. 
    Leia o valor dessas variáveis pelo teclado. Em seguida, 
    compare seus endereços e exiba o conteúdo do maior 
    endereço*/

#include <stdio.h>

int main(void){

    // declaração das variaveis e dos ponteiros
    int num_1, num_2;
    int *p_num1=NULL, *p_num2=NULL;

    printf("Digite dois números inteiros: \n");
    scanf(" %d", &num_1);
    scanf(" %d", &num_2);

     
    // pra onde os ponteiros apontam
    p_num1 = &num_1;
    p_num2 = &num_2;

    printf("Endereço do primeiro %p\n", p_num1); 
    printf("Endereço do segundo %p\n", p_num2); 

    if(p_num2 > p_num1){
        printf("O maior endereço é o do segundo\n");
    }
    else{
        printf("O maior endereço é o do primeiro\n");
    }

    
}