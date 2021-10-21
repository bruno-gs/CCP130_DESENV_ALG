/*
1. Defina uma struct que irá representar bandas de música.
Essa estrutura deve ter o nome da banda, que tipo de música
ela toca e o número de integrantes.

2. Crie um procedimento para preencher 5 estruturas de bandas
criadas no exercício anterior. Após criar e preencher, exiba
todas as informações das bandas/estruturas. Não se esqueça
de usar o operador -> para preencher os membros das structs.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Banda{
    char nome[30];
    char tipo_musical[30];
    int numero_integrantes;
};

void ler_dados(struct Banda *banda){
    puts("Digite o nome da banda: ");
    fgets(banda->nome, 30, stdin);
    puts("Digite o estilo musical: ");
    fgets(banda->tipo_musical, 30, stdin);
    puts("Quantidade de integrantes: ");
    scanf(" %d", &banda->numero_integrantes);
    fflush(stdin);
}

void main(){
    int quantidade = 2; // valor de quantas bandas quer cadastrar
    struct Banda grupos[quantidade];
    for(int i =0; i<quantidade; i ++){
        ler_dados(&grupos[i]);
    }
    for(int i =0; i<quantidade; i ++){
        printf("%s", grupos[i].nome);
        printf("%s", grupos[i].tipo_musical);
        printf("%s", grupos[i].numero_integrantes);
    }
}