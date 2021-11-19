/*
AUTOR: FRITZ
DATA: 19/11/2021

Escreva um programa em C que leia as medidas dos
lados de um triângulo e escreva se ele é equilátero,
isósceles ou escaleno. Utilize enum para os tipos dos
triângulos.
• Triângulo equilátero: 3 lados iguais.
• Triângulo isósceles: 2 lados iguais.
• Triângulo escaleno: 3 lados diferentes.

*/

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

    switch(tipo){
        case escaleno:
            puts("Escaleno");
            break;
        case isosceles:
            puts("Escaleno");
            break;
        case equilatero:
            puts("Escaleno");
            break;
    }
    
    return 0;
}