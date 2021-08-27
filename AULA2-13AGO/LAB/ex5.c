/* 
Exercicio 4 da aula 2 da disciplina
AUTOR: FRITZ
DATA: 17/08/2021
*/

/*Enunciado:
Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:

"Telefonou para a vítima?"

"Esteve no local do crime?"

"Mora perto da vítima?"

"Devia para a vítima?"

"Já trabalhou com a vítima?"

Então o programa deve emitir uma classificação sobre a participação da pessoa no crime. 
Se a pessoa responder positivamente a 2 questões, 
    ela deve ser classificada como Suspeita, 
entre 3 e 4 
    como Cúmplice 
e 5 como Assassino. 
Caso contrário, ele será classificado como Inocente.
*/

#include <stdio.h>

int main(void){
    char r1,r2,r3,r4,r5;
    int contagem=0;
    // OCORREU DO SCANF NÃO PEDIR VALOR POR N ESTAR:
        // scanf(" %c") COM ESPAÇO KKK
    // SEQUENCIA DE PERGUNTAS E JÁ COMPUTANDO AS RESPOSTAS
    printf("Responda as perguntas com sim (s) ou nao (n)\n");
    printf("Telefonou para a vitima?\n");
    printf("Esteve no local do crime?\n");
    printf("Mora perto da vitima?\n");
    printf("Devia para a vitima?\n");
    printf("Ja trabalhou com a vitima?");
    scanf(" %c", &r1);
    scanf(" %c", &r2);
    scanf(" %c", &r3);
    scanf(" %c", &r4);
    scanf(" %c", &r5);

    if(r1=='s'){
        contagem ++;
        }
        
    if(r2=='s'){
        contagem ++;
        }
        
    if(r3=='s'){
        contagem ++;
        }
        
    if(r4=='s'){
        contagem ++;
        }
        
    if(r5=='s'){
        contagem ++;
        }
    
    // classificando a pessoa
    if (contagem==0){
        printf("\nINOCENTE!");
    }
    else if(contagem<=2){
        printf("\nSUSPEITO!");
    }
    else if(contagem<=4){
        printf("\nCUMPLICE!");
    }
    else{
        printf("\nASSASSINO!");
    }

    return 0;
}