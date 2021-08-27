#include <stdio.h>

int main(void){
    int quant=0, num, soma=0;    

    while(quant<10){
        printf("Digite um numero inteiro: ");
        scanf(" %d", &num);
        // somando os valores digitados
        // acumulador
        soma += num;
        // contador
        // variavel de controle
        quant ++;
    }

    printf("\nSomatória: %d\n", soma);
    return 0;
}