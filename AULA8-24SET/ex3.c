/*
Crie uma função void modifica (int *x), 
    que deve mudar o valor passado como parâmetro para o próximo inteiro ímpar. 
    
Ex: para a variável inteira a, a=5; modifica(&a); fará com que o valor de a se torne 7; 
    a=2; modifica(&a);  fará com que o valor de a se torne 3
*/

// função que retorna o próximo valor impar
#include <stdio.h>

void modifica(int *x){
    if((*x) % 2 == 0){
        *x += 1;
    }
    else{
        *x += 2;
    }

    printf("O próximo valor ímpar é o : %d\n", *x);
}


void main(){
    // nome do inteiro
    int a;

    // identificação do problema
    printf("=== Retorna próximo ímpar ===\n\n");

    // solicitando um valor inteiro
    printf("Digite um valor inteiro: ");
    scanf(" %d", &a);

    modifica(&a);
}