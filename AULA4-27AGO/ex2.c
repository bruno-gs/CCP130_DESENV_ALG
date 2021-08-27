/* 
EX2
AUTOR: FRITZ
DATA: 27/08/2021
*/

/*EX2:Faça um programa que imprime uma sequência 
de n números em ordem inversa à da leitura.*/

#include <stdio.h>

int main(void){

    int n;

    printf("Digite quantos números deseja colocar: ");
    scanf(" %d", &n);

    float numeros[n];
    int i =0;

    // pedindo valor
    while(i<n){
        printf("Digite o %d numero: ", i+1);
        scanf(" %f", &numeros[i]);
        i ++;
    }
    
    int t = (n-1);
    // printando valor
    for(t; t>=0;t=t-1){
        printf("%.2f ", numeros[t]);
    }
    
    return 0;
}