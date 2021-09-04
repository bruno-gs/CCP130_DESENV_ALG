/*
Autor : FRITZ
DATA: 04/09/2021

Faça um programa que preencha uma matriz 10x3 
    com as notas de 10 alunos em 3 provas (valores gerados de forma aleatória entre 0 e 10). 

O programa deverá mostrar: 
    a. A matriz com todas as notas de cada aluno
    b. Um relatório com o número do aluno (número da linha), 
        a prova em que cada aluno obteve a menor nota (número da coluna) 
            e o valor da menor nota. 
    c. O relatório deverá mostrar também 
        qual foi a menor nota obtida em cada prova 
            e a quantidade de alunos que obtiveram essa menor nota na respectiva prova.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    // variaveis globais para ficar mais facil
    const int linha = 10;           // Alunos
    const int coluna = 3;           // Provas

    int m[linha][coluna];

    // gerando a matriz com valores aleatorios
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            m[i][j] = rand() % 11;         // de 0 a 10
        }
    }

    // mostrar a matriz
    for(int i =0; i<linha; i ++){
        for (int j = 0; j<coluna; j++){
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }


    // passando cada valor e conferindo a menor nota
    int menor, menor_prova=1;
    for(int i =0; i<linha; i ++){
        menor = m[i][0];
        menor_prova = 1;
        for(int j = 0; j<coluna; j++){
            if(m[i][j] < menor){
                menor       = m[i][j];
                menor_prova = j+1;
            }
        }
        printf("Aluno %d: Menor nota na prova %d com nota %d\n", i+1, menor_prova,menor);
    }

    // passar em cada coluna (prova), verificar qual a menor nota e quantas vezes ela repete
    int menor_nota, soma_alunos = 0;
    for(int j = 0; j<coluna; j++){
        menor_nota = m[0][j];
        soma_alunos = 0;
        for(int i =0; i<linha; i ++){
            if(m[i][j] < menor_nota){
                menor_nota = m[i][j];
                soma_alunos = 1;
            }
            else if(m[i][j] == menor_nota){
                soma_alunos += 1;
            }
        }
        printf("%d aluno(s) ficou(aram) com %d na prova %d\n", soma_alunos,menor_nota,j+1);
    }
    

    return 0;
}