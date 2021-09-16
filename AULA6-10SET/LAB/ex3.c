/*
Autor : FRITZ
DATA: 16/09/2021

Refaça o programa anterior, só que agora utilize um vetor de char para armazenar sua palavra. 
    Apresente, então, a palavra sem usar estrutura de repetição 
        (você vai precisar fazer aritmética com os ponteiros).
*/

#include <stdio.h>

int main(void){

    // vetor para pegar as letras
    char letra[5];
    // ponteiro iniciados com null
    char *p_0 = NULL, *p_1= NULL, *p_2= NULL,*p_3= NULL, *p_4= NULL;

    // pegar input do usuaria e lotar o vetor
    for (int i=0; i<5; i ++){
        printf("Digite a %dª letra: ",(i+1));
        scanf(" %c", &letra[i]);
    }

    // atribuindo a localização de cada letra do vetor
    p_0 = &letra[0];
    p_1 = &letra[1];
    p_2 = &letra[2];
    p_3 = &letra[3];
    p_4 = &letra[4];

    // printando os valores dos ponteiros
    printf("Letra: %c\n", (*p_0));
    printf("Letra: %c\n", (*++p_0));
    printf("Letra: %c\n", (*++p_1));
    printf("Letra: %c\n", (*++p_2));
    printf("Letra: %c\n", (*++p_3));

    return 0; 
}