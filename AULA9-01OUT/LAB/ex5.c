/*
Autor : FRITZ
DATA: 11/10/2021

Proteção de cheques: Crie um procedimento (função sem retorno) em C chamada valorSeguro 
    que receba uma string (que será utilizada como saída) e um valor float (que representa o valor de um cheque). 

Este procedimento deverá escrever na string o valor de cheque de forma segura; 
    isto é, contendo asteriscos iniciais antes do valor do cheque.

Atenção: o procedimento deverá assumir que o tamanho da string é de 10 chars (contando com o terminador).

For example:

Test 	                                    Result

valorSeguro("texto = ", 12.35);             texto = ****12.35

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void valorSeguro(char texto[10], float valor){

//     printf("")

// }


// int main(){

    
//     return 0;
// }

void valorSeguro(char seguro[10], float valor){
    char cheque[18];
    sprintf(cheque, "%.2f", valor);

    int diferenca = 9 - strlen(cheque);
    for(int i=0; i<diferenca;i++){
        strcat(seguro, "*");
    }
    strcat(seguro,cheque);
    puts(seguro);
}
int main(void){
    char seguro[10] = "texto = ";
    float valor = 12.35;

    valorSeguro(seguro, valor);
    // char seguro[10];
    // float valor;
    // scanf("%f", &valor);
    // valorSeguro(seguro,valor);
    // return 0;
}