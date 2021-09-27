#include <stdio.h>
#include <math.h>

// Função para cálculo da potencia de um número com outro
float potencia(float x, int n){
    float produto = 1;
    for(int i=0; i<n; i++){
        produto= produto * x;
    }
    return produto;
}

// Função hipotenusa sendo usada com a potencia
float hipotenusa(float c1, float c2){
    return sqrt(potencia(c1,2) + potencia(c2,2));
}

void main(){
    float x;
    int n;

    // bloco pedindo os inputs do usuario para potencia
    printf("Digite um valor que sera elevado: ");
    scanf(" %f", &x);
    printf("Digite o fator da potência: ");
    scanf(" %d", &n);

    float resultado = potencia(x,n);

    printf("O valor resultante de %.1f elevado a %d, é: %.2f \n", x, n, resultado);

    // chamando a hipotenusa com os valores dos catetos em 10 e 10
    // resulta em 14,14
    printf("Hipotenusa: %.2f \n", hipotenusa(10,10));

}