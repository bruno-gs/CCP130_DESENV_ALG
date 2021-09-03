#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    const int linha = 10;
    const int coluna = 15;
    
    int m[linha][coluna];

    int i, j;

    for(i =0; i<linha; i ++){
        for (j = 0; j<coluna; j++){
            m[i][j] = rand() % 100;
        }
    }

    for(i =0; i<linha; i ++){
        for (j = 0; j<coluna; j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // mostrar so a primeira linha
    for (j = 0; j<coluna; j++){
        printf("%3d", m[0][j]);
    }
    printf("\n");
    


    // somente os elementos da primeira coluna
    for (i = 0; i<linha; i++){
        printf("%3d\n", m[i][0]);
    }
    printf("\n");

    return 0;
}