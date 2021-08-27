/* 
EXEMPLO
AUTOR: FRITZ
DATA: 27/08/2021
*/

/*Exemplo: Programa para popular um vetor 
a partir da entrada de dados do usuário*/

#include <stdio.h>

int main(void){

    int const N = 7;

    float v[N];
    
    for(int i=0; i<N;i++){
        scanf(" %f", &v[i]);
    }

    for(int i=0; i<N;i++){
        printf("%.2f ", v[i]);
    }

    return 0;
}



