/* 
Exercicio 3 da aula 3 da disciplina
AUTOR: FRITZ
DATA: 24/08/2021
*/

/*
Escreva um programa que calcule o perímetro de um polígono. 
Comece recebendo do usuário os valores de x e y para o primeiro ponto do polígono. 
Em seguida, continue lendo pares de valores x e y até que o usuário insira -99 para a coordenada x. 
Cada vez que você lê uma coordenada adicional, você deve calcular a distância até o ponto anterior e adicioná-la ao perímetro. 
Quando o número -99 for inserido para a coordenada x, 
seu programa deve adicionar a distância do último ponto de volta ao primeiro ponto. 
Em seguida, ele deve exibir o perímetro total. Um exemplo de entrada e saída é mostrado abaixo.
*/

#include <stdio.h>
#include <math.h>

int main(void){
    float x1, y1, x_antigo, y_antigo, x_atual, y_atual, dist_calc, perimetro=0;
    int inicio = 0;

    while (1){

        // iniciar com 1
        inicio ++;

        // começa a passar valores 
        printf("Digite o x da coordenada: \n");
        scanf(" %f", &x_atual);

        // já quebra o while se o x for -99
        if(x_atual==-99){
            break;
        }

        // pede y
        printf("Digite o y da coordenada: \n");
        scanf(" %f",&y_atual);


        // primeiro input de coordenadas
        // armazena o primeiro ao valor antigo
        if(inicio == 1){
            y1 = y_atual;
            x1 = x_atual;
            y_antigo = y_atual;
            x_antigo = x_atual;
        }

        // do segundo input em diante
        // faz o atual - antigo de cada coordenada (final - inicial)²
        else{
            dist_calc = sqrt( (pow(x_atual - x_antigo,2)) + (pow(y_atual - y_antigo,2)));

            // soma ao perimetro cada distancia
            perimetro += dist_calc;

            // O atual vira o antigo
            y_antigo = y_atual;
            x_antigo = x_atual;
        }        
    }

    // faz o calculo das ultimas coordenadas com a primeira digitada
    dist_calc = sqrt( (pow(x1 - x_antigo,2)) + (pow(y1 - y_antigo,2)));

    // soma essa ultima distancia ao perimetro
    perimetro += dist_calc;

    // faz o output ao usuario
    printf("Perímetro total de %.2f", perimetro);

    return 0;
}