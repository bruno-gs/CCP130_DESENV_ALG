/*
Autor   : BRUNO GOTTSFRITZ SILVA
RA      : 112183355-5
DATA    : 08/10/2021 (INICIO) - 

PROJETO: IAC - Instrução Assistida por Computador
    Projeto que desenvolve um programa para treino de matemática.
*/
#include <stdio.h>
#include <stdlib.h>
// necessário para pegar o horário e utilizar na geração de num aleatorio 
#include <time.h>

// função que pega o input da dificuldade e passa por referência
void dificuldade_visual(int *escolha, int *tamanho){
    /*
    Função de cabeçalho visual e definição de qual a dificuldade o alno quer estudar
    */
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

    // if para cada tamanho de valor que será gerados 
        // num_1 = rand() % tamanho
    
    // nv 1, valores até 1 digito
    if((*escolha)==1){
        (*tamanho) = 10;
    }
    // nv 2, valores até 2 digitos
    else if((*escolha)==2){
        (*tamanho) = 100;
    }
    // nv 3, valores até 3 digitos
    else if((*escolha)==3){
        (*tamanho) = 1000;
    }
    // nv 4, valores até 4 digitos
    else if((*escolha)==4){
        (*tamanho) = 10000;
    }
    // nv 5, valores até 5 digitos
    else if((*escolha)==5){
        (*tamanho) = 100000;
    }
    // nv 6, valores até 6 digitos
    else if((*escolha)==6){
        (*tamanho) = 1000000;
    }
    // nv 7, valores até 7 digitos
    else{
        (*tamanho) = 10000000;
    } 
}

int op_matem_visual(){
    /*
    Função de cabeçalho visual e definição de qual a operação o alno quer estudar
    */
    int operacao=0;

    // print com o cabeçalho
    printf("Escolha qual a operação das questões: \n\
    [ 1 ] ADIÇÃO\n\
    [ 2 ] SUBTRAÇÃO\n\
    [ 3 ] MULTIPLICAÇÃO\n\
    [ 4 ] DIVISÃO\n\
    [ 5 ] MISTURA ALEATÓRIA\n");

    // pedindo a entrada de qual o valor decidido
    printf("\nQual operação deseja treinar? ");
    scanf(" %d", &operacao);

    // laço para caso o aluno digite um valor fora do pedido
    while((operacao) < 1 || (operacao) > 5){
        printf("Digitou um valor fora do intervalo permitido. Tente novamente.\n\
        Lembre-se, precisa ser um valor entre 1 e 5: ");
        scanf(" %d", &operacao);
    }
    return operacao;
}

void op_matem_simb(int operacao, char vet_operacao[10]){
    /*
    essa função coloca todos os simbolos das operações em um vetor de char
    a ideia é usar esse vetor para fornecer o relatório e também na decisão de qual
    operação será realizada 
    */
    int aux = 1;
    
    // switch case para as opções de cada conta
    switch(operacao){
        // escolher e salvar cada tipo de simbolo
        case 1:
            for(int i=0; i<10; i ++){
                (vet_operacao[i]) = '+';
            }
        break;
        case 2:
            for(int i=0; i<10; i ++){
                (vet_operacao[i]) = '-';
            }
        break;
        case 3:
            for(int i=0; i<10; i ++){
                (vet_operacao[i]) = '*';
            }
        break;
        case 4:
            for(int i=0; i<10; i ++){
                (vet_operacao[i]) = '/';
            }
        break;
        // condição para que o valor escolhido seja o 5, ou seja, mistura de vários
        default:
            // laço que criará o vetor necessário e também fará numeros aleatorios para uma escolha
            for(int i=0; i<10; i ++){
                //aux = rand() % 4; // numero aleatorio de 1 a 4
                aux = 1;
                // condições para cada valor aleatorio que resultar
                if(aux == 1){
                    (vet_operacao[i]) = '+';
                }
                else if(aux == 2){
                    (vet_operacao[i]) = '-';
                }
                else if(aux == 3){
                    (vet_operacao[i]) = 'x';
                }
                else{
                    (vet_operacao[i]) = '/';
                }
            }
    }    
}

void positiva(){
    /*
    essa função irá retornar as respostas caso o aluno acerte o valor da conta
    */

    int op = (rand() % 4) + 1;      // primeiro pega um número aleatório de 0 a 3, dai soma 1 valor
    
    // switch case para as opções e as mensagens diferentes
    // foi colocado um default, mas nunca será utilizado
    switch(op){
        case 1:
            printf("Muito bem!\n");
        break;
        case 2:
            printf("Excelente!\n");
        break;
        case 3:
            printf("Bom trabalho!\n");
        break;
        case 4:
            printf("Mantenha o bom trabalho!\n");
        break;
        default:
            printf("Você está arrasando!\n");
    }
}

void negativa(){
    /*
    essa função irá retornar as respostas caso o aluno acerte o valor da conta
    */
    int op = (rand() % 4) + 1;      // primeiro pega um número aleatório de 0 a 3, dai soma 1 valor
    
    // switch case para as opções e as mensagens diferentes
    // foi colocado um default, mas nunca será utilizado
    switch(op){
        case 1:
            printf("Não. Por favor, tente novamente.\n");
        break;
        case 2:
            printf("Errado. Tente mais uma vez.\n");
        break;
        case 3:
            printf("Não desista!\n");
        break;
        case 4:
            printf("Não. Continue tentando.\n");
        break;
        default:
            printf("Não pare agora. Você irá conseguir!\n");
    }
}

