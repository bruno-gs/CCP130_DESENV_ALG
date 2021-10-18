/*
Autor   : BRUNO GOTTSFRITZ SILVA
RA      : 112183355-5
DATA    : 08/10/2021 (INICIO) - 

PROJETO: IAC - Instrução Assistida por Computador
    Projeto que desenvolve um programa para treino de matemática.
*/
#include <stdio.h>
#include <stdlib.h>

// função que pega o input da dificuldade e passa por referência
void dificuldade_visual(int *escolha){
    
    // print para o usuário conseguir decidir qual a dificuldade
    printf("Escolha qual a dificuldade das questões: \n\
    Nível 1: Apenas números com 1 digito\n\
    Nível 2: Números de até 2 dígitos\n\
    Nível 3: Números de até 3 dígitos\n\
    ... A lógica segue até o temido nível 7, com números de até 7 dígitos\n");

    // fazendo um pedido deslocado do bloco de instrução
    printf("\nQual a sua escolha? [digite o número da dificuldade] ");
    // pedindo a entrada ao usuário
    scanf(" %d", &(*escolha));

    // laço para caso o aluno digite um valor fora do permitido
        // uma conferencia para caso erre e não tenha que reiniciar o programa
    while((*escolha) < 1 || (*escolha) > 7){
        printf("Digitou um valor fora do intervalo permitido. Tente novamente.\n\
        Lembre-se, precisa ser um valor entre 1 e 7: ");
        scanf(" %d", &(*escolha));
    }
}

void dificuldade(int *num_1, int *num_2){
    
}

int op_matem_visual(){
    int operacao=0;
    printf("Escolha qual a operação das questões: \n\
    [ 1 ] ADIÇÃO\n\
    [ 2 ] SUBTRAÇÃO\n\
    [ 3 ] MULTIPLICAÇÃO\n\
    [ 4 ] DIVISÃO\n\
    [ 5 ] MISTURA ALEATÓRIA\n");

    printf("\nQual operação deseja treinar? ");
    scanf(" %d", &operacao);
    while((operacao) < 1 || (operacao) > 5){
        printf("Digitou um valor fora do intervalo permitido. Tente novamente.\n\
        Lembre-se, precisa ser um valor entre 1 e 5: ");
        scanf(" %d", &operacao);
    }
    return operacao;
}

void positiva(){
    int op = (rand() % 4) + 1;      // primeiro pega um número aleatório de 0 a 3, dai soma 1 valor
    
    // switch case para as opções e as mensagens diferentes
    switch(op){
        case 1:
            printf("Muito bem!");
        break;
        case 2:
            printf("Excelente!");
        break;
        case 3:
            printf("Bom trabalho!");
        break;
        case 4:
            printf("Mantenha o bom trabalho!");
        break;
        default:
            printf("Você está arrasando!");
    }
}

void negativa(){
    int op = (rand() % 4) + 1;      // primeiro pega um número aleatório de 0 a 3, dai soma 1 valor
    
    // switch case para as opções e as mensagens diferentes
    switch(op){
        case 1:
            printf("Não. Por favor, tente novamente.");
        break;
        case 2:
            printf("Errado. Tente mais uma vez.");
        break;
        case 3:
            printf("Não desista!");
        break;
        case 4:
            printf("Não. Continue tentando.");
        break;
        default:
            printf("Não pare agora. Você irá conseguir!");
    }
}

int main(void){

    while(1){
        // print para informar o usuário do procedimento e desejar boa sorte
        printf("Olá, seja bem vindo(a). \n\
        Para iniciar seu teste é preciso definir qual a dificuldade e o tipo de conta que deseja treinar.\n\
        Depois disso, começará seu treino, serão 10 questões ao total, boa sorte!!\n\
        Espero que curta essa jornada do aprendizado!!\n\n");
        
        // iniciando a escolha da dificuldade em 1
        int escolha = 1;
        // pedindo a dificuldade por referência
        dificuldade_visual(&escolha);
        
        // pedindo qual será a operação
        int operacao = op_matem_visual();

        // após ter o valor de dificuldade e qual operação
        // declarando os valores que serão gerados automaticamente
        int num_1=0, num_2=0;

        // função que irá gerar os valores automaticamente, dentro dos requisitos pedidos
        // irá gerar 
        dificuldade(&num_1, &num_2);

    }
    return 0;
}