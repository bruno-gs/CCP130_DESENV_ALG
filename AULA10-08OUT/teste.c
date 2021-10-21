#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (){
    double num_1 = 1, num_2 = 7;
    double divisao_certa  = roundf( ((float)num_1 / (float)num_2)*10 ) / 10;
    printf("%lf\n",divisao_certa);
    double divisao_user   = 0.2; 
    double one = (divisao_user-divisao_certa);
    printf("%lf\n",one);
    //printf("%lf\n",abs(one));
    if (one<0.0){
        one = one * -1;
    }
    if(one == 0.00){
        printf("correta");
    }
    //printf(" %d",(int)((divisao_user-divisao_certa)*10));
    return 0;
}