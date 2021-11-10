/*
AUTOR: FRITZ
DATA: 09/11/2021

Faça um programa que permita que o usuário entre com diversos nomes e telefones para cadastro.
Crie, então, um arquivo com essas informações, uma por linha. 
O usuário finaliza as entradas com ‘0’ para o telefone.

*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    // criando variaveis de preenchimento
    int telefone;
    char nome[30];
    // ponteiro do arquivo
    FILE *arquivo;
    // abre ou cria o arquivo -- segundo arg é do tipo de abertura
        // w cria o arquivo do 0
        // a continua inserindo sem apagar os anteriores
    // .doc (word) ; .xls (excel)
    arquivo = fopen("agenda.txt", "a");
    // condição pra ver se deu certo a abertura
    if(arquivo == NULL){
        // condição se der errado
        puts("Erro! O arquivo não foi aberto!");
        // finaliza o programa dando erro
        exit(1);
    }

    // deu certo no programa
    puts("O arquivo foi criado com sucesso!");
    
    while(1){
        puts("Entre com a nome e o número de telefone da pessoa: ");
        puts("Digite 0 no telefone para sair.");

        // recebendo dados
        scanf(" %d %s", &telefone, nome);

        // finalizando laço com conta == 0
        if (telefone == 0){
            break;
        }
        // escreve no arquivo
        fprintf(arquivo,"%s : %d\n", nome, telefone);

    }    
    // fecha e salva o arquivo
    fclose(arquivo);
}