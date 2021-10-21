/*
Declare uma struct para armazenar o nome, idade, código, sexo e
salário de um Funcionário.
Construa uma função responsável por declarar um Funcionário e
por receber os dados deste Funcionário do usuário.
Escreva uma função para exibir os dados do Funcionário declarado
na função anterior. A função deve receber um parâmetro do tipo
Funcionário.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Funcionario{
    char nome[30];
    int idade;
    int codigo;
    char sexo;
    double salario;
};

struct Funcionario entrar_dados(){
    struct Funcionario func;
    puts("Digite o nome: ");
    fgets(func.nome, 30, stdin);
    puts("Digite a idade: ");
    scanf(" %d", &func.idade);
    puts("Digite o código: ");
    scanf(" %d", &func.codigo);
    puts("Digite o sexo: ");
    scanf(" %c", &func.sexo);
    puts("Digite o salário: ");
    scanf(" %lf", &func.salario);
    return func;
}

void exibir_dados(struct Funcionario func){
    puts(func.nome);
    printf("Idade: %d\n",     func.idade);
    printf("Código: %d\n",    func.codigo);
    printf("Sexo: %c\n",      func.idade);
    printf("Salário: %.2f\n", func.salario);
}

void main(){
    struct Funcionario f = entrar_dados();
    exibir_dados(f);
}