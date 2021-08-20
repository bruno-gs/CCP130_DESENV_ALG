#include <stdio.h>

int main(void){
    float n1, n2, media;
    int op;

    do{
        printf("Digite a primeira nota: ");
        scanf(" %f", &n1);
        printf("Digite a segunda nota: ");
        scanf(" %f", &n2);

        media = (n1+n2)/2;
        printf("Média: %.2f\n",media);

        printf("Deseja fazer outro cálculo?\n");
        printf("Digite [1] para SIM e [2] para NÃO\n");

        scanf(" %d",&op);
    }while(op==1);

    return 0;
}