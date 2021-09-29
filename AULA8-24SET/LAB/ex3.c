/*
Autor : FRITZ
DATA: 28/09/2021

Escreva uma função que calcula o quociente e o resto da divisão inteira entre dois números. 
    Utilize apenas as operações de soma e subtração para calcular o resultado. 
        
        Dica: utilize uma estrutura de repetição para isso. 

Faça um programa principal que recebe o dividendo e o divisor do usuário 
    e, depois de chamar a função, exibe o quociente e o resto.
*/

#include <stdio.h>

void divisao_no_braco(int dividendo, int divisor){

    // quociente é o valor que será somado a cada subtração
    // resto receberá o dividendo para facilitar as repetições
    int quociente=0, resto=dividendo;
    while(resto >= divisor){
        resto -= divisor;
        quociente ++;
    }
    // print para retornar os valores ao user
    printf("O quociente é %d com resto %d", quociente, resto);
}


int main(void){
    int dividendo, divisor;

    // pedindo o dividendo 
    printf  ("Digite o dividendo: ");
    scanf   (" %d", &dividendo);

    // pedindo o divisor
    printf  ("Digite o divisor: ");
    scanf   (" %d", &divisor);

    // chamando essa função que fará as divisões
    divisao_no_braco(dividendo, divisor);

    return 0;
}