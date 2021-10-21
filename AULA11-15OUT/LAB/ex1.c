/*
Autor:  FRITZ
Data:   21/10/21
Construa uma estrutura aluno com nome, sobrenome, número de matrícula (RA) e curso. 
    Receba do usuário as informações referentes à 5 alunos, 
        armazene em um vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno{
    char nome[40];
    char sobrenome[40];
    char curso[50];
    int matricula;
};


int main(){
    char matr[20];
    printf("Digite os dados dos alunos:\n\n");
    struct Aluno alunos[5];
    for(int i =0; i<5; i ++){
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 40, stdin);
        printf("Digite o sobrenome do aluno %d: ", i+1);
        fgets(alunos[i].sobrenome, 40, stdin);
        printf("Digite o curso do aluno %d: ", i+1);
        fgets(alunos[i].curso, 50, stdin);
        printf("Digite a matrícula do aluno %d: ", i+1);
        fgets(matr,20,stdin);
        alunos[i].matricula = atoi(matr);
        printf("\n");
    }
    puts("Imprimindo os alunos cadastrados:\n");

    for(int i=0; i<5; i ++){
        printf("Aluno: %s", alunos[i].nome);
        printf(" %s", alunos[i].sobrenome);
        printf("Curso: %s", alunos[i].curso);
        printf("Matrícula: %d\n", alunos[i].matricula);
    }
    return 0;
}