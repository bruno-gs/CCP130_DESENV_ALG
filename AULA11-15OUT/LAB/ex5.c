/*
Autor:  FRITZ
Data:   21/10/21

Escreva um programa que recebe duas structs de dia-mês-ano, 
    cada uma representando uma data válida. 

Uma struct deve receber o dia de nascimento de uma pessoa. 
A outra deve receber a data atual. 
    O programa deve calcular a idade da pessoa.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct DiaMesAno{
    int dia;
    int mes;
    int ano;
};


int main(){
    struct DiaMesAno nascimento;
    struct DiaMesAno atual;

    printf("Digite a data de nascimento:\n");
    printf("Dia: ");
    scanf(" %d", &nascimento.dia);
    printf("Mês: ");
    scanf(" %d", &nascimento.mes);
    printf("Ano: ");
    scanf(" %d", &nascimento.ano);

    printf("Digite a data atual:\n");
    printf("Dia: ");
    scanf(" %d", &atual.dia);
    printf("Mês: ");
    scanf(" %d", &atual.mes);
    printf("Ano: ");
    scanf(" %d", &atual.ano);

    printf("Sua idade é %d anos, %d meses, %d dias", abs(nascimento.ano-atual.ano),abs(nascimento.mes-atual.mes), abs(nascimento.dia-atual.dia));
    return 0;
}