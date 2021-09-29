/*
Autor : FRITZ
DATA: 28/09/2021

Uma data é considerada mágica quando o dia multiplicado pelo mês é igual ao ano de dois dígitos. 

Por exemplo, 10 de junho de 1960 é uma data mágica porque 
    junho é o sexto mês e 6 vezes 10 é 60, o que equivale ao ano de dois dígitos. 
    
Escreva uma função que determine se uma data é ou não uma data mágica.

Use sua função em um programa principal que deve encontrar e exibir todas as datas mágicas do século XX.
*/

#include <stdio.h>

void magica(){

    // for que compreende todos os anos do século 20
    for(int ano=0; ano<=99; ano++){

        // for para cada mês do ano
        for(int mes = 1; mes <= 12; mes ++){

            // condição para os meses com 31 dias
            if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)){
                
                // for para cada dia do mes
                for (int dia = 1; dia <= 31; dia++){
                    // condição do print
                    if((dia * mes) == ano){
                        printf("A data %d/%d/%d é mágica\n", dia, mes, (1900+ano));
                    }
                }
            }

            // condição para os meses com 30 dias
            else if((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)){

                // for para cada dia do mes
                for (int dia = 1; dia <= 30; dia++){
                    // condição do print
                    if((dia * mes) == ano){
                        printf("A data %d/%d/%d é mágica\n", dia, mes, (1900+ano));
                    }
                }
            }

            // condição para fevereiro
            else if((mes == 2)){

                // for para cada dia do mes
                for (int dia = 1; dia <= 28; dia++){
                    // condição do print
                    if((dia * mes) == ano){
                        printf("A data %d/%d/%d é mágica\n", dia, mes, (1900+ano));
                    }                    
                }
            }
        }
    }

}

int main(void){
    magica();
}
