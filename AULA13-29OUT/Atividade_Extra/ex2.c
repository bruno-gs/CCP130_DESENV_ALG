/*
AUTOR: FRITZ
DATA: 09/11/2021

Considere um arquivo que possui uma lista de, 
    no máximo, 20 pares de números reais (valores x e y).

Elabore um programa para calcular o valor z=x2+y2, 
    para cada par de valores, e colocar a tabela x,y,z. 

A saída deve ter, em cada linha, uma tripla de valores x,y,z. 

Utilize 4 casas decimais depois da vírgula.
Obs.: Utilize o arquivo: quadradoR.txt

Exemplo:
1.0000   2.0000  5.0000
3.0000   4.0000  25.0000
1.0000   6.0000  37.0000
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  
    // ponteiro para abrir o arquivo -- modo de leitura
    FILE *arquivo = fopen("quadradoR.txt","r");
    
    float soma[20], x[20], y[20];       // variaveis de auxilio para a resposta
    int i=0;                            // conta quantos elementos tem no arquivo 

    // condição do while com tudo de uma vez
    while(fscanf(arquivo, "%f %f", &x[i], &y[i] ) != EOF){
        // faz a conta
        soma[i] = pow(x[i],2) + pow(y[i],2);
        i ++;    
    }
    // para imprimir na tela
    for(int j=0; j<i; j++){
        printf("%.4f %.4f %.4f\n", x[j], y[j], soma[j]);
    }
    return 0;
}