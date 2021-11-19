#include <stdio.h>

int add1(int i){
    i ++;
    return i;
}

void iterate(int v[], int n, int (*ptr)(int*)){
    for(int i = 0; i < n; i++){
        v[i] = ptr(v[i]);
    }
}

int main(){
    int vetor[] = {10,20,30,40,50,60,70};
    int tam = sizeof(vetor) / sizeof(int);
    iterate(vetor, tam, add1);
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}