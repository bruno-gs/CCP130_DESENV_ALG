// PONTEIRO DE INTEIROS

// entendendo endereços e valores dentro de ponteiro

#include <stdio.h>

int main(void){

    int a = 10;     // declara e inicializa a
    int *aPtr;      // declara o ponteiro
    aPtr = &a;      // Atribui o endereço de 'a' ao ponteiro 'aPtr'

    printf("Conteudo de a %d", a);              // retorna o valor 10
    printf("Conteudo de aPtr %p", aPtr);        // retorna o endereço de a

    printf("Endereço de a %p", &a);             // retorna o endereço de a 
                                                // == conteudo de aPtr 

    printf("Endereço de aPtr %p", &aPtr);       // retorna endereço do ponteiro

    return 0;
}