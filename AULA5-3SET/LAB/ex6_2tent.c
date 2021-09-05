/*
SEGUNDA TENTATIVA DO EXERCÍCIO. CONCLUÍDO COM SUCESSO.

Autor : FRITZ
DATA: 05/09/2021

Ler uma matriz 4 X 4 com números inteiros e verificar se essa matriz forma o chamado quadrado mágico. 
Um quadrado mágico é formado quando 
    a soma dos elementos de cada linha é igual à soma dos elementos de cada coluna 
        e igual à soma dos elementos da diagonal principal e igual, também, 
            à soma dos elementos da diagonal secundária.
*/

#include <stdio.h>

int main(void){

    // uma das matrizes dada pelo moodle
    // comentar para jogar na atv
    int matriz[4][4] = {{ 1,  1,  1, -1}, 
                    {-1,  1,  1,  1}, 
                    { 1,  1, -1,  1}, 
                    { 1, -1,  1,  1}};

    // dado pelo Moodle
    // variaveis globais para ficar mais facil
    const int linha     =   4;           
    const int coluna    =   4;

    // variavel de conferência final
    int quadrado = 0;

    while(1){

        // mostrar a matriz
        for(int i =0; i<linha; i ++){
            for (int j = 0; j<coluna; j++){
                printf("%2d ", matriz[i][j]);
            }
            printf("\n");
        }

        // somando diagonal principal e obtendo um valor
        int soma_principal = 0;
        for(int i =0; i<linha; i ++){
            soma_principal +=  matriz[i][i];
        }
       
        // soma secundaria
        int soma_secundaria = 0;
        for(int i =0; i<linha; i ++){
            for (int j = 0; j<coluna; j++){

                // peculiaridade dos index 
                // na secundaria, a soma de i e j, dá 3
                // claro que feito pra esse caso
                // não conhecia outra regra
                if(i+j == 3){
                    soma_secundaria+=matriz[i][j];
                }
            }
        }

        // conferência entre soma principal e secundaria
        if(soma_principal != soma_secundaria){
            // esse break cancela o while, dessa forma
            // sairiamos da repetição e a variavel
            // quadrado seria 0, como atribuido
            // dando que n é quadrado magico
            break;
        }

        int soma_linha = 0, soma_coluna = 0;


        // soma cada elemento da linha e confere no final
        for(int i =0; i<linha; i ++){
            // reinicia a soma a cada iteração
            soma_linha = 0;

            // soma cada valor contido na linha
            // linha fica igual, oq varia são as colunas
            for (int j = 0; j<coluna; j++){
                soma_linha += matriz[i][j];
            }

            // conferencia com a soma_principal
            // se não bater, essa linha ja desclassifica o programa todo
            if(soma_principal != soma_linha){
                break;
            }
        }

        // soma coluna
        for (int j = 0; j<coluna; j++){
            soma_coluna = 0;
            for(int i =0; i<linha; i ++){
                soma_coluna += matriz[i][j];
            }
            if(soma_principal != soma_coluna){
                break;
            }
        }

        // ultima instrução, se chegar aqui é porque todas as somas são iguais
        // ou seja, forma quadrado magico
        // dai atribui quadrado para 1 e faz a conferencia para resultar no print
        quadrado = 1;
        break;      
    }
   

    if(quadrado == 1){
        printf("Essa matriz forma o quadrado mágico");
    }
    else{
        printf("Essa é uma Matriz comum");
    }
  return 0;
}