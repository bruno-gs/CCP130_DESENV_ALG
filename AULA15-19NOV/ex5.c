/*
AUTOR: FRITZ
DATA: 19/11/2021

Faça um programa que tenha uma struct aluno com
nome, número de matrícula e curso. Receba do usuário
a informação de 5 alunos, armazene em um vetor dessa
estrutura e imprima os dados na tela. Utilize typedef
para fazer a struct.
*/

#include <stdio.h>

typedef struct{
    char nome[30];
    int ra;
    char curso[30];
}Aluno;

int main(){
    Aluno vetor[2];

    for (int i=0; i<2; i++){
        puts("Digite o nome do aluno: ");
        scanf(" %s", vetor[i].nome);
        puts("Digite o RA do aluno: ");
        scanf(" %d", &vetor[i].ra);
        puts("Digite o curso: ");
        scanf(" %s", vetor[i].curso);
    }

    puts("Alunos: ");
    for (int i = 0; i < 2; i++)
    {
        printf("Nome: %s\n", vetor[i].nome);
        printf("RA: %s\n", vetor[i].ra);
        printf("Curso: %s\n", vetor[i].curso);
    }
    return 0;
}