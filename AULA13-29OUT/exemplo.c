/*
AUTOR: FRITZ

● Escrever em um arquivo texto a conta e o nome de
    vários cliente, conforme entrada do usuário
08/11
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    // criando variaveis de preenchimento
    int conta;
    char nome[30];
    // ponteiro do arquivo
    FILE *arquivo;
    // abre ou cria o arquivo -- segundo arg é do tipo de abertura
        // w cria o arquivo do 0
        // a continua inserindo sem apagar os anteriores
    // .doc (word) ; .xls (excel)
    arquivo = fopen("teste.txt", "a");
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
        puts("Entre com a conta e o nome do cliente: ");
        puts("Digite 0 na conta para sair.");

        // recebendo dados
        scanf(" %d %s", &conta, nome);

        // finalizando laço com conta == 0
        if (conta == 0){
            break;
        }
        // escreve no arquivo
        fprintf(arquivo,"%d %s\n", conta, nome);

    }    
    // fecha e salva o arquivo
    fclose(arquivo);
}