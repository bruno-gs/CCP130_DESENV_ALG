# include <stdio.h>

int main(void){
    int valor_tab=0, mult_tab=0;

    // chamada
    printf("\nTodas as tabuadas de 0 a 10\n");

    // while para cada valor de tabuada
    while(valor_tab<=10){

        printf("TABUADA DO %d\n", valor_tab);
        // while para cada multiplicação
        mult_tab = 0;
        while(mult_tab<=10){
            printf("%d x %d = %d\n", valor_tab, mult_tab, (valor_tab*mult_tab));
            mult_tab++;
        }
        printf("Tabuada do %d FINALIZADA\n\n\n", valor_tab);
        valor_tab++;
    }
    return 0;
}