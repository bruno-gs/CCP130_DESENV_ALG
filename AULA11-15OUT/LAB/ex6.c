/*
Autor:  FRITZ
Data:   25/10/21

Implemente uma agenda composta por pessoas. 
    Cada pessoa tem os seguintes campos: nome, idade, telefone, endereço, cidade, estado e CEP.

    Crie a struct
    Crie um vetor de 100 registros
    Crie um procedimento para inserir um registro na agenda
    Crie um procedimento para remover um registro da agenda
    Crie um procedimento para buscar um registro pelo nome.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// função que limpa um registro
void limpa(){
  scanf("%*[^\n]");
  scanf("%*c");
}

// definição da struct
struct agenda{
  char  nome[50];
  int   idade;
  int   telefone;
  char  endereco[20];  
  char  cidade[15];
  char  estado[15];
  int   CEP;
};

// função de adicionar que retorna uma struct
struct agenda add(){
  // define adicionar com a struct
  struct agenda adicionar;
  // pegando os vlaores como char, e depois passando para inteiro no atoi
  char CEP[10], idade[3], telefone[10];
  printf("Informações da pessoa\n\n");
  printf("Digite o nome: ");
  // salva o valor do nome nesse adicionar
  fgets(adicionar.nome,50,stdin);
  
  printf("Digite a idade: ");
  fgets(idade,20,stdin);
  // pegando o atoi por causa do fgets
  adicionar.idade = atoi(idade);
  
  // pegadno os demais valores
  printf("Digite o telefone: ");
  fgets(telefone,20,stdin);
  adicionar.telefone = atoi(telefone);

  printf("Digite o endereço: ");
  fgets(adicionar.endereco,20,stdin);

  printf("Digite a cidade: ");
  fgets(adicionar.cidade,15,stdin);
  
  printf("Digite o estado: ");
  fgets(adicionar.estado,15,stdin);

  printf("Digite o CEP: ");
  fgets(CEP,20,stdin);
  adicionar.CEP = atoi(CEP);
  puts("\n\n");
  // retorna o adicionar pra colocar no registro
  return adicionar;
};

// pegando a função deleatr pegando um struct 
struct agenda deletar(){
  // cria uma struct ja definida com deletar
  struct agenda deletar;
  // declarando char pra pegar a copia e depois pegar com atoi
  char CEP[10], idade[3], telefone[10];
  
  strcpy(deletar.nome,"\0");   
  strcpy(idade,"\0");
  deletar.idade = atoi(idade);    
  strcpy(telefone,"\0");
  deletar.telefone = atoi(telefone);  
  strcpy(deletar.endereco,"\0");   
  strcpy(deletar.cidade,"\0");
  strcpy(deletar.estado,"\0");
  strcpy(CEP,"\0");
  deletar.CEP = atoi(CEP);

  // retorna o deletar
  return deletar;
};

// procedimento com a struct de entrada para buscar 
void buscar(struct agenda buscar[100]){
  char nome[50];
  int x,i;
  printf("Digite o nome que deseja buscar: ");
  fgets(nome,50,stdin);
  for(i=0;i<100;i++){
    // if que mostra caso seja encontrado
    if(!strcmp(buscar[i].nome,nome)){
      printf("\nDados encontrados\n\n");
      printf("Nome: %s", buscar[i].nome);
      printf("Idade: %d\n", buscar[i].idade);
      printf("Telefone: %d\n", buscar[i].telefone);
      printf("Endereço: %s", buscar[i].endereco);
      printf("Cidade: %s", buscar[i].cidade);
      printf("Estado: %s", buscar[i].estado);
      printf("CEP: %d\n\n\n", buscar[i].CEP);

      break;
    }
  }
  // confere e retorna caso n ache
  if(strcmp(buscar[i].nome,nome))
    puts("Nome não encontrado\n\n\n");
};

int main(void){
  // declara a struct base para as adições, buscas e retiradas
  struct agenda agenda[100];
  int x,j=0;

  do{
    // cabeçalho de escolha do que deseja fazer
    printf("1 - Adicionar\n2 - Remover ultimo cadastro\n3 - Buscar\n0 - Sair\n");
    printf("\nDigite uma das opções acima: ");
    scanf("%d", &x);
    limpa();
    system("clear");
    if(x==1){
      agenda[j] = add();
      j++;
    }
    else if(x==2){
      agenda[j-1] = deletar();
      j--;
      printf("Cadastro removido com sucesso\n\n\n");
    }
    else if(x==3){
      buscar(agenda);
    }
  }while(x!=0);

  
  return 0;
}