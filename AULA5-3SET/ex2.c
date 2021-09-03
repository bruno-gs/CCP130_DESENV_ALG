//Solicitar dados de uma matriz 4x4
// e montar um vetor de 4 elementos 
// com a soma dos elementos ímpares de cada linha


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int m[4][4];

    // vetor usado para a soma dos números impares
    int v[4];

    int linha, coluna;


    // gerando a matriz com valores aleatorios
    for(linha =0; linha<4; linha ++){
        for (coluna = 0; coluna<4; coluna++){
            m[linha][coluna] = rand() % 100;
        }
    }
    
    // variavel para soma dos valores impares
    int soma_impares=0;

    for(linha =0; linha<4; linha ++){

        // reinicia a variavel em 0
        soma_impares = 0;

        for (coluna = 0; coluna<4; coluna++){
            // printando a matriz para conferencia
            printf("%4d", m[linha][coluna]);

            // condição de soma para impares
            if(m[linha][coluna] % 2 != 0 ){
                soma_impares += m[linha][coluna];
            }
        }
        printf("\n");
                
        // a cada linha pega a soma dos valores impares
        v[linha] = soma_impares;
    }

    // printar o vetor
    for(int i = 0; i<4; i ++){
        printf("%d ",v[i]);
    }
    printf("\n");
    

    return 0;
}