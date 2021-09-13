#include <stdio.h>

int main(void){

    int vetor[5];     // declara e inicializa a
    int *p = NULL;      // declara o ponteiro

    // cria vetor de 0 a 4
    for(int i =0; i<5; i ++){
        vetor[i] = i;
    }

    // primeiro endereço do vetor é guardado no ponteiro
    p = vetor;

    printf("%d\n", (*p)++); // pega o primeiro valor e incrementa esse valor a prox instrução
    printf("%d\n", (*p)); // 0 + 1
    
    p++; // incrementa o endereço

    printf("%d\n", (*p)++); // vai pegar o valor do endereço atual (ja incrementado) e incrementa pra prox
    printf("%d\n", *(++p)); // incrementa o endereço e ve o valor
    printf("%d\n", *(++p));
    printf("%d\n", *(++p));
    printf("%d\n", *(++p)); // endereço fora do vetor  
 
    return 0;
}