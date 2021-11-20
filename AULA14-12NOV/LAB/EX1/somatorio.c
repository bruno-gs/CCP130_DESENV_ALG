// Não é biblioteca padrão - busca em outro local que indicarmos
#include "somatorio.h"
// biblioteca padrão
//#include <stdio.h>

void soma(int n1, int n2){
    int total = 0;
    int i, min = n1, max = n2;

    if(n1>n2){
        min = n2;
        max = n1;
    }

    for(int i=min+1; i<max;i++){
        total += i;
    }
    
    printf("Somatória: %d\n",total);
}


