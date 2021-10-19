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
        // mensagem de erro
        printf("Digitou um valor fora do intervalo permitido. Tente novamente.\n\
        Lembre-se, precisa ser um valor entre 1 e 7: ");
        // pegando o próximo valor
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
    // input do user
    scanf(" %d", &operacao);

    // laço para caso o aluno digite um valor fora do pedido
    while((operacao) < 1 || (operacao) > 5){
        // msg de erro
        printf("Digitou um valor fora do intervalo permitido. Tente novamente.\n\
        Lembre-se, precisa ser um valor entre 1 e 5: ");
        // input com novo valor
        scanf(" %d", &operacao);
    }
    // retornando qual o valor da operação
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
            for(int i=0; i<10; i ++){ // pegando simbolo para soma
                (vet_operacao[i]) = '+';
            }
        break;
        case 2:
            for(int i=0; i<10; i ++){ // simbolo para subtração
                (vet_operacao[i]) = '-';
            }
        break;
        case 3:
            for(int i=0; i<10; i ++){ // simbolo para multiplicação
                (vet_operacao[i]) = 'x';
            }
        break;
        case 4:
            for(int i=0; i<10; i ++){ // simbolo para divisão
                (vet_operacao[i]) = '/';
            }
        break;
        // condição para que o valor escolhido seja o 5, ou seja, mistura de vários
        default:
            // laço que criará o vetor necessário e também fará numeros aleatorios para uma escolha
            for(int i=0; i<10; i ++){
                aux = (rand() % 4) + 1; // numero aleatorio de 1 a 4
                aux = 1;
                // condições para cada valor aleatorio que resultar
                if(aux == 1){ // para soma
                    (vet_operacao[i]) = '+';
                }
                else if(aux == 2){ // para subtração
                    (vet_operacao[i]) = '-';
                }
                else if(aux == 3){ // para multiplicação
                    (vet_operacao[i]) = 'x';
                }
                else{ // para divisão
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
    /*
    função com a lógica de criação de numeros aleatórios, comparação com o valor digitado pelo user
    função com o cabeçalho ao final
    */

   // declarando a media
    media = 0;
   // for inicial, onde serão passadas as 10 perguntas ao usuario
    for (int i=0; i<10; i ++){

        // a cada laço gera 2 numeros aleatorios, que serão os das perguntas
        num_1 = rand() % tamanho;
        num_2 = rand() % tamanho;

        // condição para caso o segundo valor seja 0, sem divisão por 0
        while((vet_operacao[i] == '/') && (num_2 == 0)){
            // gera o segundo numero até deixar de ser 0
            num_2 = rand() % tamanho;
        }

        // salvando os valores gerados para ser usado no relatorio
        vet_num_1[i] = num_1;
        vet_num_2[i] = num_2;
        
        // condição que pegará a resposta certa pra guardar
        if(vet_operacao[i] == '+'){
            // salva o valor correto
            vet_respostas_certas[i]= num_1 + num_2;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d somado a %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %d", &vet_respostas_user[i]);           
        }
        else if(vet_operacao[i] == '-'){
            // salva o valor correto
            vet_respostas_certas[i]= num_1 - num_2;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d subtraido de %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %d", &vet_respostas_user[i]);    

        }
        else if(vet_operacao[i] == 'x'){
            // salva o valor correto
            vet_respostas_certas[i]= num_1 * num_2;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d multiplicado por %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %d", &vet_respostas_user[i]);   
        }
        //else if(vet_operacao[i] == "/"){
        else {
            // salva o valor correto
            vet_respostas_certas[i]= num_1 / num_2;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d dividido por %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %d", &vet_respostas_user[i]);   
        }


        // bloco de condições que irão fazer a comparação e saber se os valores estão certos ou não
        if(vet_respostas_certas[i] == vet_respostas_user[i]){
            // soma 1 na variavel media
            media = media + 1;
            // adiciona s no vetor de resultados
            vet_resultado[i] = 's';
            // chama a função que vai printar uma msg aleatoria -- positiva
            positiva();
        }
        else{
            // adiciona n no vetor de resultados
            vet_resultado[i] = 'n';
            // chama a função que vai printar uma msg aleatoria -- negativa
            negativa();
        }
    }

    // ajeita o valor da media
    media = media * 10;

    // primeiro print de cabeçalho do relatorio
    printf("\nCálculo\t\tResultado Esp\t\tResposta Dada\t\tCorreto?\n");

    // laço para cada linha do relatorio
    for(int i=0; i<10; i ++){
        // print com os valores e qual a operação
        printf("%d %c %d\t\t", vet_num_1[i], vet_operacao[i], vet_num_2[i]);
        // print de qual seria a resposta certa / esperada
        printf("%d\t\t\t", vet_respostas_certas[i]);
        // print com o valor que foi digitado pelo user
        printf("%d\t\t\t", vet_respostas_user[i]);

        if(vet_resultado[i] == 's'){ // condição que printa Sim ou Não na tabela, baseado no valor do vetor
            printf("Sim\n");
        }
        else{
            printf("Não\n");
        }
    }

    // Informação final do relatorio, se a media é suficiente para o proximo nivel
    if(media>= 70){
        // mensagem caso ela seja
        printf("%d%% de acerto. Parabéns, você está pronto para ir para o próximo nível!\n\n",media);
    }
    else{
        // mensagem para caso ela não seja
        printf("%d%% de acerto. Peça ajuda extra ao seu professor\n\n",media);
    }
    // laço será reiniciado     
}

int main(void){
    // necessário para a geração de números aleatórios, baseado no horario
    srand(time(NULL));
    char continuar = 's';
    while(continuar == 's'){
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
        int operacao = op_matem_visual();
        // vetor dos simbolos das operações
        char vet_operacao[10];
        //chamando a função que irá retornar todos esses simbolos
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
        // vetor que pega se o resultado ta certo ou não
        char vet_resultado[10];

        // função de lógica
        // criação de numeros
        // input do usuario e comparação das respostas
        // relatorio
        logica_respostas(media, vet_resultado, num_1, num_2, vet_operacao, tamanho, vet_num_1, vet_num_2, vet_respostas_certas, vet_respostas_user);

        printf("Deseja fazer outra tentativa?\n\
        [ s ] para SIM\n\
        [ n ] para NÃO\n");
        scanf(" %c", &continuar);
    }
    return 0;
}