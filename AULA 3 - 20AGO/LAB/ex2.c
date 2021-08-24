/* 
Exercicio 2 da aula 3 da disciplina
AUTOR: FRITZ
DATA: 24/08/2021
*/

/*Um zoológico em particular determina o preço da entrada com base na idade do visitante. 
    Os visitantes com 2 anos de idade ou menos têm entrada gratuita. 
    Crianças entre 3 e 12 anos pagam R$ 14,00. 
    Idosos com 65 anos ou mais pagam R$ 18,00. 
    A entrada para todos os outros visitantes custa R$ 23,00. 

Crie um programa que comece lendo as idades de todos os visitantes de um mesmo grupo, 
sendo uma idade informada em cada linha. 
O usuário digitará 0 (zero) para indicar que não há mais pessoas no grupo. 

Em seguida, seu programa deve exibir o custo total para o grupo. 
    O custo deve ser exibido usando duas casas decimais.*/

#include <stdio.h>

int main(void){

    int idade; 
    float valor=0;

    do{
        printf("Digite a idade do visitante: \n");
        scanf(" %d", &idade);
        
        // condição para valor de cada visitante
        if (idade <= 2){
            valor = valor;
        }
        else if(idade <=12){
            valor += 14;
        }
        else if(idade<65){
            valor += 23;
        }
        else{
            valor += 18;
        }


    }while(idade != 0);

    printf("O Valor do grupo é %.2f", valor);

    return 0;
}