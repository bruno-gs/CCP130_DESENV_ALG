#include <stdio.h>

int main(void){
    int num=0, ultimo;
    printf("DIgite o ultimo numero: ");
    scanf(" %d", &ultimo);
    while(num <= ultimo){
        if(num % 2 == 0){
            printf("%d\n", num);
        }
        num ++;
    }

    return 0;
}