#include <stdio.h>

// rand()%100 -- gera um a menos do estabelecido (até 99)
#include <stdlib.h>

// time(NULL) -- para ajudar a randomizar a partir do tempo
#include <time.h>


int main(void){
    srand(time(NULL)); // seed
    int maior = 0;
    for(int i =0; i < 100; i++){
        int n = rand() % 100; // de 0 a 99

        // imprimir a sequencia toda
        printf("%d ",n);

        // condição para o maior valor gerado
        if(maior<n){
            maior = n;
        }
    }
    printf("\nMaior número: %d\n", maior);
    return 0;
}