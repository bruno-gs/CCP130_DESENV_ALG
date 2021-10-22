/*
Escreva uma função recursiva para cálculo de potência: pot(base,
expoente) que, quando invocada, retorna base^expoente
.
Por exemplo, pot(3, 4) = 3 * 3 * 3 * 3. Suponha que o expoente seja
um número inteiro maior ou igual a 1. Dica: A etapa de recursão
pode usar o relacionamento:
base^exponente = base * base^(exponente – 1)
a condição final ocorre quando o expoente é igual a 1
*/

#include <stdio.h>
#include <math.h>

int pot(int base, int expoente){
    //int resultado=1;
    if(expoente == 1){
        return base;
    }
    else{
        return base * pot(base, expoente-1);
    }
    //return resultado;
    //else{
    //    resultado = base * pot(base, expoente-1);
    //}
    //return resultado;
}

int main(){

    int base = 8, expoente=5;

    printf("%d\n", pot(base,expoente));
    return 0;
}