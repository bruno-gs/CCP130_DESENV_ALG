#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (){
    double num_1 = 2, num_2 = 6;
    double divisao_certa  = roundf( ((float)num_1 / (float)num_2)*10 ) / 10;
    printf("%lf\n",divisao_certa);
    double divisao_user   = 0.3; 
    double one = (divisao_user-divisao_certa);
    printf("%lf\n",one);
    if(abs(one)==0.0){
        printf("correta");
    }
    printf(" %d",(int)((divisao_user-divisao_certa)*10));
    return 0;
}