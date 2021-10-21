/*
Autor:  FRITZ
Data:   21/10/21
Faça um programa que cria uma struct livro, 
    que contém os campos nome, editora, isbn, ano de edição e número de páginas. 

Faça um procedimento para armazenar, então, 5 livros em um vetor. 

Faça outro procedimento para exibir 
    a média do número de páginas dos livros e o nome do livro mais antigo e do livro mais novo.
    
Use os vetores e matrizes disponibilizados pelo Moodle:

char nomes[5][50] = {"livro01", "livro02", "livro03", "livro04", "livro05"};
char editoras[5][50] = {"editora01", "editora02", "editora03", "editora04", "editora05"};
int isbns[5] = {111, 222, 333, 444, 555};
int anos[5] = {1990, 2010, 1995, 2015, 2011};
int paginas[5] = {1000, 220, 500, 800, 150};
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//declaração moodle
char nomes[5][50] = {"livro01", "livro02", "livro03", "livro04", "livro05"};
char editoras[5][50] = {"editora01", "editora02", "editora03", "editora04", "editora05"};
int isbns[5] = {111, 222, 333, 444, 555};
int anos[5] = {1990, 2010, 1995, 2015, 2011};
int paginas[5] = {1000, 220, 500, 800, 150};

struct Livro{
    char    nome[50];
    char    editora[50];
    int     isbn;
    int     ano;
    int     pagina;
};

void armazena(struct Livro livros[5]){

    for(int i =0; i<5; i ++){
        strcpy(livros[i].nome,      nomes[i]);
        strcpy(livros[i].editora,   editoras[i]);
        livros[i].isbn      = isbns[i];
        livros[i].ano       = anos[i];
        livros[i].pagina    = paginas[i];
    }
}

void mostra(struct Livro livros[5]){
    struct Livro novo   = livros[0];
    struct Livro antigo = livros[0];

    float soma = 0;
    for(int i =0; i<5; i ++){
        soma = soma + livros[i].pagina;

        if(livros[i].ano > novo.ano){
            novo = livros[i];
        }
        if(livros[i].ano < antigo.ano){
            antigo = livros[i];
        }
    }

    printf("Média das páginas dos livros cadastrados: %.f", soma/5);
    printf("\nLivro mais novo: %s (publicado em %d)",novo.nome,     novo.ano);
    printf("\nLivro mais velho: %s (publicado em %d)",antigo.nome,   antigo.ano);

}

int main(){
    struct Livro livros[5];

    armazena    (livros);
    mostra      (livros);

    return 0;
}