/* 
EX1
AUTOR: FRITZ
DATA: 27/08/2021
*/

/*EX1:Crie um programa em C que peça 10 números reais,
armazene-os em um vetor e diga qual é o índice do maior, 
e seu valor..*/

#include <stdio.h>

int main(void){

    int const TAM = 10;

    float numeros[TAM];
    
    printf("Preencha 10 valores reais para o vetor: \n");

    // pedindo valor
    for(int i=0; i<TAM;i++){
        printf("Digite o %d valor: ", i+1);
        scanf(" %f", &numeros[i]);
    }

    float maior=numeros[0];
    int indice_maior =0;
    for(int i=0; i<TAM;i++){
        if(numeros[i]>maior){
            maior = numeros[i];
            indice_maior=i;
        }
    }

    printf("O maior numero é %.2f que está na posição %d\n", maior, indice_maior);

    
    return 0;
}