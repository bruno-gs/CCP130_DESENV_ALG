/*
AUTOR: FRITZ
DATA: 09/11/2021

Elabore um programa que exibe os valores abaixo solicitados de uma determinada empresa. 
Considere o arquivo empresaR.txt

A cada linha desse arquivo contém o primeiro nome do funcionário (string),
    gênero (m ou f, char) 
        e a idade (int), nesta ordem.

Exemplo:
Maria f 23

Valores Solicitados:
a quantidade total de funcionários;
    o nome dos funcionários com mais de 25 anos e sua idade;
    a quantidade de funcionários com mais de 25 anos de idade;
    a quantidade total de funcionários do sexo feminino.

Saída:

Total de funcionarios: 10

Nome do funcionario +25: Artur   idade: 54
Nome do funcionario +25: Pedro   idade: 60
Nome do funcionario +25: Juca    idade: 30
Nome do funcionario +25: Bene    idade: 48
Nome do funcionario +25: Caio    idade: 32
Nome do funcionario +25: Dirce   idade: 45
Nome do funcionario +25: Maria   idade: 34

Total de funcionarios +25: 7

Total de funcionarias: 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// função para pegar o total de funcionarios no arquivo
void total(FILE *arquivo){
    char func[30];
    char genero;
    int idade;
    int total = 0;
    while(fscanf(arquivo, "%s %c %d", func, &genero, &idade ) != EOF){
        total ++;
    }
    printf("Total de funcionarios: %d\n\n",total);
}


int main(){  
    // ponteiro para abrir o arquivo -- modo de leitura
    FILE *arquivo = fopen("empresaR.txt","r");

    // retorna o print de qual o valor máximo de pessoas
    total(arquivo);
    
    char funcionario[40];
    char genero;
    int idade;     
    int total_fem=0, func_plus_25=0;  

    //reinicia o cursor no inicio do arquivo
    rewind(arquivo);
    // condição do while com tudo de uma vez
    while(fscanf(arquivo, "%s %c %d", funcionario, &genero, &idade ) != EOF){
        if(idade >= 25){
            printf("Nome do funcionario +25: %s idade: %d\n", funcionario, idade);
            func_plus_25 ++;
        }
        if(genero == 'f'){
            total_fem ++;
        }   
    }

    printf("\nTotal de funcionarios +25: %d\n\n", func_plus_25);

    printf("Total de funcionarias: %d\n", total_fem);
    return 0;
}