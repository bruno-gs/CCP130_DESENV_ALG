/*
Autor : FRITZ
DATA: 28/09/2021

Existem restrições para que uma pessoa possa doar sangue. 
    Uma delas é relativa ao peso. 
    Mulheres tem que pesar no mínimo 50kg e homens no mínimo 60kg. 
    
Faça uma função para informar se uma pessoa está ou não apta a doar sangue sabendo seu sexo e seu peso. 

 O programa principal deve ler as entradas, acionar a função e exibir a resposta.
*/

#include <stdio.h>

// funçaõ que retorna se a pessoa pode doar ou não
// Já apresenta a mensagem de saída
void doador(char sexo, float peso){
    // 1 só if com os dois valores sendo comparados já
    if( (sexo == 'm' && peso >= 60) || (sexo == 'f' && peso >= 50) ){
        printf("Você pode doar sangue!");
    }
    else{
        printf("Você não pode doar sangue!");
    }
}

int main(){
    // variaveis que servirão de input ao user
    char    sexo;
    float   peso;

    // pedindo o sexo 
    printf  ("Digite seu sexo (m ou f):");
    scanf   (" %c", &sexo);

    // pedindo o peso
    printf  ("Digite seu peso em kg:");
    scanf   (" %f", &peso);

    // chamando a função doador
    doador(sexo, peso); 
    
    return 0;
}