/*
Autor:  FRITZ
Data:   24/10/21

Implemente uma agenda composta por pessoas. 
    Cada pessoa tem os seguintes campos: nome, idade, telefone, endereço, cidade, estado e cep.

    Crie a struct
    Crie um vetor de 100 registros
    Crie um procedimento para inserir um registro na agenda
    Crie um procedimento para remover um registro da agenda
    Crie um procedimento para buscar um registro pelo nome.
*/

#include <stdio.h>
#include <stdlib.h>

struct agenda{
  char nome[20];
  int idade;
  int telefone;
  char endereço[20];
  char cidade[20];
  char estado[20];
  int CEP;
};

void receber_dados(struct agenda *a){
  puts("Digite o nome:");
  scanf("%s", a->nome);
  puts("Idade:");
  scanf("%d", &a->idade);
  puts("Telefone:");
  scanf("%d", &a->telefone);
  puts("Endereço:");
  scanf("%s", a->endereço);
  puts("Cidade:");
  scanf("%s", a->cidade);
  puts("Estado:");
  scanf("%s", a->estado);
  puts("CEP:");
  scanf("%d", &a->CEP);
}

int main(void) {
    struct agenda sala[100];

    for(int i=0; i<5; i++)
        receber_dados(&sala[i]);
  
    for(int i=0; i<5; i++){
        printf("%s\n", sala[i].nome);
        printf("%d\n", sala[i].idade);
        printf("%d\n", sala[i].telefone);
        printf("%s\n", sala[i].endereço);
        printf("%s\n", sala[i].cidade);
        printf("%s\n", sala[i].estado);
        printf("%d\n", sala[i].CEP);
    }
    }