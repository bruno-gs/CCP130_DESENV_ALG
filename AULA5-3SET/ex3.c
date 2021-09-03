/*
Faça um programa para receber uma matriz 3×3 (solicitar ao usuário)
    e apresentar a soma dos elementos da diagonal principal e 
a matriz na forma como deve ser vista: com linhas e colunas
*/

#include <stdio.h>

int main(void){

    int m[3][3];

    int linha, coluna;

    printf("Digite os valores: ");
    // gerando a matriz com valores do user
    for(linha =0; linha<3; linha ++){
        for (coluna = 0; coluna<3; coluna++){
            scanf(" %d", &m[linha][coluna]);
        }
    }


    // mostrar a matriz
    for(int i =0; i<3; i ++){
        for (int j = 0; j<3; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    int soma = 0;
    for(int i=0; i<3;i++){
        soma += m[i][i];
    }

    printf("\nA soma da diagonal principal é: %d", soma);

    return 0;
}