/*
Crie uma função para calcular e retornar o peso de uma pessoa nos outros planetas do Sistema Solar. 

A função deve ter dois parâmetros: 
    o planeta desejado 
    e o peso em Kg da pessoa na Terra. 
    
O programa principal deve receber o peso da pessoa na Terra (em Kg) e o planeta desejado.

Relação de pesos: 1 Kg na Terra equivale a: 
    0.37 Kg em Mercúrio; 
    0.88 Kg em Vênus; 
    0.38 Kg em Marte;
    2.64 Kg em Júpiter; 
    1.15 Kg em Saturno; 
    1.17 Kg em Urano; 
    e 1.18 Kg em Netuno.
*/

// Não finalizada... volto com mais conhecimento rss

#include <stdio.h>

void transporte(float peso, int planeta){
    char planeta_esc[20] = "";
    switch(planeta){
        case 0:
            peso = peso * 0.37;
            planeta_esc[20] = "Mercúrio";
        break;
        case 1:
            peso = peso * 0.88;
            planeta_esc[20] = "Vênus";
        break;
        case 2:
            peso = peso * 0.38;
            planeta_esc[20]  = "Marte";
        break;
        case 3:
            peso = peso * 2.64;
            planeta_esc[20]  = "Júpiter";
        break;
        case 4:
            peso = peso * 1.15;
            planeta_esc[20]  = "Saturno";
        break;
        case 5:
            peso = peso * 1.17;
            planeta_esc[20]  = "Urano";
        break;
        case 6:
            peso = peso * 1.18;
            planeta_esc[20]  = "Netuno";
        break;
        default:
            printf("Não sei como chegou aqui... Talvez tenha sido abduzido!!");
    }
    printf("Em %s, seu peso será de: %.2f\n", planeta_esc,peso);
}

void main(){

    // variaveis para o usuario te input
    float peso;
    int planetas; 

    // identificação
    printf("=== Sabendo seu peso em outros planetas ===\n\n");

    // input de peso
    printf("Qual seu peso na Terra? ");
    scanf(" %f", &peso);

    // lista de planetas
    printf("Lista de planetas: \n\
    [0] Mercúrio; \n\
    [1] Vênus; \n\
    [2] Marte;\n\
    [3] Júpiter;\n\
    [4] Saturno; \n\
    [5] Urano; \n\
    [6] Netuno\n");

    // input de qual o planeta
    printf("Digite o número do planeta que deseja saber seu peso: ");
    scanf(" %d", &planetas);

    // chamando a função de auxilio
    transporte(peso, planetas);
}