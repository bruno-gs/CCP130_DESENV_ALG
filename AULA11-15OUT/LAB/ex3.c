/*
Autor:  FRITZ
Data:   22/10/21
Crie um programa que lê 4 pontos (struct ponto) num plano cartesiano, 
    e os armazena na estrutura retângulo (struct retangulo). 
Exiba, então, a área e o perímetro do retângulo.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Ponto{
    float x; // coordenada x
    float y; // coordenada y   
};


int main(){

    // vetor com 4 pontos
    struct Ponto arestas[4];
    int x1,x2,y1,y2;

    // laço para pegar cada ponto e armazenar
    for(int i =0; i<4; i ++){
        printf("Digite o x do ponto %d: ", i);
        scanf(" %f",&arestas[i].x);
        printf("Digite o y do ponto %d: ", i);
        scanf(" %f",&arestas[i].y);
    }

    // como é um retângulo, irei achar os valores iguais de x e de y, para calcular altura
    x1 = arestas[0].x;
    y1 = arestas[0].y;
    // vai da posição 1, até a 3
    for(int i=1; i<4; i ++){
        // armazena quais as posições iguais de x
        if(arestas[i].x == x1){
            x2 = i;
        }
        if(arestas[i].y == y1){
            y2 = i;
        }
    }
    
    // quando x for igual, encontra altura
    float altura = sqrt(pow(arestas[0].y - arestas[x2].y,2)); 
    // quando y for igual, encontra base
    float base = sqrt(pow(arestas[0].x - arestas[y2].x,2)); 

    float perimetro = (2*base) + (2*altura);
    float area      = base * altura;

    printf("\nPerímetro: %.2f", perimetro);
    printf("\nÁrea: %.2f", area);
    
    return 0;
}