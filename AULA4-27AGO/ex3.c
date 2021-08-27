/* 
EX3
AUTOR: FRITZ
DATA: 27/08/2021
*/

/*EX3:Faça um programa para receber um vetor de 10 elementos (pedir para o usuário) e apresentar: 
a soma dos ELEMENTOS pares e a soma dos elementos de ÍNDICE par.*/


#include <stdio.h>

int main(void){

    int vetor[10], soma_par=0, soma_ind_par=0;

    // pedindo valor
    for(int i=0; i<10;i++){
        printf("Digite o %d valor: ", i);
        scanf(" %d", &vetor[i]);
        if(vetor[i] % 2 ==0){
            soma_par += vetor[i];
        }
        if(i%2==0){
            soma_ind_par += vetor[i];
        }
    }

    printf("Valores pares somados, resultam em: %d\n",soma_par);
    printf("Soma dos valores de indices pares, resultam em: %d\n",soma_ind_par);
    
    return 0;
}