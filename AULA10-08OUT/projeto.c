/*
Autor   : BRUNO GOTTSFRITZ SILVA
RA      : 112183355-5
DATA    : 08/10/2021 (INICIO) - 20/10/2021 (FINALIZAÇÃO)

PROJETO: IAC - Instrução Assistida por Computador
    Projeto que desenvolve um programa para treino de matemática.
*/
#include <stdio.h>
#include <stdlib.h>
// necessário para pegar o horário e utilizar na geração de num aleatorio 
#include <time.h>
// necessário para a aplicação da função round na divisão
#include <math.h>

// função que pega o input da dificuldade e passa por referência
void dificuldade_escolha(int *nivel_dif){
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
    scanf(" %d", &(*nivel_dif));

    // laço para caso o aluno digite um valor fora do permitido
        // uma conferencia para caso erre e não tenha que reiniciar o programa
    while((*nivel_dif) < 1 || (*nivel_dif) > 7){
        // mensagem de erro
        printf("Digitou um valor fora do intervalo permitido. Tente novamente.\n\
        Lembre-se, precisa ser um valor entre 1 e 7: ");
        // pegando o próximo valor
        scanf(" %d", &(*nivel_dif));
    }

    // if para cada tamanho de valor que será gerados 
        // num_1 = rand() % nivel_dif    
    // nv 1, valores até 1 digito
    if((*nivel_dif)==1){
        (*nivel_dif) = 10;
    }
    // nv 2, valores até 2 digitos
    else if((*nivel_dif)==2){
        (*nivel_dif) = 100;
    }
    // nv 3, valores até 3 digitos
    else if((*nivel_dif)==3){
        (*nivel_dif) = 1000;
    }
    // nv 4, valores até 4 digitos
    else if((*nivel_dif)==4){
        (*nivel_dif) = 10000;
    }
    // nv 5, valores até 5 digitos
    else if((*nivel_dif)==5){
        (*nivel_dif) = 100000;
    }
    // nv 6, valores até 6 digitos
    else if((*nivel_dif)==6){
        (*nivel_dif) = 1000000;
    }
    // nv 7, valores até 7 digitos
    else{
        (*nivel_dif) = 10000000;
    } 
}

