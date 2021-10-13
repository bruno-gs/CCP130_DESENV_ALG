/*
Autor : FRITZ
DATA: 05/09/2021

Leitor de datas: Crie um procedimento em C que receba uma string data e 
    três inteiros por referência: dia, mês e ano. 
    
Este procedimento deverá escrever nas variáveis dia, mês e ano 
    seus respectivos valores obtidos a partir da data representada na string. 

Considere que a string data possa ter os seguintes formatos: 

20/04/2021

20-04-2021

20-4-2021

20.4.2021

20/4/21

For example:
Input 	                Result

                        Digite uma data:
20/04/2021              Dia: 20, Mês: 4, Ano: 2021


                        Digite uma data:
20-04-2021              Dia: 20, Mês: 4, Ano: 2021

                        Digite uma data:
20-4-2021               Dia: 20, Mês: 4, Ano: 2021

*/

#include <stdio.h>
#include <string.h>

void transforma(char data[11],int*dia, int*mes, int*ano ){
  char separacao;
  sscanf(data,"%d %c %d %c %d", dia, &separacao, mes, &separacao, ano);
  printf("Dia: %d, ", *dia);
  printf("Mês: %d, ", *mes);
  printf("Ano: %d", *ano);
}
int main(void) {
    char data[11];
    int dia=0, mes=0, ano=0;
    printf("Digite uma data:\n");
    scanf("%s", data);
    // puts(data);
    transforma(data,&dia,&mes,&ano);

  return 0;
}