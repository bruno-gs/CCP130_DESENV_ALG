/*
Autor:  FRITZ
Data:   24/10/21

Considere um jogo de cartas com “baralho tradicional” (cada carta tem seu naipe e seu valor). 
Implemente o sorteio e distribuição das cartas para 2 jogadores, 
    considerando que cada jogador deve receber 5 cartas. 

Exiba na tela as cartas que cada um dos jogadores recebeu.

Atenção: use a variável seed disponibilizada no Moodle, exemplo:
srand(seed);

Para sorteio das cartas usando o rand()%52 considere a seguinte sequência:

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct carta {
  // C -> Copas; O -> Ouros; P -> Paus; E -> Espadas
  char naipe;
  char valor;
};

void print_deck(struct carta*);
void distribute_cards(struct carta*);

int main(void) {
  // Usando o tempo como Seed pra função rand() 
  srand(seed);

  // 52 cartas em um baralho
  struct carta deck[52];
  char symbols[4] = {'C', 'O', 'P', 'E'};
  // Valor 0 = carta de valor 10 (para não ser lido como uma string ao invés de char)
  char values[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'Q', 'J', 'K'};
  int iter = 0;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 13; j++) {
      deck[iter].naipe = symbols[i];
      deck[iter].valor = values[j];
      iter++;
    }
  }

  distribute_cards(deck);
  return 0;
}


void distribute_cards(struct carta deck[]) {
  struct carta p_one[5];
  struct carta p_two[5];

  for(int i = 0; i < 10; i++) {
    // Lógica geral da função rand(): (rand() % (upper - lower + 1)) + lower
    int num = rand() % 52;
    if(i < 5) {
      p_one[i].naipe = deck[num].naipe;
      p_one[i].valor = deck[num].valor;
    } else {
      p_two[i - 5].naipe = deck[num].naipe;
      p_two[i - 5].valor = deck[num].valor;
    }
  }

  printf("==== Cartas do Jogador 1 ====\n");
  for(int i = 0; i < 5; i++) {
    printf("%c de %c\n", p_one[i].valor, p_one[i].naipe);
  }
  printf("=============================\n");

  printf("==== Cartas do Jogador 2 ====\n");
  for(int i = 0; i < 5; i++) {
    printf("%c de %c\n", p_two[i].valor, p_two[i].naipe);
  }
  printf("=============================\n");
}