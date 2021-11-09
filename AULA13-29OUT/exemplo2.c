/*
AUTOR: FRITZ

Ler de um arquivo texto a conta e o nome de todos os
    clientes
08/11
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    // criando variaveis de preenchimento
    int conta;
    char nome[30];
    // ponteiro do arquivo
    FILE *arq;
    // abre ou cria o arquivo -- segundo arg é do tipo de abertura
        // w cria o arquivo do 0
        // a continua inserindo sem apagar os anteriores
        // r read
    arq = fopen("teste.txt", "r");
    // condição pra ver se deu certo a abertura
    if(arq == NULL){
        // condição se der errado
        puts("Não abriu arquivo!");
        // finaliza o programa dando erro
        exit(1);
    }

    // deu certo no programa
    puts("O arquivo aberto com sucesso!");
    
    // tabular
    printf("%-15s %-10s\n", "Conta", "Nome");
    while(1){
        // pega do arquivo
        fscanf(arq, "%d %s",&conta,nome);
        // ve se o arquivo terminou -- n permite repetição errada
        if(feof(arq)){
            break;
        }
        // printa essa linha no terminal
        printf("%-15d %-10s\n", conta, nome);
    }    
    // fecha e salva o arquivo
    fclose(arq);
}