/*
Autor : FRITZ
DATA: 21/09/2021

Receba pelo teclado a quantidade q de caracteres de uma palavra. 
    Crie, então, um vetor de ponteiro char com alocação dinâmica (de tamanho q). 
        Utilizando uma estrutura de repetição receba um caractere por iteração e inclua no vetor. 
            Imprima então a frase recebida utilizando o especificador “%s”.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int q = 1;

    // pedindo para o usuário digitar a quantidade de caracteres da frase
    printf  ("Digite a quantidade de caracteres da frase: ");
    scanf   (" %d", &q);

    //declaração do ponteiro e alocação de memoria
    char *caracteres    = calloc(q,sizeof(char));
    
    // atribuindo valores
    for(int i =0; i<q; i ++){
        printf  ("Digite o %dº caracter da frase: ", (i+1));
        scanf   (" %c", &caracteres[i]);
    }

    printf  ("=====================================");

    // printando a frase ou palavra -- caracteres juntos
    printf  ("\nA união dos caracteres resulta na frase: %s", caracteres);

    free(caracteres);

    printf  ("\n");
    return 0;
}