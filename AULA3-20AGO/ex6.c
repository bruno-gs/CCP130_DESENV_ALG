#include <stdio.h>

int main(void){
    int entrada, soma=0;
    while(1){
        printf("Digite um valor: ");
        scanf(" %d", &entrada);

        // para uma condição n precisa de chaves no if
        if(entrada==0)
            break;
        
        soma += entrada;
    }
    printf("Somatório: %d\n", soma);
    return 0;
}