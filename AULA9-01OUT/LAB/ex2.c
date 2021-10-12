/*
Autor : FRITZ
DATA: 05/09/2021

Escreva um programa que recebe uma linha de texto no vetor de char s[100]. 

Produza a linha em letras maiúsculas e em letras minúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

    const int tamanho = 100;

    int i = 0; 

    char s[tamanho];

    printf("Digite uma linha de texto até 99 caracteres\n");

    fgets(s, 100, stdin);

    // minusculas -- ctype   
    while(s[i]){
        s[i] = tolower(s[i]);
        i ++;
    }

    printf("Minusculas: %s",s);

    // maiusculas -- ctype
    i = 0;
    while(s[i]){
        s[i] = toupper(s[i]);
        i ++;
    }

    printf("Maiusculas: %s",s);
 
    return 0;
}