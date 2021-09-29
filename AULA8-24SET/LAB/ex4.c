/*
Autor : FRITZ
DATA: 28/09/2021

Escreva uma função chamada exponencial 
    que recebe um valor n passado por valor e dois inteiros b e k passados por “referência". 
    
    Sua função deve retornar em b e k valores tal que b^k = n e b seja o menor possível.

Atenção: Submeta somente o código da função, sem o main.
*/

#include <stdio.h>

#include <math.h>

void exponencial(int numero, int *b, int *k){

    // iniciando o k em 1, pois no ultimo ciclo ele não faz a somatoria
    *k = 0; // será a contagem das divisões -- incrementado
    *b = 2;
    int comp = numero;

    while(1){

        // aqui vai fazendo as divisões
        comp = comp / (*b);
        ++ (*k);

        // reinicia a contagem e soma b se o resto da divisão for dif de 0
        if ((comp % (*b)) !=0 ){
            (*b) = (*b) + 1;
            
            (*k) = 0;
            
            comp = numero;
        }

        // se os valores forem iguais, ele para o loop e soma mais um k 
            // referente ao ultimo que seria feito
        else if(comp == (*b)){
            ++ (*k);
            break;
        }
    }
}

int main(void){
    
    int numero = 400, base, expoente;

    exponencial(numero, &base, &expoente);

    printf("%d^%d = %.0f\n", base, expoente, pow(base, expoente));

    return 0;
}
