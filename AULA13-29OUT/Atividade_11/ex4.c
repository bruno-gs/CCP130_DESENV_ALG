/*
AUTOR: FRITZ
DATA: 10/11/2021


Faça um programa que receba do usuário o nome de um arquivo texto 
    e mostre na tela quantas letras são vogais e quantas são consoantes dentro do arquivo. 
Utilize os arquivos disponibilizados para teste.

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// função para pegar o total de funcionarios no arquivo
int leitura(FILE *arquivo, int vet_num[40]){
    int i = 0;
    while(fscanf(arquivo, "%d", &vet_num[i]) != EOF){
        i ++;
    }
    return i;
}


int main(){ 
    char nome_arquivo[20];
    printf("Digite o nome do arquivo que deseja ler: ");
    scanf(" %s",nome_arquivo);
    // ponteiro para abrir o arquivo -- modo de leitura
    FILE *arquivo = fopen(nome_arquivo,"r");

    //vetor para salvar todos os numeros do arquivo
    int vogais=0;
    int consoantes=0;
    char letra;
    
    while(fscanf(arquivo, "%c", &letra) != EOF){
        if(isalpha(letra)){
            //tolower transforma em minuscula
            letra = tolower(letra);
            if(letra == 'a' || letra=='e' || letra=='i' || letra=='o' ||letra=='u'){
                vogais ++;
            }
            else if(letra == 'b' || letra=='c' || letra=='d' ||letra=='e'|| letra=='f'|| 
            letra=='g'|| letra=='h'|| letra=='j'|| letra=='k'|| letra=='l'|| letra=='m'|| 
            letra=='n'|| letra=='p'|| letra=='q'|| letra=='r'|| letra=='s'|| letra=='t'|| 
            letra=='v' || letra=='w' || letra=='x'|| letra=='y'|| letra=='z'){
                consoantes ++;
            }
        }
        
    }
    printf("O arquivo possui %d vogais e %d consoantes",vogais,consoantes);

    return 0;
}