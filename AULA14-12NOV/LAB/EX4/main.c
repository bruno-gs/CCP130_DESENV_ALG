/*
AUTOR: FRITZ
DATA: 20/11/2021

Crie 3 funções que, juntas, servirão para a criação de placas

de veículos no novo padrão do Mercosul. O novo padrão é
composto por quatro letras e três números: AAA0A00
Assim, sua primeira função deve gerar e retornar 4 letras
aleatoriamente, a segunda função deve gerar e retornar 3
números inteiros aleatoriamente e a terceira função deve juntar

e retornar as letras e os números no padrão correto:
letra-letra-letra-num-letra-num-num (AAA0A00)
*/

#include "placa.h"
int main(){

  char vet_letras[4];
  int vet_num[3];
  // função que cria as letras aleatórias
  letras_aleat(vet_letras);
  // função que cria os numeros aleatórios
  num_aleat(vet_num); 
  printf("PLACA GERADA: ");
  // função que mostra a placa no jeito certo
  mostrar_placa(vet_letras,vet_num);

  return 0;
}