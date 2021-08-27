// tipo dos conjuntos é homogeneo

#include <stdio.h>

// variavel de definição para qq coisa
// #define N 10


int main(void){

    // colocandoo o tamanho do vetor para que o usuario escolha
    // usando esse n para criar o vetor no for
        // int n;
        // printf("Digite o tamanho do vetor: ");
        // scanf(" %d", &n);


    // boa tbm para usar no define
    // constante com nome Maiusculo
    int const N = 10;

    int v[N];

    // para quando vc precisa algum valor em especifico
    // int v[] = {0,0,0,0,0,0,0,0,0,0}; 

    // inicialização do vetor para que ele tenha 0 em td
    // melhor forma e mais pratica
    for(int i=0; i<N;i++){
        v[i]=0;
    }
    return 0;
}