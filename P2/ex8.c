/*
AUTOR: FRITZ
DATA: 26/11/2021

Crie uma struct para representar um Ponto no espaço 2D (int x, y). 
    Crie também a função coincidentes(...) que tem como parâmetro 
        um vetor de Pontos (que vai receber 2 pontos). 
        
A função deve retornar 1 caso os dois pontos sejam coincidentes e 0 caso contrário.  
    A função main já é dada pelo Moodle no caso de teste. 
Você deve criar a struct e a função coincidentes(...) somente.
*/

#include <stdio.h>

struct Ponto{
    float x; // coordenada x
    float y; // coordenada y   
};

int coincidentes(struct Ponto v[2]){
    if( (v[0].x == v[1].x) && (v[0].y == v[1].y) ){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    struct Ponto pontos[2];
    pontos[0].x = 2;
    pontos[0].y = 3;
    pontos[1].x = 4;
    pontos[1].y = 5;
    if(coincidentes(pontos))
        puts("Os pontos são coincidentes");
    else
        puts("Os pontos não são coincidentes");
    return 0;
}