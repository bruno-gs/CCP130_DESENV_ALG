#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    int op = (rand() % 4) + 1;      // primeiro pega um número aleatório de 0 a 3, dai soma 1 valor
    printf("%d", op);
    return 0;
}