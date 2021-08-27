#include <stdio.h>

// biblioteca que tem o sleep
#include <unistd.h>

int main(void){
    int cont=10;
    while(cont>=0){
        printf("%d\n", cont);

        // Valor de 1 segundo no sleep
        sleep(1);

        // cont = cont - 1 (decrementando o valor para a contagem regressiva)
        cont--; 
    }
    return 0;
}