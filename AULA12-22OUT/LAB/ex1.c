/*
AUTOR:  FRITZ
DATA:   27/10/2021

O máximo divisor comum dos números inteiros x e y é o maior número inteiro que divide igualmente x e y. 

Escreva uma função recursiva mdc que retorne o maior divisor comum de x e y. 

O mdc de x e y é definido recursivamente da seguinte forma: 
    Se y é igual a 0, então mdc(x, y) é x; 
    
    caso contrário, mdc(x, y) é mdc(y, x% y), onde % é o operador de resto.
*/

#include <stdio.h>

int mdc(int x, int y){
    if(y == 0){
        return x;
    }
    else{
        return mdc(y, x%y);
    }
}

// comentar essa parte pra jogar no moodle
int main(){
    int r = mdc(12, 18);
    printf("%d", r);
    return 0;
}