void logica_respostas(int media, char vet_resultado[10], int num_1, int num_2, char vet_operacao[10], int tamanho, int vet_num_1[10], int vet_num_2[10], int vet_respostas_certas[10],int vet_respostas_user[10]){
    
    for (int i=0; i<10; i ++){
        num_1 = rand() % tamanho;
        num_2 = rand() % tamanho;

        // condição para caso o segundo valor seja 0, sem divisão por 0
        while((vet_operacao[i] == '/') && (num_2 == 0)){
            // gera o segundo numeor até deixar de ser 0
            num_2 = rand() % tamanho;
        }
        // salvando os valores usados
        vet_num_1[i] = num_1;
        vet_num_2[i] = num_2;
        
        // condição que pegará a resposta certa pra guardar
        if(vet_operacao[i] == '+'){
            // salva o valor correto
            vet_respostas_certas[i]= num_1 + num_2;
            // printa ao usuário para saber qual a resposta dele
                // pede a resposta e salva no outro vetor
            printf("Quanto é %d somado a %d? ", num_1, num_2);
            scanf(" %d", &vet_respostas_user[i]);           
        }
        else if(vet_operacao[i] == '-'){
            // salva o valor correto
            vet_respostas_certas[i]= num_1 - num_2;
            // printa ao usuário para saber qual a resposta dele
                // pede a resposta e salva no outro vetor
            printf("Quanto é %d subtraido de %d? ", num_1, num_2);
            scanf(" %d", &vet_respostas_user[i]);    

        }
        else if(vet_operacao[i] == 'x'){
            // salva o valor correto
            vet_respostas_certas[i]= num_1 * num_2;
            // printa ao usuário para saber qual a resposta dele
                // pede a resposta e salva no outro vetor
            printf("Quanto é %d multiplicado por %d? ", num_1, num_2);
            scanf(" %d", &vet_respostas_user[i]);   
        }
        //else if(vet_operacao[i] == "/"){
        else {
            // salva o valor correto
            vet_respostas_certas[i]= num_1 / num_2;
            // printa ao usuário para saber qual a resposta dele
                // pede a resposta e salva no outro vetor
            printf("Quanto é %d dividido por %d? ", num_1, num_2);
            scanf(" %d", &vet_respostas_user[i]);   
        }

        if(vet_respostas_certas[i] == vet_respostas_user[i]){
            media ++;
            vet_resultado[i] = 's';
            positiva();
        }
        else{
            vet_resultado[i] = 'n';
            negativa();
        }
    }

    media = (media / 10) * 100;

    printf("\nCálculo\t\tResultado Esp\t\tResposta Dada\t\tCorreto?\n");

    for(int i=0; i<10; i ++){
        printf("%d %c %d\t\t", vet_num_1[i], vet_operacao[i], vet_num_2[i]);
        printf("%d\t\t\t", vet_respostas_certas[i]);
        printf("%d\t\t\t", vet_respostas_user[i]);
        if(vet_resultado[i] == 's'){
            printf("Sim\n");
        }
        else{
            printf("Não\n");
        }
    } 
    if(media>= 70){
        printf("%d%% de acerto. Parabéns, você está pronto para ir para o próximo nível!\n\n",media);
    }
    else{
        printf("%d%% de acerto. Peça ajuda extra ao seu professor\n\n",media);
    }
          
}

int main(void){
    // necessário para a geração de números aleatórios, baseado no horario
    srand(time(NULL));

    while(1){
        // print para informar o usuário do procedimento e desejar boa sorte
        printf("Olá, seja bem vindo(a). \n\
        Para iniciar seu teste é preciso definir qual a dificuldade e o tipo de conta que deseja treinar.\n\
        Depois disso, começará seu treino, serão 10 questões ao total, boa sorte!!\n\
        Espero que curta essa jornada do aprendizado!!\n\n");
        
        // iniciando a escolha da dificuldade em 1
            // a variavel tamanho será usada para fazer a geração dos digitos 
        int escolha = 1, tamanho = 10;
        // pedindo a dificuldade por referência
        dificuldade_visual(&escolha, &tamanho);
                
        // pedindo qual será a operação
        int operacao            = op_matem_visual();
        // vetor dos simbolos das operações
            // chama a função que irá retornar todos esses simbolos
        char vet_operacao[10];
        op_matem_simb(operacao, vet_operacao);

        // após ter o valor de dificuldade e qual operação
        // declarando os valores que serão gerados automaticamente
        int num_1=0, num_2=0;
        // criar vetores de armazenamento dos numeros '1' e '2' gerados
        int vet_num_1[10], vet_num_2[10];
        
        // vetores que guardam as repostas certas e do usuario
        int vet_respostas_certas[10], vet_respostas_user[10];

        // cabeçalho para o inicio das perguntas
        printf("\nVAMOS COMEÇAR!! BOA SORTE!\n\n");

        // variavel para calcular a media
        int media = 0;
        // vetor que pega se o resultado ta certo ou Não
        char vet_resultado[10];

        // função de lógica
        // criação de numeros
        // input do usuario e comparação das respostas
        // relatorio
        logica_respostas(media, vet_resultado, num_1, num_2, vet_operacao, tamanho, vet_num_1, vet_num_2, vet_respostas_certas, vet_respostas_user);
  
    }
    return 0;
}