/*
Autor : FRITZ
DATA: 05/09/2021

Escreva um programa que recebe uma frase e um caractere de pesquisa e 
    determina o total de ocorrências do caractere na frase.

For example:
Input 	                            Result
                                    Digite uma frase:
frase de teste                      Digite um caractere:
t                                   O caractere t foi encontrado 2 vezes

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    const int tamanho = 100;

    char frase[tamanho], caract;

    // pedindo e recebendo a frase
    printf("Digite uma frase:\n");
    fgets(frase, 100, stdin);

    // pedindo e recebendo o caractere
    printf("Digite um caractere:\n");
    scanf(" %c",&caract);

    int i = 0, contador = 0;

    while(strcmp(&frase[i], "\0")){

        // conferindo a aparição do caractere
        if(frase[i] == caract){
            contador += 1;
        }

        i ++ ;
    }

    printf("O caractere %c foi encontrado %d vezes\n", caract, contador);
    return 0;
}