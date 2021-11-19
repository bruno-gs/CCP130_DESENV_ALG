#include <stdio.h>

enum triangulos{escaleno, isosceles=2, equilatero}tipo;


int main(){
    float l1, l2, l3;

    puts("Digite os 3 lados: ");
    scanf(" %f %f %f", &l1, &l2, &l3);

    if (l1 != l2 && l1 != l3 && l2!=l3){
        tipo = escaleno;
    }
    else if(l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l2 == l3 && l2 != l1){
        tipo = isosceles;
    }
    else{
        tipo = equilatero;
    }
    printf("%d lados iguais\n",tipo);
    return 0;
}