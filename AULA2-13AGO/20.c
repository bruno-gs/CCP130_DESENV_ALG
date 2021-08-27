/* 
Exemplos aula 2 da disciplina
AUTOR: FRITZ
DATA: 13/08/2021
*/

/*ENUNCIADO:
1.Se o ano for divisível por 400 ele é bissexto! Acaba aqui!
2.Se o ano não for divisível por 400, para ser bissexto ele deve:
    a.Ser divísivel por 4 
    b.Não ser divisível por 100
*/

#include <stdio.h>

int main(void){
    printf("ANO BISSEXTO?");
    int ano;
    printf("Digite o ano que quer analisar:");
    scanf("%d", &ano);

    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
        printf("O ano é bissexto!");
    }
    else{
        printf("O ano não é bissexto!");
    }
}