void op_matem(char vet_operacao[10]){
    /*
    Parte da função de cabeçalho visual e definição de qual a operação o alno quer estudar
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

    /*
    parte da função que coloca todos os simbolos das operações em um vetor de char
    a ideia é usar esse vetor para fornecer o relatório e também na decisão de qual
    operação será realizada 
    */

   int aux = 1;     // variavel para ajudar na definição dos simbolos
   
   for (int i=0; i<10; i ++){ // laço que fará a conferencia de cada valor e guardará quais serão as operações
       
       // encontrando valor do aux
       if(operacao==5){             // condição mista
           aux = (rand() % 4) + 1; // numero aleatorio de 1 a 4 para o aux que define as operações
       }
       else{                        // se a operacao for definida, ele só pega esse valor e usa
           aux = operacao;
       }
       
       // comparando valor do aux e armazenando o simbolo no vetor
       if(aux==1){         // armazenando simbolo para soma
            (vet_operacao[i]) = '+';
       }
       else if(aux==2){    // simbolo para subtração
           (vet_operacao[i]) = '-';
       }
       else if(aux==3){    // simbolo para multiplicação
           (vet_operacao[i]) = 'x';
       }
       else if(aux==4){    // simbolo para divisão
           (vet_operacao[i]) = '/';
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

void logica_respostas(int media, char vet_resultado[10], int num_1, int num_2, char vet_operacao[10], int nivel_dif, int vet_num_1[10], int vet_num_2[10], double vet_respostas_certas[10],double vet_respostas_user[10]){
    /*
    função com a lógica de criação de numeros aleatórios, comparação com o valor digitado pelo user
    foratação do o cabeçalho ao final
    */

   // declarando a media
    media = 0;
   // for inicial, onde serão passadas as 10 perguntas ao usuario
    for (int i=0; i<10; i ++){

        // a cada laço gera 2 numeros aleatorios, que serão os das perguntas
        num_1 = rand() % nivel_dif;
        num_2 = rand() % nivel_dif;

        // condição para caso o segundo valor seja 0, sem divisão por 0
        while((vet_operacao[i] == '/') && (num_2 == 0)){
            // gera o segundo numero até deixar de ser 0
            num_2 = rand() % nivel_dif;
        }

        // salvando os valores gerados para ser usado no relatorio
        vet_num_1[i] = num_1;
        vet_num_2[i] = num_2;
        
        // condição que pegará a resposta certa pra guardar
        if(vet_operacao[i] == '+'){                 // soma
            // salva o valor correto
            // long para transformar o valor em double
            vet_respostas_certas[i] = (long)num_1 + (long)num_2;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d somado a %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %lf", &vet_respostas_user[i]);           
        }
        else if(vet_operacao[i] == '-'){            // subtração
            // salva o valor correto
            // long para transformar o valor em double
            vet_respostas_certas[i]= (long)num_1 - (long)num_2;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d subtraido de %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %lf", &vet_respostas_user[i]);    

        }
        else if(vet_operacao[i] == 'x'){            // multiplicação
            // salva o valor correto
            // long para transformar o valor em double
            vet_respostas_certas[i]= (long)num_1 * (long)num_2;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d multiplicado por %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %lf", &vet_respostas_user[i]);   
        }
        else {                                      // divisão 
            // salva o valor correto
            // round irá tornar o valor da divisão com 1 casa decimal somente, importante para comparação
            // e também para digitação correta do user
            vet_respostas_certas[i]= round( ((double)num_1 / (double)num_2)*10 ) / 10;
            // printa ao usuário para saber qual a resposta dele
            printf("Quanto é %d dividido por %d? ", num_1, num_2);
            // pede a resposta e salva no outro vetor
            scanf(" %lf", &vet_respostas_user[i]);   
        }


        // bloco de condições que irão fazer a comparação e saber se os valores estão certos ou não
        // o valor negativo na condição do '||' foi visualizado por testes, portanto, para corrigir qq erro, foi adicionada
        // há um '||' para caso eles sejam iguais também, pois estava dando muitos erros
        if  (((vet_respostas_user[i]-vet_respostas_certas[i])==0.0) || 
            ((vet_respostas_user[i]-vet_respostas_certas[i])==-0.0) || 
            (vet_respostas_user[i]==vet_respostas_certas[i]))           {
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
    printf("\n      Cálculo \t\tResultado Esp\t    Resposta Dada\tCorreto?\n");

    // laço para cada linha do relatorio
    for(int i=0; i<10; i ++){
        // print com os valores e qual a operação
        printf("%8d %c %-8d\t", vet_num_1[i], vet_operacao[i], vet_num_2[i]);

        if(vet_operacao[i] == '/'){ // print com 1 casa decimal para as operações de divisão
            // print de qual seria a resposta certa / esperada
            printf("%-20.1lf", vet_respostas_certas[i]);  // .1lf -- com 1 casa decimal
            // print com o valor que foi digitado pelo user
            printf("%-20.1lf", vet_respostas_user[i]);    // .1lf -- com 1 casa decimal
        }
        else{ // para o resto das operações que não precisam de casa decimal
            // print de qual seria a resposta certa / esperada
            printf("%-20.lf", vet_respostas_certas[i]);  // .lf -- sem casas decimais
            // print com o valor que foi digitado pelo user
            printf("%-20.lf", vet_respostas_user[i]);    // .lf -- sem casas decimais
        }

        if(vet_resultado[i] == 's'){    // condição que printa Sim ou Não na tabela, baseado no valor do vetor
            printf("Sim\n");
        }
        else{                           // condição para erro do user
            printf("Não\n");
        }
    }

    // Informação final do relatorio, se a media é suficiente para o proximo nivel
    if(media>= 70){         // mensagem caso ela seja
        printf("%d%% de acerto. Parabéns, você está pronto para ir para o próximo nível!\n\n",media);
    }
    else{                   // mensagem para caso ela não seja
        printf("%d%% de acerto. Peça ajuda extra ao seu professor\n\n",media);
    }
    // programa será reiniciado (pergunta de confirmação para fazer ou não)    
}

int main(void){
    // necessário para a geração de números aleatórios, baseado no horario
    srand(time(NULL));
    // variavel para decidir se vai continuar treinando depois das 10 perguntas
    char continuar = 's';
    while(continuar == 's'){
        // print para informar o usuário do procedimento e desejar boa sorte
        printf("Olá, seja bem vindo(a). \n\
        Para iniciar seu teste é preciso definir qual a dificuldade e o tipo de conta que deseja treinar.\n\
        Depois disso, começará seu treino, serão 10 questões ao total, boa sorte!!\n\
        Espero que curta essa jornada do aprendizado!!\n\n");
        
        // iniciando a escolha da dificuldade em 1
            // a variavel tamanho será usada para fazer a geração dos digitos 
        int nivel_dif = 1;
        // pedindo a dificuldade por referência
        dificuldade_escolha(&nivel_dif);

        // Iniciando parte da escolha das operações
        // vetor dos simbolos das operações
        char vet_operacao[10];
        //chamando a função que irá retornar todos esses simbolos
        op_matem(vet_operacao);

        // após ter o valor de dificuldade e qual operação
        // declarando os valores que serão gerados automaticamente
        int num_1=0, num_2=0;
        // criar vetores de armazenamento dos numeros '1' e '2' gerados
        int vet_num_1[10], vet_num_2[10];
        
        // vetores que guardam as repostas certas e do usuario
        // vetores em double porque a resposta do usuario para divisão precisa de 1 casa
        // a resposta certa é usado long no int, que passa a ser double
        double vet_respostas_certas[10], vet_respostas_user[10];

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
        logica_respostas(media, vet_resultado, num_1, num_2, vet_operacao, nivel_dif, vet_num_1, vet_num_2, vet_respostas_certas, vet_respostas_user);

        // print para perguntar ao user se ele deseja continuar praticando ou não
        // mais para um controle do laço while
        printf("Deseja fazer outra tentativa?\n\
        [ s ] para SIM\n\
        [ n ] para NÃO\n\
        Qual sua escolha? ");
        // pegando a entrada
        scanf(" %c", &continuar);
    }
    return 0;
}