/*
Autor : FRITZ
DATA: 21/09/2021

Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos de uma turma 
    e aloca dinamicamente um vetor de notas (números reais).
        Depois de ler as notas, imprime a média aritmética.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int N = 1;

    // pedindo para o usuário digitar quantos alunos tem na turma
    printf  ("Digite a quantidade de alunos da turma: ");
    scanf   (" %d", &N);

    //declaração do ponteiro e alocação de memoria
    float *notas    = calloc(N ,sizeof(float));
    
    // variavel para a soma das notas digitadas
    float soma_notas=0;

    // atribuindo valores
    for(int i =0; i<N; i ++){
        printf  ("Digite a nota do(a) %dº aluno(a): ", (i+1));
        scanf   (" %f", &notas[i]);
        soma_notas += notas[i];
    }

    float media = soma_notas / N;

    printf  ("=====================================");
    printf  ("\nA média de notas da sala foi de: %.2f", media);

    free(notas);

    printf  ("\n");

    return 0;
}