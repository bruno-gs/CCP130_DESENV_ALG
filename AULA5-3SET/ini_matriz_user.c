#include <stdio.h>

int main(void){
    
    int m[3][3];

    int linha, coluna;

    printf("Digite os valores da matriz: \n");

    for(linha =0; linha<3; linha ++){
        for (coluna = 0; coluna<3; coluna++){
            printf("Valor da matriz [%d][%d]: ", linha, coluna);
            scanf(" %d", &m[linha][coluna]);
        }
    }

    printf("\n==============================\n");

    for(linha =0; linha<3; linha ++){
        for (coluna = 0; coluna<3; coluna++){
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}