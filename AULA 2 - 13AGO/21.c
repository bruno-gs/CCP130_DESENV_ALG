/* 
Exemplos aula 2 da disciplina
AUTOR: FRITZ
DATA: 13/08/2021
*/


#include <stdio.h>

int main(void){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    switch(idade){
        case 2:
            printf('DOIS ANOS\n');
        break;

        case 3:
            printf('TRÊS ANOS\n');
        break;

        case 4:
            printf('QUATRO ANOS\n');
        break;

        default:
            printf('Idade maior que 4\n');   
    }
}