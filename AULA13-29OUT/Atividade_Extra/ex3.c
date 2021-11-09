/*
AUTOR: FRITZ
DATA: 09/11/2021

Considere um arquivo que possui uma lista de, no máximo, 20 linhas, 
    onde cada linha possui o nome de um discente (apenas uma palavra) 
        e a sua respectiva nota (0...10). 

Elabore um programa que mostre na tela do computador 
    apenas os alunos que obtiveram nota maior ou igual a 5.0.

Utilize 1 casa decimal depois da vírgula.
Obs.: Utilize o arquivo: notasR.txt

Exemplo:
Artur 7.2
Maria 5.4
Rui  6.3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  
    // ponteiro para abrir o arquivo -- modo de leitura
    FILE *arquivo = fopen("notasR.txt","r");
    
    char aluno[40];
    float nota;        
    int i=0;    // conta quantos elementos tem no arquivo 

    // condição do while com tudo de uma vez
    while(fscanf(arquivo, "%s  %f", aluno, &nota ) != EOF){
        if(nota >= 5.0){
            printf("%s %.1f\n", aluno, nota);
        }
        i ++;    
    }
    return 0;
}