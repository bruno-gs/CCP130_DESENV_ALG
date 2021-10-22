/*
Implemente o problema do número Fatorial de forma iterativa (utilize
while, for ou do-while). Neste exercício você não usará recursão, mas poderá
comparar os duas técnicas e entender melhor quando utilizar recursão.
*/

#include <stdio.h>

int main(){

    int num = 5;
    int fatorial=1;
    while(num>0){
        fatorial *= num;
        num --;
    }

    printf("%d\n", fatorial);
    return 0;
}