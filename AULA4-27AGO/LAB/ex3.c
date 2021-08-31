/* 
Exercicio 3 da atv 3 da disciplina
AUTOR: FRITZ
DATA: 31/08/2021
*/

/*
As temperaturas de uma cidade foram armazenadas em um vetor chamado temperatura. 
    Exemplo: temperaturas = {-10, -8, 0, 1, 2, 5, -2, -4 }. 

Faça um programa que imprime a menor e a maior temperatura, assim como a média.

Os valores do vetor temperaturas são fornecidos pelo programa do Moodle,
    faça o código sem declarar o vetor, apenas use esse vetor.
*/

#include <stdio.h>

int main(void){
    // declaração de vetor feita pelo moodle

    // variaveis de auxilio
    int maior = temperaturas[0], menor = temperaturas[0];
    float soma=0;

    // pegando valores de maior, menor e soma (depois tirar a media)
    for(int pos=0; pos<8; pos++){
        if(temperaturas[pos]>maior){
            maior = temperaturas[pos];
        }
        if(temperaturas[pos]<menor){
            menor = temperaturas[pos];
        }
        soma += temperaturas[pos];
    }
    
    // retornando valor
    printf("O menor valor é %d\nO Maior valor é %d\nA média de temperaturas é %.1f", menor, maior, (soma/8));
    return 0;
}