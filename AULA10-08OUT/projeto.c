/*
Autor   : BRUNO GOTTSFRITZ SILVA
RA      : 112183355-5
DATA    : 08/10/2021 (INICIO) - 

PROJETO: IAC - Instrução Assistida por Computador
*/

void menu_visual(){

    
}

void op_matem(){
    int operacao;
    printf("Escolha qual a dificuldade das questões: \n\
    [ 1 ] ADIÇÃO\n\
    [ 2 ] SUBTRAÇÃO\n\
    [ 3 ] MULTIPLICAÇÃO\n\
    [ 4 ] DIVISÃO\n\
    [ 5 ] MISTURA ALEATÓRIA\n");

    printf("\nQual operação deseja treinar? ");
    scanf(" %d", &operacao);
    return operacao;
}

void positiva(){

}

void negativa(){

}

void dificuldade(){
    int escolha;
    printf("Escolha qual a dificuldade das questões: \n\
    Nível 1: Apenas números com 1 digito\n\
    Nível 2: Números de até 2 dígitos\n\
    Nível 3: Números de até 3 dígitos\n\
    ... A lógica segue até o temido nível 7, com números de até 7 dígitos\n");

    printf("\nQual a sua escolha? [digite o valor da dificuldade] ");
    scanf(" %d", &escolha);
}

int main(void){

    printf("Olá, Bem vindo(a) ao seu estudo de operações matemáticas!!");
    


    return 0;
}