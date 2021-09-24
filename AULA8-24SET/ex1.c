#include <stdio.h>
#include <math.h>

float potencia(float x, int n){
    float produto = 1;
    for(int i=0; i<n; i++){
        produto= produto * x;
    }
    return produto;
}

float hipotenusa(float c1, float c2){
    return sqrt(potencia(c1,2) + potencia(c2,2));
}

void main(){
    float x;
    int n;

    printf("Digite um valor que sera elevado: ");
    scanf(" %f", &x);
    printf("Digite o fator da potência: ");
    scanf(" %d", &n);

    float resultado = potencia(x,n);

    printf("O valor resultante de %f elevado a %d, é: %f \n", x, n, resultado);

    printf("Hipotenusa: %f \n", hipotenusa(10,10));

}