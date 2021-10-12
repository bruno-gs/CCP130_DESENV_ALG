/*
Autor : FRITZ
DATA: 05/09/2021

Escreva um programa que leia uma série de strings e 
    imprima apenas aquelas que começam com a letra "b". 

O programa deve ler strings até que uma linha em branco (nada) seja digitado.

For example:

Input 	                            Result

                                    Digite uma palavra ou enter para sair:
FEI                                 Digite uma palavra ou enter para sair:
Boa semana                          Palavra que começa com 'b' ou 'B': Boa semana
Aula de C                           Digite uma palavra ou enter para sair:
                                    Digite uma palavra ou enter para sair:

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    const int tamanho = 100;

    char frase[tamanho];

    while(1){
        printf("Digite uma palavra ou enter para sair:\n");
        fgets(frase, 100, stdin);

        // comparação da frase pedida
        if(frase[0] == 'b' || frase[0]=='B'){
            printf("Palavra que começa com 'b' ou 'B': %s\n", frase);            
        }

        // compara as string
        // Se for /n, é o enter, ou seja, finaliza o programa
        if(strcmp(frase, "\n") == 0){
            break;
        }
    }

    return 0;
}