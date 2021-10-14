/*
Autor : FRITZ
DATA: 14/10/2021

Escreva um programa baseado no Exercício 4 que recebe uma frase 
    e determina as ocorrências totais de cada letra do alfabeto. 

Letras maiúsculas e minúsculas devem ser contadas juntas. 

Armazene os totais para cada letra em um array e 
    imprima os valores em formato tabular depois que os totais forem determinados.
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

  char s[50]={"asd"};
  char Mi= 97,Ma=65;
  int v[26], x=0;

  for(int f=0; f<26;f++){
    v[f]=0;
  }

  puts("Digite uma frase:");
  fgets(s,50,stdin);
  
  
  for (int x=0; x < 26; x++){
    for (int i=0; i < 50; i++){
      if(s[i] == Ma || s[i] == Mi){
        v[x]++;
      }
    }
    Ma++;
    Mi++;
  }
  Mi=97;
  for(int p=0; p < 26; p++){
    printf("O caractere %c foi encontrado %d vezes\n",Mi,v[p]);
    Mi++;
  }

  return 0;
}