/*
AUTOR: FRITZ

Exemplo mexendo com arquivos no C
08/11
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    // ponteiro do arquivo
    FILE *arquivo;
    // abre ou cria o arquivo -- segundo arg é do tipo de abertura
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
    // variaveis pra teste msm
    int conta = 100;
    char nome[30]="Bruno";
    // escreve no arquivo
    fprintf(arquivo,"%d %s\n", conta, nome);
    fprintf(arquivo,"%d %s\n", 200, "Julia");
    // fecha e salva o arquivo
    fclose(arquivo);
}