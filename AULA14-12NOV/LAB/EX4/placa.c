/*
AUTOR: FRITZ
DATA: 20/11/2021

Crie 3 funções que, juntas, servirão para a criação de placas

de veículos no novo padrão do Mercosul. O novo padrão é
composto por quatro letras e três números: AAA0A00
Assim, sua primeira função deve gerar e retornar 4 letras
aleatoriamente, a segunda função deve gerar e retornar 3
números inteiros aleatoriamente e a terceira função deve juntar e retornar as letras e os números no padrão correto: letra-letra-letra-num-letra-num-num (AAA0A00)
*/

#include "placa.h"

void letras_aleat(char vet_letras[4]){
  srand(time(NULL));
  for(int i=0; i<4; i++){
    vet_letras[i]= 'a' + (char)(rand()%26);
  }
}

void num_aleat(int vet_num[3]){
  srand(time(NULL));
  for(int i=0; i<3; i++){
    vet_num[i]= rand() % 10;   // de 0 a 9
  }
}

void mostrar_placa(char vet_letras[4], int vet_num[3]){  
  for(int letras=0; letras<4; letras++){
    // printa as letras
    printf("%c",toupper(vet_letras[letras]));
    // printa o numero depois da terceira letra
    if(letras == 2){
      printf("%d",vet_num[0]);
    }
    // printa os dois ultimos numeros
    if(letras == 3){
      printf("%d",vet_num[1]);
      printf("%d",vet_num[2]);
    }
  }
}
