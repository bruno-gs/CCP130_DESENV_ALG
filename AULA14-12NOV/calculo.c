// Não é biblioteca padrão - busca em outro local que indicarmos
#include "calculo.h"
// biblioteca padrão
//#include <stdio.h>

void somatoria(int vetor[TAM]){
    int soma = 0;
    for(int i=0; i<TAM;i++){
        soma = soma + vetor[i];
    }
    printf("Somatória: %d\n",soma);
}

void media (int vetor[TAM]){
    int soma = 0;
    float media = 0;
    for(int i=0; i<TAM;i++){
        soma = soma + vetor[i];
    }
    media = (float)soma / TAM;
    printf("Média: %.2f\n", media);
}

